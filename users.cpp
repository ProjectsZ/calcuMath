#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class User {
    public:
    string id;
    string name;
    bool estado;
    vector<User> user;

    User(){}

    User(const string& _id, const string& _name, bool _estado) {
        id = _id;
        name = _name;
        estado = _estado;
    }

    void getPushUser(const string& _id, const string& _name, bool _estado){
        user.push_back(User( _id, _name, _estado));
    }

    void deleteUser(int indice){
        user.erase(user.begin() + indice);
    }

    string getId() const {    return id; }
    string getName() const {    return name; }
    bool getEstado() const {    return estado; }


    public:
    void printUser(User std){
        cout << setw(10) << std.getId() 
        << setw(22) << std.getName() 
        << setw(5) << std.getEstado() << endl;
    }

    int findIndexID(const vector<User>& usuarios, const string& _id) {
        for (size_t i = 0; i < usuarios.size(); ++i) {
            if (usuarios[i].id == _id) {
                return i;
            }
        }
        return 0;
    }

};
    

    // ifstream archivo_lec;
    // ofstream archivo_info;
    // ifstream archivo_ventas;

    // Users(){

    // };

    // public:
    // void runCode(){

    //     archivo_ventas.open("usuario.txt", ios::in);
    //     if (archivo_ventas.fail()){
    //         cout << "ningun empleado realizo alguna venta\n\n";
    //         archivo_ventas.close();
    //         return;
    //     }

    //     if (!archivo_ventas.fail()){
            
    //         string texto;
    //         while (!archivo_ventas.eof())
    //         {
    //             getline(archivo_ventas, texto);
    //             cout << texto << endl;
    //         }

    //         archivo_ventas.close();
    //     }

        
    // }

// };
