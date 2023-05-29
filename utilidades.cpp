
#include <fstream>

#include <iostream>
#include <string>
#include <ctime>
#include <cerrno>
#include <cctype>
#include <algorithm>
#include <windows.h>

class Utilidades{

    public:
    Utilidades(){}

    public:
    void windowsClean(int i = 1, const char command[50] = "cls"){
        system(command);
        Sleep(i);
    }


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

    void gotoxy(short x, short y){
        COORD coord = {x, y};
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }

    vector<string> numerito(int i){
        const int MAX_SIZE = 10;
        vector<string> name;

        if(i == 1){
            name.push_back("   _   ");
            name.push_back("  / |  ");
            name.push_back("  | |  ");
            name.push_back("  |_|  ");
        }else if(i == 2){
        name.push_back("  ___  "); 
        name.push_back(" |_  ) "); 
        name.push_back("  / /  "); 
        name.push_back(" /___| "); 
        }else if(i == 3){
        name.push_back("  ____ "); 
        name.push_back(" |__ / "); 
        name.push_back("  |_ | "); 
        name.push_back(" |___/ "); 
        }else if(i == 4){
        name.push_back("  _ _  "); 
        name.push_back(" | | | "); 
        name.push_back(" |_  _|"); 
        name.push_back("   |_| "); 
        }else if(i == 5){
        name.push_back("  ___  "); 
        name.push_back(" | __| "); 
        name.push_back(" |__ | "); 
        name.push_back(" |___/ "); 
        }else if(i == 6){
        name.push_back("   __  "); 
        name.push_back("  / /  "); 
        name.push_back(" / _ | "); 
        name.push_back(" L___/ "); 
        }else if(i == 7){
        name.push_back("  ____ ");
        name.push_back(" |__  |");
        name.push_back("   / / ");
        name.push_back("  /_/  ");
        }else if(i == 8){
        name.push_back("  ___  ");
        name.push_back(" ( _ ) ");
        name.push_back(" / _ | ");
        name.push_back(" L___/ ");
        }else if(i == 9){
        name.push_back("  ___  ");
        name.push_back(" / _ | ");
        name.push_back(" L_, / ");
        name.push_back("  /_/  ");
        }else if(i == 0){
        name.push_back("   __  ");
        name.push_back("  /  | ");
        name.push_back(" | () |");
        name.push_back("  L__/ ");

        return name;
    }


    
};
};