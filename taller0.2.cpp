#include <iostream>

using namespace std;

int main(){

    int tipoPlan;
    int precioPlan; 
    int descuento;

    cout << "Elija su tipo de plan:\n1. Prepago.\n2. Postpago." << endl;
    cin >> tipoPlan;

    if(tipoPlan == 1){
        cout << "Ingrese el precio de su plan: " << endl;
        cin >> precioPlan;
        if(100000 <= precioPlan and precioPlan <= 900000){
            descuento = precioPlan * 0.10;
            cout << "Se ha realizado un descuento de " << descuento << " a su compra de " << precioPlan << endl;
        }else if(1000000 < precioPlan){
             descuento = precioPlan * 0.20;
            cout << "Se ha realizado un descuento de " << descuento << " a su compra de " << precioPlan << endl;
        }else{
            cout << "El valor de su plan no es apto para optener un descuento." << endl;
        }
    }else if(tipoPlan == 2){
        cout << "Ingrese el precio de su plan: " << endl;
        cin >> precioPlan;
        if(precioPlan < 500000){
            descuento = precioPlan * 0.15;
            cout << "Se ha realizado un descuento de " << descuento << " a su compra de " << precioPlan << endl;
        }else if(500000 <= precioPlan and precioPlan <= 1000000){
            descuento = precioPlan * 0.20;
            cout << "Se ha realizado un descuento de " << descuento << " a su compra de " << precioPlan << endl;
        }else if(1000000 < precioPlan){
            descuento = precioPlan * 0.25;
            cout << "Se ha realizado un descuento de " << descuento << " a su compra de " << precioPlan << endl;
        }else{
            cout << "El valor de su plan no es apto para optener un descuento." << endl;
        }
    }else{
        cout << "Ingrese una opcion valida." << endl;
    }

    return 0;
}
