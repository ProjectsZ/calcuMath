
/* GRAFICO*/
#include<graphics.h>
#include<iostream>
#include<conio.h>
/*****************/

class EcuacionesGrafico {

    
    int opcion;
    float radio;


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
    * Modulo 6: Grafico de ecuaciones
    * Este modulo permitiría desarrollar ecuaciones basicas y graficarlos
    */
   public:
    void e_grafico(){
        
        int conteo = 0;
        while (conteo == 0){
            windowsClean(5, "cls");
            titleApp();
            cout << endl;        
            textColor("blanco"); cout <<"   Bienvenido al modulo de Graficar ecuaciones\n";
            textColor("plomo"); cout << "   Seleccione una platilla:\n";
            textColor("plomo"); cout << "   1. Graficar circunferencia \n";
            textColor("plomo"); cout << "   4. Salir \n";
            cin >> opcion;
            
            switch(opcion) {
                case 1:{
                    cout << "  radio r y el centro (h, k)\n";
                    cout << "  radio: "; cin >> radio;
                    
                    /* GRAFICO*/
                    char initC[] = "";
                    int gd = DETECT, gm;
                    initgraph(&gd, &gm, initC); // Inicializar la pantalla gr�fica

                    int xc = 320, yc = 240, r = radio;
                    drawCircle(xc, yc, r);

                    getch();
                    closegraph(); // Cerrar la pantalla gr�fica
                    /************************************************/

                    break;
                };
            
                default:{
                    exit(0);
                    break;
                }
            }
        }


    }

};

