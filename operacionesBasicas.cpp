
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <windows.h>

using namespace std;

class OperacionesBasicas{

    int opcion;
    string sNumerito = "0";

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
        // Almacenar el último dato
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

    /*
    * Modulo 1: Operaciones basicas
    * - suma, resta, multiplicacines, divisiones
    * - Mezclas
    */
    public:
    void o_basicas(){
        
        int conteo = 0;
        while (conteo == 0){
            windowsClean(5, "cls");
            titleApp();
            cout << endl;
            textColor("blanco"); cout << "   A continuacion se le presentara una serie de opciones, por favor seleccione una: \n";
            textColor("azul"); cout << "   1. Suma\n";
            textColor("azul_b"); cout << "   2. Resta\n";
            textColor("azul"); cout << "   3. Multiplicacion\n";
            textColor("azul_b"); cout << "   4. Division\n";
            textColor("azul"); cout << "   5. Salir\n";
            textColor("blanco");
            cout << endl <<"   "; cin >> opcion;
            switch(opcion) {
                case 1:{
                    windowsClean(5, "cls"); titleApp();

                    textColor("azul"); cout << "   1. Suma\n";
                    textColor("blanco");
                    cout << "   Digite los numeros (ejm: 1 + 3 + 4 + 5, etc):\n";
                    cout << "   "; cin >> sNumerito;
                    double dato = adjuntarDatos(sNumerito, "+");
                    cout << "   --> R de sumar es: " << dato << endl;
                    break;
                }
                case 2:{
                    windowsClean(5, "cls"); titleApp();
                    textColor("azul_b"); cout << "   2. Resta\n";
                    textColor("blanco");
                    cout << "   Digite los numeros (ejm: 1 - 3 - 4 - 5, etc):\n";
                    cout << "   "; cin >> sNumerito;
                    double dato = adjuntarDatos(sNumerito, "-");
                    cout << "   --> R de restar es: " << dato << endl;
                    break;
                }
                case 3:{
                    windowsClean(5, "cls"); titleApp();
                    textColor("azul"); cout << "   3. Multiplicacion\n";
                    textColor("blanco");                
                    cout << "   Digite los numeros (ejm: 1 * 3 * 4 * 5, etc):\n";
                    cout << "   "; cin >> sNumerito;
                    double dato = adjuntarDatos(sNumerito, "*");
                    cout << "   --> R de multiplicar es: " << dato << endl;
                    break;
                }
                case 4:{
                    windowsClean(5, "cls"); titleApp();
                    int num01;
                    int num02;
                    textColor("azul"); cout << "   4. Division\n";
                    textColor("blanco");                
                    cout << "   Digite el primer numero:\n";
                    cout << "   "; cin >> num01;
                    cout << "   Digite el segundo numero:\n";
                    cout << "   "; cin >> num02;
                    double dato = num01/num02;
                    cout << "   --> R de dividir es: " << dato << endl;
                    break;
                } 
                default:{
                    conteo = 1;
                    // exit(0);
                    break;
                }
            }

            string texto;
            cout << "   Escriba y presione cualquier tecla para continuar! ";
            cin >> texto;

        }
        
    
        
    }


    
};
