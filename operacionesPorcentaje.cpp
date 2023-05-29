
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <windows.h>

using namespace std;

class OperacionesPorcentaje{


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
    * Modulo 2: Calculo de porcentajes
    * - calcula precio final, desde descuentos y costos
    * - calcula salarios, desde valores que gana y aumenta 
    */
   public:
    void o_porcentaje(){
        
        int conteo = 0;
        while (conteo == 0){

            windowsClean(5, "cls");
            titleApp();
            cout << endl;
            textColor("blanco"); cout << "   Bienvenido al modulo de porcentajes\n";
            textColor("amarillo"); cout << "   Seleccione una platilla:\n";
            textColor("amarillo_b"); cout << "   1. descuento (%), costo (S/.); hallar PRECIO FINAL \n";
            textColor("amarillo"); cout << "   2. Gana (x mes), aumento (%); hallar NUEVO SALARIO \n";
            textColor("amarillo_b"); cout << "   3. Piden (%), no Piden (%) y lo que vende (x dia); Nuevo salario \n";
            textColor("amarillo"); cout << "   4. Salir \n";
            textColor("blanco");
            cout << endl <<"   "; cin >> opcion;
            
            switch(opcion) {
                case 1:{
                    windowsClean(5, "cls"); titleApp();

                    float descuento, costo;
                    textColor("amarillo"); 
                    cout << "   :::: Datos:\n";
                    textColor("blanco");
                    cout << "   Precio final: x ";
                    cout << "   Descuento (%): "; cin >> descuento;
                    cout << "   Costo (S/.): ";   cin >> costo;
                            
                    cout << "   .---------------------------------------.\n";
                    cout << "   |     x = costo - (costo*descuento)     |\n";
                    cout << "   .---------------------------------------.\n";
                    cout << "   Por lo tanto su precio final x es S/." << costo - costo*descuento;
                    cout << endl;
                    break;
                };
                case 2:{
                    windowsClean(5, "cls"); titleApp();
                    float gana, aumenta;
                    textColor("amarillo_b"); 
                    cout << "   :::: Datos:\n";
                    textColor("blanco");
                    cout << "   Gana (mes):  S/.";  cin >> gana;
                    cout << "   aumenta (%): ";     cin >> aumenta;

                    cout << "   .-----------------------------------.\n";
                    cout << "   |     x = gana + (gana*aumenta)     |\n";
                    cout << "   .-----------------------------------.\n";
                    cout << "   Por lo tanto su nuevo salario x es S/." << gana - gana*aumenta;
                    cout << endl;
                    break;
                };
                case 3:{
                    windowsClean(5, "cls"); titleApp();
                    float vende, clientes_p;
                    textColor("amarillo"); 
                    cout << "   :::: Datos:\n";
                    textColor("blanco");
                    cout << "   Lo que vende (#) al dia: ";  cin >> vende;
                    cout << "   clientes (%) que piden: ";   cin >> clientes_p;
                    cout << "   clientes (%) que no piden: " << 100 - clientes_p;
                    cout << "   METODO ASPA SIMPLE:○\n";
                    cout << vende << "     -----  " << clientes_p <<"%\n";
                    cout << "     x       -------    100%" ;
                            
                    cout << "   .-----------------------------------------------.\n";
                    cout << "   |     Vende  ------------------- Clientes %     |\n";
                    cout << "   |     x  --------------------------- total %100%|\n";
                    cout << "   .-----------------------------------------------.\n";
                    cout << "   Por lo tanto su nuevo salario x es S/." << (vende*100)/clientes_p;
                    cout << endl;
                    break;
                };
                default:{
                    conteo = 1;
                    break;
                }
            }

            string texto;
            cout << "   Escriba y presione cualquier tecla para continuar! ";
            cin >> texto;

        }

    }


};