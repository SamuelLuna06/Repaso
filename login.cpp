#include <iostream>

using namespace std;

int main(){

    int iniCrear = 0;
    string usuario;
    string contraseña;

    cout << "Que desea?\n1. Iniciar sesion.\n2. Crear una cuenta." << endl;
    cin >> iniCrear;

    if (iniCrear == 1){
        cout << "Ingrese su nombre de usuario: " << endl;
        cin >> usuario;

        cout << "Ingrese su contraseña: " << endl;
        cin >> contraseña;
    }else if (iniCrear == 2){
        cout << "Ingrese un nombre de usuario: " << endl;
        cin >> usuario;

        cout << "Ingrese una contraseña: " << endl;
        cin >> contraseña;
    }else{
        cout << "Opcion incorrecta." << endl;
    } 
    
    return 0;
}