
#include <iostream>
#include <cmath>
using namespace std;

class Area {
    
    public:
    float base, altura, dmayor, dmenor, radio, altura2;

    public:
    Area(float _base, float _altura, float _dmayor, float _dmenor, float _radio, float _altura2)
    {
        base = _base;
        altura = _altura;
        dmayor = _dmayor;
        dmenor = _dmenor;
        radio = _radio;
        altura2 = _altura2;
    }

    float area_triangulo()
    {
        float area = (base * altura) / 2;
        return area;
    }

    float area_cuadrado()
    {
        float area = base * base;
        return area;
    }

    float area_circulo()
    {
        float area = M_PI * pow(radio, 2);
        return area;
    }

    float area_rombo()
    {
        float area = (dmayor * dmenor) / 2;
        return area;
    }

    float area_trapecio()
    {
        float area = ((dmayor + dmenor) / 2) * altura;
        return area;
    }
};

class Volumen : public Area {
    
    public:
    Volumen(float _base, float _altura, float _dmayor, float _dmenor, float _radio, float _altura2) : Area(_base, _altura, _dmayor, _dmenor, _radio, _altura2)
    {
    }

    float volumen_triangulo()
    {
        float volumen = ((base * altura) / 2) * altura2;
        return volumen;
    }

    float volumen_cuadrado()
    {
        float volumen = base * base * altura2;
        return volumen;
    }

    float volumen_circulo()
    {
        float volumen = (4.0 / 3.0) * M_PI * pow(radio, 3);
        return volumen;
    }

    float volumen_rombo()
    {
        float volumen = ((dmayor * dmenor) / 2)*altura2;
        return volumen;
    }

    float volumen_trapecio()
    {
        float volumen = (((dmayor + dmenor) * altura )/ 2)* altura2;
        return volumen;
    }
};



class BancoFormulas{

    float base, altura, altura2, dmayor, dmenor, radio;
    int opcion_formulas;

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

    void o_formulas(){

        string text_p = "";

        int conteo = 0;
        while (conteo == 0){

            windowsClean(5, "cls");
            titleApp();
            cout << endl;
            textColor("blanco"); cout << "  Bienvenido al Modulo de Formulas Matematicas:\n";
            textColor("cian"); cout << "  Formulas matematicas:\n";
            textColor("cian_b"); cout << "  1. Distancia del segmento\n";
            textColor("cian"); cout << "  2. Areas\n";
            textColor("cian_b"); cout << "  3. Volumenes\n";
            textColor("cian"); cout << "  4. Salir\n";
            textColor("blanco");
            cout << endl <<"   "; cin >> opcion_formulas;

            switch (opcion_formulas)
            {
                case 1:
                {
                    windowsClean(5, "cls"); titleApp();

                    int x1, x2, y1, y2;
                    textColor("cian");
                    cout << "   Elegiste la opcion 1 para calcular el segmento de 2 puntos (A y B)"<<endl;
                    textColor("blanco");

                    cout << "   A(x1, y1) & B(x2, y2)" << endl;
                    cout << "   Formula: dAB^2 = (x2 - x1)^2 + (y2 - y1)^2" << endl;
                    cout << "   Digite la posicion A: x1 & y1: ";
                    cout<<endl;
                    cout <<"   "; cin >> x1; 
                    cout <<"   "; cin >> y1;
                    cout << "   Digite la posicion B: x2 & y2: ";
                    cout<<endl;
                    cout <<"   "; cin >> x2;
                    cout <<"   "; cin >> y2;
                    cout <<"   dAB = " << sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)) << endl;

                    cout << "   "; cin >> text_p;

                    break;
                }
                case 2:
                {
                    windowsClean(5, "cls"); titleApp();
                    int pausar02 = 0;
                    while(pausar02 == 0){
                        
                        windowsClean(5, "cls");
                        titleApp();

                        int op2;
                        textColor("cian_b");
                        cout << "  Elegiste la opcion 2, ¿que desea calcular?\n";                    

                        textColor("cian_b"); cout << "  1. Area del triangulo\n";
                        textColor("cian_b"); cout << "  2. Area del cuadrado o cubo perfecto\n";
                        textColor("cian_b"); cout << "  3. Area del circulo (esfera)\n";
                        textColor("cian_b"); cout << "  4. Area del rombo\n";
                        textColor("cian_b"); cout << "  5. Area del trapecio\n";
                        textColor("cian_b"); cout << "  6. Salir\n";
                        textColor("blanco");
                        cout <<"   "; cin >> op2;

                        switch (op2)
                        {
                        case 1:
                        {
                            cout << "   Ingrese la base del triangulo: ";
                            cout <<"   "; cin >> base;
                            cout << "   Ingrese la altura del triangulo: ";
                            cout <<"   "; cin >> altura;
                            Area figura(base, altura, 0, 0, 0, 0);
                            float areaTriangulo = figura.area_triangulo();
                            cout << "   El area del triangulo es: " << areaTriangulo << endl;
                            cout << "   "; cin >> text_p;
                            break;
                        }
                        case 2:
                        {
                            cout << "   Ingrese la base del cuadrado: ";
                            cout <<"   "; cin >> base;
                            Area figura(base, 0, 0, 0, 0, 0);
                            float areaCuadrado = figura.area_cuadrado();
                            cout << "   El area del cuadrado es: " << areaCuadrado << endl;
                            cout << "   "; cin >> text_p;
                            break;
                        }
                        case 3:
                        {
                            cout << "   Ingrese el radio del circulo: ";
                            cout <<"   "; cin >> radio;
                            Area figura(0, 0, 0, 0, radio, 0);
                            float areaCirculo = figura.area_circulo();
                            cout << "   El area del circulo es: " << areaCirculo << endl;
                            cout << "   "; cin >> text_p;
                            break;
                        }
                        case 4:
                        {
                            cout << "   Ingrese la diagonal mayor del rombo: ";
                            cout <<"   "; cin >> dmayor;
                            cout << "   Ingrese la diagonal menor del rombo: ";
                            cout <<"   "; cin >> dmenor;
                            Area figura(0, 0, dmayor, dmenor, 0, 0);
                            float areaRombo = figura.area_rombo();
                            cout << "   El area del rombo es: " << areaRombo << endl;
                            cout << "   "; cin >> text_p;
                            break;
                        }
                        case 5:
                        {
                            cout << "   Ingrese la base mayor del trapecio: ";
                            cout <<"   "; cin >> dmayor;
                            cout << "   Ingrese la base menor del trapecio: ";
                            cout <<"   "; cin >> dmenor;
                            cout << "   Ingrese la altura del trapecio: ";
                            cout <<"   "; cin >> altura;
                            Area figura(0, altura, dmayor, dmenor, 0, 0);
                            float areaTrapecio = figura.area_trapecio();
                            cout << "   El area del trapecio es: " << areaTrapecio << endl;
                            cout << "   "; cin >> text_p;
                            break;
                        }
                        case 6:
                            pausar02 = 1;
                            break;
                        default:
                            cout << "   Opcion invalida." << endl;
                            cout << "   "; cin >> text_p;
                            break;
                        }
                        
                        string texto0;
                        cout << "   Escriba y presione cualquier tecla para continuar! ";
                        cin >> texto0;
                        
                    }

                    
                    cout << "   "; cin >> text_p;                    
                    break;
                }
                case 3:
                {
                    windowsClean(5, "cls"); titleApp();
                    int pausar = 0;
                    while(pausar == 0){

                        windowsClean(5, "cls");
                        titleApp();

                        int op3;
                        textColor("cian_b");
                        cout << "  Elegiste la opcion 3, ¿que desea calcular?\n";
                        textColor("cian_b"); cout << "  1. Volumen del triangulo\n";
                        textColor("cian_b"); cout << "  2. Volumen del cuadrado o cubo perfecto\n";
                        textColor("cian_b"); cout << "  3. Volumen del circulo (esfera)\n";
                        textColor("cian_b"); cout << "  4. Volumen del rombo\n";
                        textColor("cian_b"); cout << "  5. Volumen del trapecio\n";
                        textColor("cian_b"); cout << "  6. Salir\n";
                        textColor("blanco");
                        cout <<"   "; cin >> op3;

                        switch (op3)
                        {
                        case 1:
                        {
                            cout << "   Ingrese la base del triangulo: ";
                            cout <<"   "; cin >> base;
                            cout << "   Ingrese la altura del triangulo: ";
                            cout <<"   "; cin >> altura;
                            cout << "   Ingrese la altura adicional del triangulo: ";
                            cout <<"   "; cin >> altura2;
                            Volumen figura(base, altura, 0, 0, 0, altura2);
                            float volumenTriangulo = figura.volumen_triangulo();
                            cout << "   El volumen del triangulo es: " << volumenTriangulo << endl;
                            
                            cout << "   "; cin >> text_p;break;
                        }
                        case 2:
                        {
                            cout << "   Ingrese el lado del cuadrado: ";
                            cout <<"   "; cin >> base;
                            Volumen figura(base, 0, 0, 0, 0, base);
                            float volumenCuadrado = figura.volumen_cuadrado();
                            cout << "   El volumen del cuadrado es: " << volumenCuadrado << endl;
                            cout << "   "; cin >> text_p;break;
                        }
                        case 3:
                        {
                            cout << "   Ingrese el radio del circulo: ";
                            cout <<"   "; cin >> radio;
                            Volumen figura(base, 0, 0, 0, radio, 0);
                            float volumenCirculo = figura.volumen_circulo();
                            cout << "   El volumen del circulo es: " << volumenCirculo << endl;
                            cout << "   "; cin >> text_p;break;
                        }
                        case 4:
                        {
                            cout << "   Ingrese la diagonal mayor del rombo: ";
                            cout <<"   "; cin >> dmayor;
                            cout << "   Ingrese la diagonal menor del rombo: ";
                            cout <<"   "; cin >> dmenor;
                            cout << "   Ingrese la altura del rombo: ";
                            cout <<"   "; cin >> altura2;
                            Volumen figura(0, 0, dmayor, dmenor, 0, altura2);
                            float volumenRombo = figura.volumen_rombo();
                            cout << "   El volumen del rombo es: " << volumenRombo << endl;
                            cout << "   "; cin >> text_p;break;
                        }
                        case 5:
                        {
                            cout << "   Ingrese la base mayor del trapecio: ";
                            cout <<"   "; cin >> dmayor;
                            cout << "   Ingrese la base menor del trapecio: ";
                            cout <<"   "; cin >> dmenor;
                            cout << "   Ingrese la altura bidimensional del trapecio: ";
                            cout <<"   "; cin >> altura;
                            cout<<"   Ingrese la altura tridimensional del trapecio: ";
                            cout <<"   "; cin >> altura2;
                            Volumen figura(0, altura, dmayor, dmenor, 0, altura2);
                            float volumenTrapecio = figura.volumen_trapecio();
                            cout << "   El volumen del trapecio es: " << volumenTrapecio << endl;
                            cout << "   "; cin >> text_p;break;
                        }
                        case 6:
                            pausar = 1;
                            break;
                        default:
                            cout << "   Opcion invalida." << endl;
                            cout << "   "; cin >> text_p;break;
                        }

                        
                        string texto0;
                        cout << "   Escriba y presione cualquier tecla para continuar! ";
                        cin >> texto0;
                    }

                    break;
                }
                case 4:{
                    cout << "   Elegiste la opcion 4. Hasta luego. Vuelve pronto!" << endl;
                    Sleep(6);
                    conteo = 1;
                    break;
                }
                default:{
                    cout << "   Opcion invalida." << endl;
                    Sleep(3);
                    cout << "   "; cin >> text_p;
                    break;
                }
            }
        }
                
        string texto;
        cout << "   Escriba y presione cualquier tecla para continuar! ";
        cin >> texto;
        
    }
};
