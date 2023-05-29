
#include <iostream>
#include <string.h>
using namespace std;

class Long {
    public:
    float valcon;
    Long (float _valcon){
        valcon=_valcon;
    }
    float metros_pulgadas(){
        float result=valcon*39.37;
        return result;
    }
    float metros_pies(){
        float result=valcon*3.281;
        return result;
    }
    float metros_yardas(){
        float result=valcon*1.094;
        return result;
    }
    float pulgadas_metros(){
        float result=valcon/39.37;
        return result;
    }
    float pulgadas_pies(){
        float result=valcon/12;
        return result;
    }
    float pulgadas_yardas(){
        float result=valcon/36;
        return result;
    }
    float pies_metros(){
        float result=valcon/3.281;
        return result;
    }
    float pies_pulgadas(){
        float result=valcon/12;
        return result;
    }
    float pies_yardas(){
        float result=valcon/3;
        return result;
    }
    float yardas_metros(){
        float result=valcon/1.94;
        return result;
    }  
    float yardas_pulgadas(){
        float result=valcon*36;
        return result;
    }    
    float yardas_pies(){
        float result=valcon*3;
        return result;
    }                                                             
};

class Mas {
    public:
    float pes;
    Mas (float _pes){
        pes=_pes;
    }
    float kilo_libra(){
        float result=pes*2.205;
        return result;
    }
    float kilo_onza(){
        float result=pes*35.274;
        return result;
    }
    float libra_kilo(){
        float result=pes/2.205;
        return result;
    }
    float libra_onza(){
        float result=pes*16;
        return result;
    }
    float onza_kilo(){
        float result=pes/35.274;
        return result;
    }
    float onza_libra(){
        float result=pes/16;
        return result;
    }
                                                       
};

class Vol {
    public:
    float lit;
    Vol (float _lit){
        lit=_lit;
    }
    float litro_pinta(){
        float result=lit*2.113;
        return result;
    }
    float litro_onza(){
        float result=lit*33.814;
        return result;
    }
    float pinta_litro(){
        float result=lit/2.113;
        return result;
    }
    float pinta_onza(){
        float result=lit*16;
        return result;
    }
    float onza_litro(){
        float result=lit/33.814;
        return result;
    }
    float onza_pinta(){
        float result=lit/16;
        return result;
    }                                                             
};


class ConversionUnidades{

    int aux1,auxlon1,auxpes1,auxlit1,auxlon2,auxpes2,auxlit2;
    float valcon,pes,lit;

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


  public:
  void c_unidades(){
        string text_p = "";
    
        int conteo = 0;
        while (conteo == 0){
            windowsClean(5, "cls");
            titleApp();
            cout << endl;
            textColor("morado_b"); cout<< "   Esta es una calculadora de transformacion de unidades de medidas: "<<endl;
            textColor("morado_b"); cout<< "   Si desea calcular medidas de longitud, inserte 1"<<endl;
            textColor("morado_b"); cout<< "   Si desea calcular medidas de masa, inserte 2"<<endl;
            textColor("morado_b"); cout<< "   Si desea calcular medidas de volumen, inserte 3"<<endl;
            textColor("morado_b"); cout<< "   Si desea salir, inserte 4"<<endl;
            
            cout <<"   "; cin>>aux1;
            switch (aux1)
            {
                case 1:
                {
                    windowsClean(5, "cls"); titleApp();
                    textColor("morado_b"); cout<<"  Para unidades de longitud estan los metros, pulgadas, pies y yardas: "<<endl;
                    textColor("morado_b"); cout<<"  Primero ingrese la unidad de origen(1 para metros, 2 para pulgadas, 3 para pies, 4 para yardas)"<<endl;
                    textColor("blanco");
                    cout <<"   "; cin>>auxlon1;
                    switch (auxlon1)
                    {
                        case 1:
                        {
                            textColor("morado_b"); cout<<"  Usted eligio metros, ahora ingrese a la unidad que desea convertir"<<endl;
                            textColor("morado_b"); cout<<"  Elija entre las siguientes 3: 1 para pulgadas, 2 para pies, 3 para yardas"<<endl;
                            textColor("blanco");
                            cout <<"   "; cin>>auxlon2;
                            switch (auxlon2)
                            {
                                case 1:
                                {
                                    cout<<"  Eligio convertir a pulgadas"<<endl;
                                    cout<<"  Ingrese el monto por convertir: "<<endl;
                                    cout <<"   ";  cin>>valcon;
                                    Long valor(valcon);
                                    float conv1 =valor.metros_pulgadas();
                                    cout<<"    Su conversion es: "<< conv1 <<endl;
                                    cout << "   "; cin >> text_p;
                                    break;
                                }   
                                case 2:
                                {
                                    cout<< "  Eligio convertir a pies"<<endl;
                                     cout<<"  Ingrese el monto por convertir: "<<endl;
                                    cout <<"   ";  cin>>valcon;
                                    Long valor(valcon);
                                    float conv2 =valor.metros_pies();
                                    cout<<"    Su conversion es: "<< conv2 <<endl;
                                    cout << "   "; cin >> text_p;
                                    break;
                                }
                                case 3:
                                {
                                     cout<<"  Eligio convertir a yardas"<<endl;
                                     cout<<"  Ingrese el monto por convertir: "<<endl;
                                    cout <<"   ";  cin>>valcon;
                                    Long valor(valcon);
                                    float conv2 =valor.metros_yardas();
                                    cout<<"    Su conversion es: "<< conv2 <<endl;
                                    cout << "   "; cin >> text_p;
                                    break;
                                }
                            }
                            
                            break;
                        }
                        case 2:
                        {
                            textColor("morado_b"); cout<<"  Usted eligio pulgadas, ahora ingrese a la unidad que desea convertir"<<endl;
                            textColor("morado_b"); cout<<"  Elija entre las siguientes 3: 1 para metros, 2 para pies, 3 para yardas"<<endl;
                            cout <<"   "; cin>>auxlon2;
                            switch (auxlon2)
                            {
                                case 1:
                                {
                                    cout<<"  Eligio convertir a metros"<<endl;
                                    cout<<"  Ingrese el monto por convertir: "<<endl;
                                    cout <<"   ";  cin>>valcon;
                                    Long valor(valcon);
                                    float conv1 =valor.pulgadas_metros();
                                    cout<<"    Su conversion es: "<< conv1 <<endl;
                                    cout << "   "; cin >> text_p;
                                    break;
                                }   
                                    case 2:
                                    {
                                    cout<<"  Eligio convertir a pies"<<endl;
                                    cout<<"  Ingrese el monto por convertir: "<<endl;
                                    cout <<"   ";  cin>>valcon;
                                    Long valor(valcon);
                                    float conv2 =valor.pulgadas_pies();
                                    cout<<"    Su conversion es: "<< conv2 <<endl;
                                    cout << "   "; cin >> text_p;
                                    break;
                                }
                                    case 3:
                                {
                                    cout<<"  Eligio convertir a yardas"<<endl;
                                    cout<<"  Ingrese el monto por convertir: "<<endl;
                                    cout <<"   ";  cin>>valcon;
                                    Long valor(valcon);
                                    float conv3 =valor.pulgadas_yardas();
                                    cout<<"    Su conversion es: "<< conv3 <<endl;
                                    cout << "   "; cin >> text_p;
                                    break;             
                                }
                            }
                            break;
                        }
                        case 3:
                        {
                            cout<<"  Usted eligio pies, ahora ingrese a la unidad que desea convertir"<<endl;
                            cout<<"  Elija entre las siguientes 3: 1 para metros, 2 para pulgadas, 3 para yardas"<<endl;
                            cout <<"   "; cin>>auxlon2;
                            switch (auxlon2)
                            {
                                case 1:
                                {
                                    cout<<"  Eligio convertir a metros"<<endl;
                                    cout<<"  Ingrese el monto por convertir: "<<endl;
                                    cout <<"   ";  cin>>valcon;
                                    Long valor(valcon);
                                    float conv4 =valor.pies_metros();
                                    cout<<"    Su conversion es: "<< conv4 <<endl;
                                    cout << "   "; cin >> text_p;
                                    break;
                                }   
                                    case 2:
                                    {
                                    cout<<"  Eligio convertir a pulgadas"<<endl;
                                    cout<<"  Ingrese el monto por convertir: "<<endl;
                                    cout <<"   ";  cin>>valcon;
                                    Long valor(valcon);
                                    float conv5 =valor.pies_pulgadas();
                                    cout<<"    Su conversion es: "<< conv5 <<endl;
                                    cout << "   "; cin >> text_p;
                                    break;
                                }
                                    case 3:
                                {
                                    cout<<"  Eligio convertir a yardas"<<endl;
                                    cout<<"  Ingrese el monto por convertir: "<<endl;
                                    cout <<"   ";  cin>>valcon;
                                    Long valor(valcon);
                                    float conv6 =valor.pies_yardas();
                                    cout<<"    Su conversion es: "<< conv6 <<endl;
                                    cout << "   "; cin >> text_p;
                                    break;             
                                }
                            }
                            break;                    
                        }
                        case 4:
                        {
                            cout<<"  Usted eligio yardas, ahora ingrese a la unidad que desea convertir"<<endl;
                            cout<<"  Elija entre las siguientes 3: 1 para metros, 2 para pulgadas, 3 para pies"<<endl;
                            cout <<"   "; cin>>auxlon2;
                            switch (auxlon2)
                            {
                                case 1:
                                {
                                    cout<<"  Eligio convertir a metros"<<endl;
                                    cout<<"  Ingrese el monto por convertir: "<<endl;
                                    cout <<"   ";  cin>>valcon;
                                    Long valor(valcon);
                                    float conv7 =valor.yardas_metros();
                                    cout<<"    Su conversion es: "<< conv7 <<endl;
                                    cout << "   "; cin >> text_p;
                                    break;
                                }   
                                    case 2:
                                    {
                                    cout<<"  Eligio convertir a pulgadas"<<endl;
                                    cout<<"  Ingrese el monto por convertir: "<<endl;
                                    cout <<"   ";  cin>>valcon;
                                    Long valor(valcon);
                                    float conv8 =valor.yardas_pies();
                                    cout<<"    Su conversion es: "<< conv8 <<endl;
                                    cout << "   "; cin >> text_p;
                                    break;
                                }
                                    case 3:
                                {
                                    cout<<"  Eligio convertir a pies"<<endl;
                                    cout<<"  Ingrese el monto por convertir: "<<endl;
                                    cout <<"   ";  cin>>valcon;
                                    Long valor(valcon);
                                    float conv9 =valor.yardas_pies();
                                    cout<<"    Su conversion es: "<< conv9 <<endl;
                                    cout << "   "; cin >> text_p;
                                    break;             
                                }
                            }
                            break;
                        }
                    }
                }
                case 2:
                {
                    windowsClean(5, "cls"); titleApp();
                    cout<<"   Para unidades de masa tenemos el kilogramo, la libra y la onza: "<<endl;
                    cout<<"   Primero ingrese la unidad de origen(1 kilogramo, 2 para libra, 3 para onza)"<<endl;
                    cout <<"   "; cin>>auxlon1;
                    switch (auxlon1)
                    {
                        case 1:
                        {
                            cout<<"  Usted eligio Kilogramo, ahora ingrese a la unidad que desea convertir"<<endl;
                            cout<<"  Elija entre las siguientes 2: 1 para libra, 2 para onza"<<endl;
                            cout <<"   "; cin>>auxlon2;
                            switch (auxlon2)
                            {
                                case 1:
                                {
                                    cout<<"  Eligio convertir a libras"<<endl;
                                    cout<<"  Ingrese el monto por convertir: "<<endl;
                                    cin>>pes;
                                    Mas valor(pes);
                                    float conv10 =valor.kilo_libra();
                                    cout<<"    Su conversion es: "<< conv10 <<endl;
                                    cout << "   "; cin >> text_p;
                                    break; 
                                }
                                case 2:  
                                    cout<<"  Eligio convertir a onzas"<<endl;
                                    cout<<"  Ingrese el monto por convertir: "<<endl;
                                    cin>>pes;
                                    Mas valor(pes);
                                    float conv10 =valor.kilo_onza();
                                    cout<<"    Su conversion es: "<< conv10 <<endl;
                                    cout << "   "; cin >> text_p;
                                    break;                         
                            }
                            break;                    
                        }
                        case 2:
                        {
                            cout<<"  Usted eligio Libra, ahora ingrese a la unidad que desea convertir"<<endl;
                            cout<<"  Elija entre las siguientes 2: 1 para Kilogramo, 2 para Onza"<<endl;
                            cout <<"   "; cin>>auxlon2;
                            switch (auxlon2)
                            {
                                case 1:
                                {
                                    cout<<"  Eligio convertir a Kilogramos"<<endl;
                                    cout<<"  Ingrese el monto por convertir: "<<endl;
                                    cin>>pes;
                                    Mas valor(pes);
                                    float conv11 =valor.libra_kilo();
                                    cout<<"    Su conversion es: "<< conv11 <<endl;
                                    cout << "   "; cin >> text_p;
                                    break; 
                                }
                                case 2:  
                                    cout<<"  Eligio convertir a onzas"<<endl;
                                    cout<<"  Ingrese el monto por convertir: "<<endl;
                                    cin>>pes;
                                    Mas valor(pes);
                                    float conv12 =valor.libra_onza();
                                    cout<<"    Su conversion es: "<< conv12 <<endl;
                                    cout << "   "; cin >> text_p;
                                    break;                         
                            }
                            break;
                        }
                        case 3:
                        {
                            cout<<"  Usted eligio Onza, ahora ingrese a la unidad que desea convertir"<<endl;
                            cout<<"  Elija entre las siguientes 2: 1 para Kilogramo, 2 para Libra"<<endl;
                            cout <<"   "; cin>>auxlon2;
                            switch (auxlon2)
                            {
                                case 1:
                                {
                                    cout<<"  Eligio convertir a Kilogramo"<<endl;
                                    cout<<"  Ingrese el monto por convertir: "<<endl;
                                    cin>>pes;
                                    Mas valor(pes);
                                    float conv13 =valor.kilo_libra();
                                    cout<<"    Su conversion es: "<< conv13 <<endl;
                                    cout << "   "; cin >> text_p;
                                    break; 
                                }
                                case 2:  
                                    cout<<"  Eligio convertir a Libra"<<endl;
                                    cout<<"  Ingrese el monto por convertir: "<<endl;
                                    cin>>pes;
                                    Mas valor(pes);
                                    float conv14 =valor.kilo_onza();
                                    cout<<"    Su conversion es: "<< conv14 <<endl;
                                    cout << "   "; cin >> text_p;
                                    break;                         
                            }
                            break; 
                        }     
                    }
                }
                case 3:
                {
                    windowsClean(5, "cls"); titleApp();
                    cout<<"  Para unidades de volumen tenemos el Litro, la Pinta Americana y la Onza Americana: "<<endl;
                    cout<<"  Primero ingrese la unidad de origen(1 para Pinta, 2 para Libra, 3 para Onza)"<<endl;
                    cout <<"   "; cin>>auxlon1;
                    switch (auxlon1)
                    {
                        case 1:
                        {
                            cout<<"Usted eligio Litros, ahora ingrese a la unidad que desea convertir"<<endl;
                            cout<<"Elija entre las siguientes 2: 1 para Pinta, 2 para Onza"<<endl;
                            cout <<"   "; cin>>auxlon2;
                            switch (auxlon2)
                            {
                                case 1:
                                {
                                    cout<<"Eligio convertir a libras"<<endl;
                                    cout<<"Ingrese el monto por convertir: "<<endl;
                                    cin>>lit;
                                    Vol valor(lit);
                                    float conv15 =valor.litro_pinta();
                                    cout<<"    Su conversion es: "<< conv15 <<endl;
                                    cout << "   "; cin >> text_p;
                                    break; 
                                }
                                case 2:  
                                    cout<<"Eligio convertir a onzas"<<endl;
                                    cout<<"Ingrese el monto por convertir: "<<endl;
                                    cin>>lit;
                                    Vol valor(lit);
                                    float conv16 =valor.litro_onza();
                                    cout<<"    Su conversion es: "<< conv16 <<endl;
                                    cout << "   "; cin >> text_p;
                                    break;                         
                            }
                            break;                    
                        }
                        case 2:
                        {
                            cout<<"Usted eligio Pinta Americana, ahora ingrese a la unidad que desea convertir"<<endl;
                            cout<<"Elija entre las siguientes 2: 1 para Litros, 2 para Onza"<<endl;
                            cout <<"   "; cin>>auxlon2;
                            switch (auxlon2)
                            {
                                case 1:
                                {
                                    cout<<"Eligio convertir a Litros"<<endl;
                                    cout<<"Ingrese el monto por convertir: "<<endl;
                                    cin>>lit;
                                    Vol valor(lit);
                                    float conv17 =valor.pinta_litro();
                                    cout<<"    Su conversion es: "<< conv17 <<endl;
                                    cout << "   "; cin >> text_p;
                                    break; 
                                }
                                case 2:  
                                    cout<<"Eligio convertir a Onzas"<<endl;
                                    cout<<"Ingrese el monto por convertir: "<<endl;
                                    cin>>lit;
                                    Vol valor(lit);
                                    float conv18 =valor.pinta_onza();
                                    cout<<"    Su conversion es: "<< conv18 <<endl;
                                    cout << "   "; cin >> text_p;
                                    break;                         
                            }
                            break;
                        }
                        case 3:
                        {
                            cout<<"Usted eligio Onza, ahora ingrese a la unidad que desea convertir"<<endl;
                            cout<<"Elija entre las siguientes 2: 1 para Litros, 2 para Pinta"<<endl;
                            cout <<"   "; cin>>auxlon2;
                            switch (auxlon2)
                            {
                                case 1:
                                {
                                    cout<<"Eligio convertir a Litros"<<endl;
                                    cout<<"Ingrese el monto por convertir: "<<endl;
                                    cin>>lit;
                                    Vol valor(lit);
                                    float conv19 =valor.onza_litro();
                                    cout<<"    Su conversion es: "<< conv19 <<endl;
                                    cout << "   "; cin >> text_p;
                                    break; 
                                }
                                case 2:  
                                    cout<<"Eligio convertir a Libra"<<endl;
                                    cout<<"Ingrese el monto por convertir: "<<endl;
                                    cin>>lit;
                                    Vol valor(lit);
                                    float conv20 =valor.onza_pinta();
                                    cout<<"    Su conversion es: "<< conv20 <<endl;
                                    cout << "   "; cin >> text_p;
                                    break;                         
                            }
                            break; 
                        }     
                    }    
                }
                case 4:{
                    conteo = 1;
                    break;
                }
                default:{
                    cout << "   Seleccion incorrecta! ";
                    cin >> text_p;
                    break;
                }

            }

            string texto;
            cout << "   Escriba y presione cualquier tecla para continuar! ";
            cin >> texto;
    }
  }
};
