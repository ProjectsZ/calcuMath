
#include <iostream>
#include <math.h>

using namespace std;

// Clase Ecuacion (clase base para las ecuaciones)
class Ecuacion {
public:
    virtual void resolver() = 0;
};

// Clase para resolver las ecuaciones de primer grado (ax + b = 0)
class EcuacionLineal : public Ecuacion {
protected:
    double a, b;

public:
    EcuacionLineal(double a, double b) : a(a), b(b) {}

    void resolver() override {
        if (a == 0) {
            cout << "     No es una ecuacion de primer grado valida." << endl;
        } else {
            double x = -b / a;
            cout << "     La ecuacion es x = " << x << endl;
        }
    }
};

// Clase para las ecuaciones de segundo grado (ax^2 + bx + c = 0)
class EcuacionCuadratica : public Ecuacion {
protected:
    double a, b, c;

public:
    EcuacionCuadratica(double a, double b, double c) : a(a), b(b), c(c) {}

    void resolver() override {
        double discriminante = pow(b,2) - 4 * a * c;
        if (discriminante < 0) {
            cout << "     La ecuacion no tiene soluciones reales." << endl;
        } else if (discriminante == 0) {
            double x = -b / (2 * a);
            cout << "     La ecuaucion unica es x = " << x << endl;
        } else {
            double x1 = (-b + sqrt(discriminante)) / (2 * a);
            double x2 = (-b - sqrt(discriminante)) / (2 * a);
            cout << "     La ecuauciones son x1 = " << x1 << " y x2 = " << x2 << endl;
        }
    }
};

class EcuacionesEmpiricas {
    int opcion;
    double a, b, c;


 /** color == verde, cian, rojo, morado, amarillo, blanco, plomo */
    void textColor(const string color){
        HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
        
        // transform(color.begin(), color.end(), color.begin(),
        // [](unsigned char c){ return tolower(c); });

        if(color == "azul"){    SetConsoleTextAttribute(handle, 1);
        }else if(color == "verde"){    SetConsoleTextAttribute(handle, 2);
        }else if(color == "cian"){    SetConsoleTextAttribute(handle, 3);
        }else if(color == "rojo"){    SetConsoleTextAttribute(handle, 4);
        }else if(color == "morado"){    SetConsoleTextAttribute(handle, 5);
        }else if(color == "amarillo"){    SetConsoleTextAttribute(handle, 6);
        }else if(color == "blanco"){    SetConsoleTextAttribute(handle, 7);
        }else if(color == "plomo"){    SetConsoleTextAttribute(handle, 8);
        }else if(color == "azul_b"){    SetConsoleTextAttribute(handle, 9);
        }else if(color == "verde_b"){    SetConsoleTextAttribute(handle, 10);
        }else if(color == "cian_b"){    SetConsoleTextAttribute(handle, 11);
        }else if(color == "rojo_b"){    SetConsoleTextAttribute(handle, 12);
        }else if(color == "morado_b"){    SetConsoleTextAttribute(handle, 13);
        }else if(color == "amarillo_b"){    SetConsoleTextAttribute(handle, 14);
        }else if(color == "blanco_b"){    SetConsoleTextAttribute(handle, 15);
        } else{        
            SetConsoleTextAttribute(handle, 7);
        }
    }

/* Codigo para adjuntar datos (string param_texto, string signo_operacion) */
    
    double adjuntarDatos(string texto, string signo){

        int count_signe = 0;
        double datos_a_devolver;

        for (int i = 0; i < texto.length(); i++) {
            if (texto[i] == '+' || texto[i] == '-' || texto[i] == '*') {
                count_signe++;
            }
        }

        // Crear el array para almacenar los datos
        int datos[count_signe + 1];

        // Almacenar los datos en el array
        int j = 0;
        for (int i = 0; i < count_signe; i++) {
            // funcion stoi, convierte string a numero
            datos[i] = stoi(texto.substr(j, texto.find(signo, j) - j));
            j = texto.find(signo, j) + 1;
        }
        // Almacenar el ultimo dato
        datos[count_signe] = stoi(texto.substr(j));

        // Imprimir los datos almacenados en el array

        if(signo == "+"){
            for (int i = 0; i < count_signe + 1; i++) {
                datos_a_devolver += datos[i];
            }
        }else if(signo == "-"){
            for (int i = 0; i < count_signe + 1; i++) {
                datos_a_devolver -= datos[i];
            }
        }else if(signo == "*"){
            datos_a_devolver = 1;
            for (int i = 0; i < count_signe + 1; i++) {
                cout << "Datos ::::::: " << datos[i] << endl;
                datos_a_devolver = datos_a_devolver * datos[i];
            }
        }else{
            datos_a_devolver = 9999999999; // falta poner un codigo para corregir el error de datos erroneos
        }

        return datos_a_devolver;

    }

    public:
    void windowsClean(int i = 1, const char command[50] = "cls"){
        system(command);
        Sleep(i);
    }

    void titleApp(){
    
        textColor("blanco");
        cout << endl;
        
        cout <<" ******************************************************************************************\n";
        cout <<" *                    ___       _                __  __         _    _                    *\n"; 
        cout <<" *                   / __|  __ | |  _    _  _   |  !! |  __ _  | |_ | |_                  *\n";
        cout <<" *                  | (__  / _`| | / _| | || |  | |V| |/ _` | |  _| | ' |                 *\n";
        cout <<" *                  |____|/  |_|_|_|__| |____|  |_| |_||__,_|  |__| |_||_|                *\n";
        cout <<" *                                                                                        *\n";
        cout <<" ******************************************************************************************\n";
        cout << endl;
        cout << endl;
    }

    public:
    void e_empiricas(){

        string text_p = "";

        int conteo = 0;
        while (conteo == 0){
            windowsClean(5, "cls");
            titleApp();
            cout << endl;
            textColor("verde_b"); cout << "   Selecciona el tipo de ecuacion a resolver:" << endl;
            textColor("verde"); cout << "   1. Ecuacion de primer grado (ax + b = 0)" << endl;
            textColor("verde_b"); cout << "   2. Ecuacion de segundo grado (ax^2 + bx + c = 0)" << endl;
            textColor("verde_b"); cout << "   3. Salir" << endl;
            
            textColor("verde"); cout << "   Opcion: ";
            textColor("blanco");
            cout <<"   "; cin >> opcion;

            if (opcion == 1) {
                windowsClean(5, "cls"); titleApp();
                textColor("verde"); cout << "   1. Ecuacion de primer grado (ax + b = 0)" << endl;
                textColor("blanco");
                cout << "    Ingrese el valor de a: ";
                cout <<"    "; cin >> a;
                cout << "    Ingrese el valor de b: ";
                cout <<"    "; cin >> b;

                EcuacionLineal ecuacionLineal(a, b);
                ecuacionLineal.resolver();
                cout << "   "; cin >> text_p;
            } else if (opcion == 2) {
                windowsClean(5, "cls"); titleApp();
                textColor("verde_b"); cout << "   2. Ecuacion de segundo grado (ax^2 + bx + c = 0)" << endl;
                textColor("blanco");
                cout << "    Ingrese el valor de a: ";
                cout <<"    "; cin >> a;
                cout << "    Ingrese el valor de b: ";
                cout <<"    "; cin >> b;
                cout << "    Ingrese el valor de c: ";
                cout <<"    "; cin >> c;

                EcuacionCuadratica ecuacionCuadratica(a, b, c);
                ecuacionCuadratica.resolver();
                cout << "   "; cin >> text_p;
            } else {
                cout << "    Opcion invalida." << endl;
                conteo = 1;
            }
            
            string texto;
            cout << "   Escriba y presione cualquier tecla para continuar! ";
            cin >> texto;
        }

    }
};
