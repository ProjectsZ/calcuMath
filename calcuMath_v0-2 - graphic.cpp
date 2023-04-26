
/* APP CalcuMath */
#include <iostream>
#include <string>
#include <time.h>
#include <math.h>
#include <complex>
#include <vector>

/* GRAFICO*/
#include<graphics.h>
#include<iostream>
#include<conio.h>
/*****************/

using namespace std;



struct Usuario {
    int id;
    string name;
};


struct formula_areas{
    double area[10];
    double area_v[10];
    double volumen[10];
    double altura[10];
    double base[10];

};




class OptionText{
    public:
    // quitar spacios (' ') de un string
    string quitarSpaceText(string datos){
        string sin_espacios = "";
        
        for (int i = 0; i < datos.length(); i++) {
            if (datos[i] != ' ') {
                sin_espacios += datos[i];
            }
        }
        
        return sin_espacios;
    }

    /* Codigo para adjuntar datos (string param_texto, string signo_operacion) */
    
    // metodo para generar un codigo random
    

    
    void drawCircle(int xc, int yc, int r)
    {
        int x = 0, y = r;
        int p = 1 - r;

        while (x <= y)
        {
            putpixel(xc + x, yc + y, WHITE);
            putpixel(xc - x, yc + y, WHITE);
            putpixel(xc + x, yc - y, WHITE);
            putpixel(xc - x, yc - y, WHITE);
            putpixel(xc + y, yc + x, WHITE);
            putpixel(xc - y, yc + x, WHITE);
            putpixel(xc + y, yc - x, WHITE);
            putpixel(xc - y, yc - x, WHITE);
            x++;

            if (p < 0)
            {
                p += 2 * x + 1;
            }
            else
            {
                y--;
                p += 2 * (x - y) + 1;
            }
        }
    }


};

class Math: public OptionText{

    public:
    int iniciando = 0;

    Math(int opcion, int iniciando){

        if(opcion >=1 && opcion <= 8){

            switch (opcion){
                case 1:{
                    cout << "------------ \n";
                    cout << "|    _      |\n";
                    cout << "|   / |     |\n";
                    cout << "|   | |     |\n";
                    cout << "|   |_|     |\n";
                    cout << "------------ \n";
                    cout << endl;
                    cout << "Usted selecciono, 'OPERACIONES BASICAS' ! \n";
                    cout << "Este modulo incluiría las operaciones basicas como suma, resta, multiplicacion y division.\n";
                    

                    
                    cout << "Desea continuar, efectuando este tipo de operaciones? (Y/N)\n";
                    string yesNo = "";
                    cin >> yesNo;
                    if(yesNo == "Y"){
                        
                    }else{
                        break;
                    }
                };
                case 2:{
                    cout << "------------ \n";
                    cout << "|    ___    |\n";
                    cout << "|   |_  )   |\n";
                    cout << "|    / /    |\n";
                    cout << "|   /___|   |\n";
                    cout << "------------ \n";
                    cout << endl;
                    cout << "Usted selecciono, 'CÁLCULO DE PORCENTAJE' ! \n";
                    cout << "Este modulo permitiría calcular porcentajes de un número.\n";
                    calculo_de_porcentaje();

                    
                    cout << "Desea continuar, efectuando este tipo de operaciones? (Y/N)\n";
                    string yesNo = "";
                    cin >> yesNo;
                    if(yesNo == "Y"){
                        calculo_de_porcentaje();
                    }else{
                        break;
                    }
                };
                case 3:{
                    cout << "------------ \n";
                    cout << "|    ____   |\n";    
                    cout << "|   |__ /   |\n";
                    cout << "|   |_ L    |\n";
                    cout << "|   |___/   |\n";
                    cout << "------------ \n";
                    cout << endl;
                    cout << "Usted selecciono, 'CALCULO DE FORMULAS' ! \n";
                    cout << "Permitira graficar cuadrados, círculos, esferas, entre otros.\n";
                    calculo_de_formulas();

                    
                    cout << "Desea continuar, efectuando este tipo de operaciones? (Y/N)\n";
                    string yesNo = "";
                    
                    cin >> yesNo;
                    if(yesNo == "Y"){
                        calculo_de_formulas();
                    }else{
                        break;
                    }
                };
                case 4:{
                    cout << "------------ \n";
                    cout << "|    _ _    |\n";
                    cout << "|   | | |   |\n";
                    cout << "|   |_  _|  |\n";
                    cout << "|   |_|     |\n";
                    cout << "------------- \n";
                    cout << endl;
                    cout << "Usted selecciono, 'CONVERSIoN DE UNIDADES' ! \n";
                    cout << "Este modulo permitiría convertir unidades de medida, como metros a pies, kilogramos a libras, entre otras.\n";
                    conversion_unidades();

                    
                    cout << "Desea continuar, efectuando este tipo de operaciones? (Y/N)\n";
                    string yesNo = "";
                    
                    cin >> yesNo;
                    if(yesNo == "Y"){
                        conversion_unidades();
                    }else{
                        break;
                    }
                };
                case 5:{
                    cout << "------------ \n";
                    cout << "|    ___    |\n";
                    cout << "|   | __|   |\n";
                    cout << "|   |__ !   |\n";
                    cout << "|   |___/   |\n";
                    cout << "-------------\n";
                    cout << endl;
                    cout << "Usted selecciono, 'ECUACIONES EMPIRICAS' ! \n";
                    cout << "Este modulo permitiría resolver ecuaciones matemáticas simples y complejas, para luego llegarlos a graficarlos.\n";
                    
                    
                    cout << "Desea continuar, efectuando este tipo de operaciones? (Y/N)\n";
                    string yesNo = "";
                    
                    cin >> yesNo;
                    if(yesNo == "Y"){
                        
                    }else{
                        break;
                    }
                };
                case 6:{
                    cout << "------------ \n";
                    cout << "|     __    |\n"; 
                    cout << "|    / /    |\n"; 
                    cout << "|   / __    |\n";  
                    cout << "|   L___/   |\n";  
                    cout << "-------------\n";
                    cout << endl;
                    cout << "Usted selecciono, 'GRAFICAS ECUACIONES' ! \n";

                    cout << "Este modulo permitiría realizar graficos basicos.\n";
                    ecuaciones_grafico();
                    
                    cout << "Desea continuar, efectuando este tipo de operaciones? (Y/N)\n";
                    string yesNo = "";
                    
                    cin >> yesNo;
                    if(yesNo == "Y"){
                        ecuaciones_grafico();
                    }else{
                        break;
                    }
                };
                case 7:{
                    cout << "------------ \n";
                    cout << "|    ____   |\n";
                    cout << "|   |__  |  |\n";
                    cout << "|     / /   |\n";
                    cout << "|    /_/    |\n";
                    cout << "-------------\n";
                    cout << endl;
                    cout << "Usted selecciono, 'HISTORIAL' ! \n";

                    exit(0); // salir del codigo
                };
                default:{
                    this->iniciando = 1;
                    exit(0); // salir del codigo
                    break;
                }
            }

        }else{
            this->iniciando = 1; // finalizar codigo
        }



    }

    public:
    // Convierte: pulgadas, pies, yardas, metros, etc
    float conversorlon (string lon, int valcon,int aux){
        float resultado;  

        switch (aux){
            case 1:
                if (lon=="pulgadas"){    resultado=valcon*39.37;
                } else if (lon=="pies"){   resultado=valcon*3.281; 
                } else if (lon=="yardas"){  resultado=valcon*1.094;} 
                break;
            case 2:
                if (lon=="metros"){    resultado=valcon/39.37 ;
                }  else if (lon=="pies"){   resultado=valcon/12;
                }  else if (lon=="yardas"){   resultado=valcon/36;}           
                break;
            case 3:
                if (lon=="metros"){    resultado=valcon/3.281 ;
                }  else if (lon=="pulgadas"){    resultado=valcon/12;
                }  else if (lon=="yardas"){    resultado=valcon/3; }           
                break;
            case 4:
                if (lon=="metros"){    resultado=valcon/1.094 ;
                }  else if (lon=="pulgadas"){   resultado=valcon*36;
                }  else if (lon=="pies"){   resultado=valcon*3; }           
                break;                   
        }  
        return resultado;
    }

    // Convierte: libra, onza, kilogramo
    float conversorlon2 (string lon, int valcon,int aux){
        float resultado;
        switch (aux){
            case 1:
                if (lon=="libra"){    resultado=valcon*2.205;
                }   else if (lon=="onza"){    resultado=valcon*35.274; }     
                break;
            case 2:
                if (lon=="kilogramo"){    resultado=valcon/2.205; }
                else if (lon=="onza"){    resultado=valcon*16; }       
                break;
            case 3:
                if (lon=="kilogramo"){    resultado=valcon/35.274 ;
                }  else if (lon=="libra"){   resultado=valcon/16; }
                break;                   
        }
        return resultado;
    }

    // convierte pinta, onza, metro
    float conversorlon3 (string lon, int valcon,int aux){
        float resultado;
        switch (aux){
            case 1:
                if (lon=="pinta"){    resultado=valcon*2.113; 
                }  else if (lon=="onza"){  resultado=valcon*33.814;
                }  else if (lon=="metro"){  resultado=valcon/1000; }
                break;    
            case 2:
                if (lon=="litro"){    resultado=valcon/2.113;
                }  else if (lon=="onza"){   resultado=valcon*16; 
                }  else if (lon=="metro"){   resultado=valcon/2113; }
                break;
            case 3:
                if (lon=="litro"){    resultado=valcon/33.814 ;
                }  else if (lon=="pinta"){  resultado=valcon/16;
                }  else if (lon=="metro"){  resultado=valcon/33810; }                
                break;
            case 4:
                if (lon=="litro"){    resultado=valcon*1000;
                } else if (lon=="pinta"){    resultado=valcon*2113; 
                } else if (lon=="onza"){    resultado=valcon*33810; }
                break;
        }
        return resultado;
    }

    // Funcion para resolver una ecuacion de primer grado de la forma ax + b = 0
    complex<double> ecuacionPrimerGrado(double a, double b) {
        return -b / a;
    }

    // Funcion para resolver una ecuacion de segundo grado de la forma ax^2 + bx + c = 0
    

    /* ----------------------------------------------------------------------------------- */
    
    /*
    * Modulo 1: Operaciones basicas
    * - suma, resta, multiplicacines, divisiones
    * - Mezclas
    */
   


    /*
    * Modulo 2: Calculo de porcentajes
    * - calcula precio final, desde descuentos y costos
    * - calcula salarios, desde valores que gana y aumenta 
    */
    void calculo_de_porcentaje(){
        int opcion;
        string sNumerito;

        cout << "Bienvenido al modulo de porcentajes\n";
        cout << "Seleccione una platilla:\n";
        cout << "1. descuento (%), costo (S/.); hallar PRECIO FINAL \n";
        cout << "2. Gana (x mes), aumento (%); hallar NUEVO SALARIO \n";
        cout << "3. Piden (%), no Piden (%) y lo que vende (x dia); Nuevo salario \n";
        cout << "4. Salir \n";
        cin >> opcion;
        
        switch(opcion) {
            case 1:{
                float descuento, costo;
                cout << ":::: Datos:\n";
                cout << "Precio final: x ";
                cout << "Descuento (%): "; cin >> descuento;
                cout << "Costo (S/.): ";   cin >> costo;
                        
                cout << ".---------------------------------------.\n";
                cout << "|     x = costo - (costo*descuento)     |\n";
                cout << ".---------------------------------------.\n";
                cout << "Por lo tanto su precio final x es S/." << costo - costo*descuento;
                cout << endl;
                break;
            };
            case 2:{
                float gana, aumenta;
                cout << ":::: Datos:\n";
                cout << "Gana (mes):  S/.";  cin >> gana;
                cout << "aumenta (%): ";     cin >> aumenta;

                cout << ".-----------------------------------.\n";
                cout << "|     x = gana + (gana*aumenta)     |\n";
                cout << ".-----------------------------------.\n";
                cout << "Por lo tanto su nuevo salario x es S/." << gana - gana*aumenta;
                cout << endl;
                break;
            };
            case 3:{
                float vende, clientes_p;
                cout << ":::: Datos:\n";
                cout << "Lo que vende (#) al dia: ";  cin >> vende;
                cout << "clientes (%) que piden: ";   cin >> clientes_p;
                cout << "clientes (%) que no piden: " << 100 - clientes_p;
                cout << "METODO ASPA SIMPLE:○\n";
                cout << vende << "  -----  " << clientes_p <<"%\n";
                cout << "  x       -------    100%" ;
                        
                cout << ".-----------------------------------------------.\n";
                cout << "|     Vende  ------------------- Clientes %     |\n";
                cout << "|     x  --------------------------- total %100%|\n";
                cout << ".-----------------------------------------------.\n";
                cout << "Por lo tanto su nuevo salario x es S/." << (vende*100)/clientes_p;
                cout << endl;
                break;
            };
            default:{
                exit(0);
                break;
            }
        }
    }


    /*
    * Modulo 3: Cálculo de formulas matemáticos
    * Este modulo permitiría calcular la distancia del segmento, punto medio, punto P con razon “r”,
    * posicion en las coordenadas, matrices, áreas y volúmenes de formas geométricas, como triángulos
    * (baricentro), cuadrados, círculos, esferas, entre otros.
    */
    void calculo_de_formulas(){
        
        formula_areas result;

        cout<<"Bienvenido al Modulo de formulas matematicos: \n";

        cout<<"Formulas matematicos: \n";
        cout<<"1. Distancia del segmento\n";
        cout<<"2. Areas\n";
        cout<<"3. Volumenes\n";
        cout<<"4. Salir\n";


        int op;
        cin>>op;
        switch(op){
            case 1:{ //distancia del segmento--------------------------------------------
                int x1,x2,y1,y2,distancia_segmento;
                cout<<"\nA(x1,y1) & B(x2,y2)"<<endl;
                cout<<"dAB^2= (x2-x1)^2 + (y2-y1)^2"<<endl;
                cout<<"Digite posicion A: x1 & y2: "<<endl;
                cin>>x1;
                cout<<endl;
                cin>>y1;
                cout<<endl;
                cout<<"Digite posicion B: x2 & y2: "<<endl;
                cin>>x2;
                cout<<endl;
                cin>>y2;
                cout<<"dAB^2= ("<<x2<<"-"<<x1<<")^2 + ("<<y2<<"-"<<y1<<")^2"<<endl;
                cout<<"dAB= "<< sqrt(pow((x2-x1),2) + pow((y2-y1),2)) <<endl;
                cout<<endl;

                break;
            }
            case 2:{ // volumenes--------------------------------------------
                cout<<"\nElige la opcion a realizar: "<<endl;
                cout<<"1. Area del triangulo"<<endl; // volumen[1]
                cout<<"2. Area del cuadrado o cubo perfecto"<<endl;// volumen[2]
                cout<<"3. Area del circulo (esfera)"<<endl;// volumen[3]
                cout<<"4. Area del rombo"<<endl;// volumen[4]
                cout<<"5. Area del trapecio"<<endl;// volumen[5]
                cout<<"6. Salir\n";

                int opc4;
                cin>>opc4;
                switch(opc4){
                    case 1:
                        cout<<"\n A(triangulo)= base * altura/2"<<endl;
                        cout<<"Digite la base y la altura (area): "<<endl;
                        float base_a_triangulo, altura_a_triangulo, area_triangulo;
                        cin>>base_a_triangulo;
                        cout<<endl;
                        cin>>altura_a_triangulo;
                        cout<<endl;

                        area_triangulo = (base_a_triangulo*altura_a_triangulo)/2;

                        cout<<"\nEl area del triangulo: "<< area_triangulo <<endl;

                        break;
                    case 2:
                        cout<<"\nA(cuadrado)= lado x lado"<<endl;
                        cout<<"Digite el lado: "<<endl;
                        float lado_v_cuadrado, area_cuadrado;
                        cin>>lado_v_cuadrado;
                        area_cuadrado=pow(lado_v_cuadrado,2);

                        cout<<"\nEl area del cuadrado: "<< area_cuadrado <<endl;
                        break;

                    case 3:
                        cout<<"\nA(circulo)= PI x radio^2"<<endl;
                        cout<<"Digite el radio: "<<endl;
                        float radio_esfera, area_circulo;
                        cin>>radio_esfera;
                        area_circulo= M_PI*(pow(radio_esfera,2));

                        cout<<"\nEl area de la esfera:"<< area_circulo <<endl;

                        break;

                    case 4:
                        cout<<"\nA(rombo)=(Dmayor o Dvertical x Dmenor o Dhorizontal)/2"<<endl;
                        cout<<"Digite la Dmayor: "<<endl;
                        float d_mayor_a_rombo,d_menor_a_rombo,area_rombo;
                        cin>>d_mayor_a_rombo;
                        cout<<"Digite la Dmenor: "<<endl;
                        cin>>d_menor_a_rombo;
                        area_rombo = (d_mayor_a_rombo*d_menor_a_rombo)/2;

                        cout<<"\nEl area del rombo: "<< area_rombo <<endl;
                        break;

                    case 5:
                        cout<<"\nA(trapecio)=((Bmayor + Bmenor) x altura )/2"<<endl;
                        cout<<"Digite la Bmayor: "<<endl;
                        float b_mayor_a_trapecio,b_menor_a_trapecio,altura_a_trapecio, area_trapecio;
                        cin>>b_mayor_a_trapecio;
                        cout<<"Digite la Bmenor: "<<endl;
                        cin>>b_menor_a_trapecio;
                        cout<<"Digite la altura: "<<endl;
                        cin>>altura_a_trapecio;

                        area_trapecio = ((b_mayor_a_trapecio+b_menor_a_trapecio)*altura_a_trapecio)/2;

                        cout<<"\nEl area del trapecio: "<<area_trapecio<<endl;
                        break;
                    default:
                        cout<<"Esta opcion no existe"<<endl;
                        exit(0);
                        break;
                }

                break;
            }
            
            case 3:{ // volumenes--------------------------------------------
                cout<<"\nElige la opcion a realizar: "<<endl;
                cout<<"1. Volumen del triangulo"<<endl; // volumen[1]
                cout<<"2. Volumen del cuadrado o cubo perfecto"<<endl;// volumen[2]
                cout<<"3. Volumen del circulo (esfera)"<<endl;// volumen[3]
                cout<<"4. Volumen del rombo"<<endl;// volumen[4]
                cout<<"5. Volumen del trapecio"<<endl;// volumen[5]
                cout<<"6. Salir\n";

                int opc4;
                cin>>opc4;
                switch(opc4){
                    case 1:
                        cout<<"\n V= area_triangular * altura2"<<endl;
                        cout<<"Digite la base y la altura (area): "<<endl;
                        float base_v_triangulo, altura_v_triangulo,altura2_v_triangulo;
                        cin>>base_v_triangulo;
                        cout<<endl;
                        cin>>altura_v_triangulo;
                        cout<<endl;
                        cout<<"Digite la altura del volumen: "<<endl;
                        cin>>altura2_v_triangulo;
                        result.area_v[1]=base_v_triangulo*altura_v_triangulo;
                        result.area_v[1]=result.area_v[1]/2;
                        result.volumen[1]=result.area_v[1]*altura2_v_triangulo;

                        cout<<"\nEl volumen del triangulo: "<<result.volumen[1]<<endl;

                        break;
                    case 2:
                        cout<<"\nV= lado x lado x lado"<<endl;
                        cout<<"Digite el lado: "<<endl;
                        float lado_v_cuadrado;
                        cin>>lado_v_cuadrado;
                        result.volumen[2]=pow(lado_v_cuadrado,3);

                        cout<<"\nEl volumen del cuadrado: "<<result.volumen[2]<<endl;
                        break;

                    case 3:
                        cout<<"\nV= 4/3 x PI x radio^3"<<endl;
                        cout<<"Digite el radio: "<<endl;
                        float radio_esfera;
                        cin>>radio_esfera;
                        result.volumen[3]= M_PI*(pow(radio_esfera,3));
                        result.volumen[3]= (result.volumen[3] * 4) / 3;

                        cout<<"\nEl volumen de la esfera:"<<result.volumen[3]<<endl;

                        break;

                    case 4:
                        cout<<"\nV= Area_rombo * altura "<<endl;
                        cout<<"\nAREA=S=(Dmayor o Dvertical x Dmenor o Dhorizontal)/2"<<endl;
                        cout<<"Digite la Dmayor: "<<endl;
                        float d_mayor_v_rombo,d_menor_v_rombo,altura_v_rombo;
                        cin>>d_mayor_v_rombo;
                        cout<<"Digite la Dmenor: "<<endl;
                        cin>>d_menor_v_rombo;
                        cout<<"Digite la altura: "<<endl;
                        cin>>altura_v_rombo;
                        result.area_v[4]=d_mayor_v_rombo*d_menor_v_rombo;
                        result.area_v[4]/=2;
                        result.volumen[4]=result.area_v[4]*altura_v_rombo;

                        cout<<"\nEl volumen del rombo: "<<result.volumen[4]<<endl;
                        break;

                    case 5:
                        cout<<"\nV=Area_trapecio * altura "<<endl;
                        cout<<"\nS=((Bmayor + Bmenor) x altura )/2"<<endl;
                        cout<<"Digite la Bmayor: "<<endl;
                        float b_mayor_v_trapecio,b_menor_v_trapecio,altura_v_trapecio,altura2_v_trapecio;
                        cin>>b_mayor_v_trapecio;
                        cout<<"Digite la Bmenor: "<<endl;
                        cin>>b_menor_v_trapecio;
                        cout<<"Digite la altura: "<<endl;
                        cin>>altura_v_trapecio;
                        cout<<"Digite la altura del volumen: "<<endl;
                        cin>>altura2_v_trapecio;

                        result.area_v[5]=((b_mayor_v_trapecio+b_menor_v_trapecio)*altura_v_trapecio)/2;
                        result.volumen[5]=result.area_v[5]*altura2_v_trapecio;

                        cout<<"\nEl volumen del trapecio: "<<result.volumen[5]<<endl;
                        break;
                    default:
                        cout<<"Esta opcion no existe"<<endl;
                        exit(0);
                        break;
                }

                break;
            }
            default:{
                cout<<"\nEsta opcion no existe"<<endl;
                exit(0);
                break;
            }

        }

    }




    /**
     * Modulo 4: Conversion de unidades
     * Este modulo permitiría convertir unidades de medida, como metros a pies, kilogramos a libras,
     * entre otras.
    */
    void conversion_unidades(){


        int aux1,auxlon1,val_con;
        float resultlon;
        string auxlon2;
        cout<< "Esta es una calculadora de transformacion de unidades de medidas: "<<endl;
        cout<< "1. Calcular medidas de longitud"<<endl;
        cout<< "2. Calcular medidas de masa"<<endl;
        cout<< "3. Calcular medidas de volumen"<<endl;
        cin>>aux1;
        switch (aux1){
            case 1:
                cout<<"Para unidades de longitud estan los metros, pulgadas, pies y yardas: "<<endl;
                cout<<"Paso1: Primero ingrese la unidad de origen (OPCION: 1=metros, 2=pulgadas, 3=pies, 4=yardas)"<<endl;
                cin>>auxlon1;
                cout<<"Paso2: Ingrese la cantidad del monto seleccionado (numero entero)"<<endl;
                cin>>val_con;
                cout<<"Paso3: Ingrese la unidad a la cual desea convertir"<<endl;
                cin>>auxlon2;
                resultlon=conversorlon(auxlon2,val_con,auxlon1);
                cout<<resultlon<<endl;
            break;
            case 2:
                cout<<"Para unidades de masa tenemos el kilogramo, la libra y la onza: "<<endl;
                cout<<"Paso1: Primero ingrese la unidad de origen (OPCION: 1=kilogramo, 2=libra, 3=onza)"<<endl;
                cin>>auxlon1;
                cout<<"Paso2: Ingrese la cantidad del monto seleccionado (numero entero)"<<endl;
                cin>>val_con;
                cout<<"Paso3: Ingrese la unidad a la cual desea convertir"<<endl;
                cin>>auxlon2;
                resultlon=conversorlon2(auxlon2,val_con,auxlon1);
                cout<<resultlon<<endl;
                        
            break;
            case 3:
                cout<<"Para unidades de volumen tenemos el litro, la pinta americada, onza liquida americana, metro cubico: "<<endl;
                cout<<"Paso1: ingrese la unidad de origen (OPCION: 1=litro, 2=pinta americada, 3=onza liquida americana, 4=metro cubico)"<<endl;
                cin>>auxlon1;
                cout<<"Paso2: Ingrese la cantidad del monto seleccionado"<<endl;
                cin>>val_con;
                cout<<"Paso3: Ahora ingrese la unidad a la cual desea convertir"<<endl;
                cin>>auxlon2;
                resultlon=conversorlon3(auxlon2,val_con,auxlon1);
                cout<<resultlon<<endl;
                        
            break;
        }
    
    }

        
    /*
    * Modulo 5: Resolucion de ecuaciones
    * Este modulo permitiría resolver ecuaciones matemáticas simples y complejas, para luego llegarlos
    * a graficarlos
    */
    

    /*
    * Modulo 6: Grafico de ecuaciones
    * Este modulo permitiría desarrollar ecuaciones basicas y graficarlos
    */
    void ecuaciones_grafico(){
         int opcion;
         float radio;

        cout << "Bienvenido al modulo de Graficar ecuaciones\n";
        cout << "Seleccione una platilla:\n";
        cout << "1. Graficar circunferencia \n";
        cout << "4. Salir \n";
        cin >> opcion;
        
        switch(opcion) {
            case 1:{
                cout << "radio r y el centro (h, k)\n";
                cout << "radio: "; cin >> radio;
                
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



};


int main() {
    float num1, num2, resultado;
    int opcion;
    int iniciando = 0;

    char opcion_continuar;

    Usuario user[1];

    srand(time(NULL));

    OptionText optText;



    while(iniciando == 0){
        cout << endl;
        cout <<"--------------------------------------------------------------------------------------------\n";
        cout <<"                      ___      _               __  __          _     _                      \n"; 
        cout <<"                    / __|  __ | |  _    _  _   |  !!  |  __ _  | |_ | |_                    \n";
        cout <<"                   | (__  / _`| | / _| | || |  | |V| |/ _` | |  _| | ' |                   \n";
        cout <<"                    |___| /  |_|_|_|__| |____|  |_| |_||__,_|  |__| |_||_|                  \n";
        cout <<"--------------------------------------------------------------------------------------------\n";
        cout << endl;
        cout << endl;


        user[0].id = 1 + rand()%(21-1); // crea un id de 20 digitos
        user[0].name = "anon244"; // genera un nombre random de 5 caracteres

        cout << "Bienvenido, usuario '" << user[0].name <<"' !\n";
        cout << " \nSi le parece, podemos cambiar su nombre? Y/N \n";
        cin >> opcion_continuar;

        if(opcion_continuar == 'Y'){
            cout << "\nComo desea llamarse? : ";
            cin >> user[0].name;
            cout << "En buena hora, usted logro cambiar su nombre correctamente!" << endl;
        }else if(opcion_continuar == 'N'){
        }else{
            cout << "\nClose, lastimosamente no se cambio correctamente!" << endl;
        }

        cout << "\nEstimado usuario " << user[0].name <<", Que modulo desea escoger?:\n";

        cout << "1. Operaciones basicas\n";
        cout << "2. Calculo de porcentaje\n";
        cout << "3. Calculo de formulas matematicas\n";
        cout << "4. Conversion de unidades\n";
        cout << "5. Generar ecuaciones empiricas\n";
        cout << "6. Graficar ecuaciones (no Funcional)\n";
        cout << "7. Salir\n";
        cout << endl;
        cin >> opcion;
        cout << endl;

        
        Math calcu(opcion, iniciando);

       iniciando = calcu.iniciando;

    };


   

    return 0;
}

