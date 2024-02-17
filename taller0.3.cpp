#include <iostream>

using namespace std;

int main(){

    int sueldoTrabajador; 
    int nuevoSueldo;
    int aumento;

    cout << "Ingrese su sueldo: " << endl;
    cin >> sueldoTrabajador;

    if(sueldoTrabajador < 1000000){
        aumento = sueldoTrabajador * 0.15;
        nuevoSueldo = sueldoTrabajador + aumento;
        cout << "Su nuevo sueldo es de " << nuevoSueldo << endl;
    }else{
        cout << "Su sueldo no es apto para un aumento." << endl;
    }

    return 0;
}
