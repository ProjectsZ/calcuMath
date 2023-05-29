
/* APP CalcuMath */
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <windows.h>

#include "Users.cpp"
// #include "Math.cpp"
#include "Utilidades.cpp"
#include "OperacionesBasicas.cpp"
#include "OperacionesPorcentaje.cpp"
#include "BancoFormulas.cpp"

using namespace std;

void titleApp(){
    
    Utilidades util;
    util.textColor("blanco");
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


int main() {

    Utilidades util;

    float num1, num2, resultado;
    int opcion;
    int iniciando = 0;

    char opcion_continuar;

    User users;
    int iUser = 0; // por defecto selecciona el primer usuario
    string sID;

    users.getPushUser("000", "Anon12", true);
    users.getPushUser("001", "Fred", true);
    users.getPushUser("002", "Aldana", false);
    users.getPushUser("003", "Jose", true);
    users.getPushUser("004", "Hugo", true);

    srand(time(NULL));

    while(iniciando == 0){
        
        util.textColor("blanco");
        titleApp();
        util.gotoxy(32, 9);
        cout << " Bienvenido, usuario '" << users.user[iUser].name <<"' !\n";
        cout << "\n  Desea cambiar de usuario? Y/N \n";
        cout << "  "; cin >> opcion_continuar;
        opcion_continuar = toupper(opcion_continuar);

        util.gotoxy(5, 12);
        titleApp();

        util.windowsClean(4, "cls");
        if(opcion_continuar == 'Y'){
            titleApp();
            cout << " \n Con que que usuario desea trabajar? Y/N \n";
            cout << " |    ID    |        NOMBRE        | ESTADO | \n"; 
            cout << " -------------------------------------------\n";

            for (const auto& user : users.user) {                
                users.printUser(user);
            }
            char opction_u;
            cout << "\n  a) Seleccionar usuario de la tabla ";
            cout << "\n  b) Agregar un nuevo usuario ";
            cout << "\n  c) Quitar un usuario ";
            cout << "\n  d) Exit " << endl;
            cin >> opction_u;
            switch (opction_u){
                case 'a':{
                    cout << "\n b) Ahora, seleccione el ID del usuario: ";
                    cin >> sID;
                    
                    iUser = users.findIndexID(users.user, sID);
                    break;
                }
                case 'b':{
                    string _sId = "", _sName = "";
                    bool sState = false;
                    
                    cout << " Ingrese el ID: "; cin >> _sId;
                    cout << " Ingrese el nombre: "; 
                    cin.ignore();  // Ignorar el salto de línea anterior
                    getline(cin, _sName);
                    cout << " Ingrese el estado (1 para activo, 0 para inactivo): ";
                    cin >> sState;

                    users.getPushUser(_sId, _sName, sState);
                    break;
                }
                case 'c':{
                    cout << "\n b) Ahora, seleccione el ID del usuario: ";
                    cin >> sID;
                    
                    users.deleteUser(users.findIndexID(users.user, sID));
                    cout << " Se elimino correctamente!";
                    break;
                }
                case 'd':{                    
                    break;
                }
                default:{                    
                    break;
                }
            }

            cout << " En buena hora, usted logro cambiar su nombre correctamente!" << endl;
            

        }else if(opcion_continuar == 'N'){
        }else{
            cout << "\n Close, lastimosamente no se cambio de usuario!, asi que seguira siendo " << users.user[iUser].name << " por el momento."<< endl;
        }

        util.windowsClean(4, "cls");

        titleApp();
        util.gotoxy(3, 8);
        util.textColor("blanco");
        cout << "\n  Estimado usuario " << users.user[iUser].name <<", Que modulo desea escoger?:\n";

        util.textColor("azul_b"); cout << "  1. Operaciones basicas\n";
        util.textColor("amarillo_b"); cout << "  2. Calculo de porcentaje\n";
        util.textColor("cian_b"); cout << "  3. Calculo de formulas matematicas\n";
        util.textColor("morado_b"); cout << "  4. Conversion de unidades\n";
        util.textColor("verde_b"); cout << "  5. Generar ecuaciones empiricas\n";
        util.textColor("plomo"); cout << "  6. Graficar ecuaciones\n";
        util.textColor("rojo"); cout << "  7. Salir\n";
        cout << endl;
        util.textColor("blanco");
        cout << "  ";cin >> opcion;
        cout << endl;

        switch (opcion){
            case 1: {
                util.windowsClean(4, "cls");
                titleApp();
                util.textColor("azul_b");
                cout << "   1. Operaciones basicas\n";
                util.textColor("blanco");
                cout << "   ------------ \n";
                cout << "   |    _      |\n";
                cout << "   |   / |     |\n";
                cout << "   |   | |     |\n";
                cout << "   |   |_|     |\n";
                cout << "   ------------ \n";
                util.textColor("azul_b");
                cout << endl;
                cout << "   Usted selecciono, "; util.textColor("blanco"); cout << "'OPERACIONES BASICAS' ! \n";
                util.textColor("azul_b");
                cout << "   Este modulo incluiria las operaciones basicas como suma, resta, multiplicacion y division.\n";
                
                OperacionesBasicas op;
                op.o_basicas();

                cout << "   Desea continuar, efectuando este tipo de operaciones? (Y/N)\n";
                string yesNo = "";
                cout << "   "; cin >> yesNo;
                
                if(yesNo == "Y"){
                 op.o_basicas();
                    
                }else{
                    break;
                }

                break;
            }
            case 2:{
                    util.windowsClean(4, "cls");
                    titleApp();
                    util.textColor("amarillo_b");
                    cout << "   1. Operaciones basicas\n";
                    util.textColor("blanco");
                    cout << "   ------------ \n";
                    cout << "   |    ___    |\n";
                    cout << "   |   |_  )   |\n";
                    cout << "   |    / /    |\n";
                    cout << "   |   /___|   |\n";
                    cout << "   ------------ \n";
                    util.textColor("amarillo_b");
                    cout << endl;
                    cout << "   Usted selecciono, 'CÁLCULO DE PORCENTAJE' ! \n";
                    util.textColor("amarillo_b");
                    cout << "   Este modulo permitiría calcular porcentajes de un número.\n";

                    OperacionesPorcentaje opor;
                    opor.o_porcentaje();
                    
                    cout << "Desea continuar, efectuando este tipo de operaciones? (Y/N)\n";
                    string yesNo = "";
                    cin >> yesNo;
                     
                    if(yesNo == "Y"){
                        opor.o_porcentaje();
                    }else{
                        break;
                    }
            }
            case 3:{
                    util.windowsClean(4, "cls");
                    titleApp();
                    util.textColor("cian_b");
                    cout << "   1. Operaciones basicas\n";
                    util.textColor("blanco");
                    cout << "------------ \n";
                    cout << "|    ____   |\n";    
                    cout << "|   |__ /   |\n";
                    cout << "|   |_ L    |\n";
                    cout << "|   |___/   |\n";
                    cout << "------------ \n";
                    util.textColor("cian_b");
                    cout << endl;
                    cout << "Usted selecciono, 'CALCULO DE FORMULAS' ! \n";
                    util.textColor("cian_b");
                    cout << "Permitira graficar cuadrados, círculos, esferas, entre otros.\n";
                    
                    BancoFormulas cf;
                    cf.o_formulas();

                    
                    cout << "Desea continuar, efectuando este tipo de operaciones? (Y/N)\n";
                    string yesNo = "";
                    
                    cin >> yesNo;
                    if(yesNo == "Y"){
                        cf.o_formulas();
                    }else{
                        break;
                    }
            }
            default:{
                break;
            }
        }

        // Math calcu(opcion, iniciando);
        // iniciando = calcu.iniciando;

        system("cls");
    };

    return 0;
}

