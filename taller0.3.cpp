#include <iostream>

using namespace std;

int main(){

    int sueldoTrabajador; 
    int nuevoSueldo;

    cout << "Ingrese su sueldo: " << endl;
    cin >> sueldoTrabajador;

    if(sueldoTrabajador < 1000000){
        nuevoSueldo = 1000000;
        cout << "Su nuevo sueldo es de " << nuevoSueldo << endl;
    }else{
        cout << "Su sueldo no es apto para un aumento." << endl;
    }

    return 0;
}