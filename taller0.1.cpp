#include <iostream>

using namespace std;

int main(){

    int deuda;
    int pagar; 
    int estrato;
    int descuento;

    cout << "Ingrese su estrato: " << endl;
    cin >> estrato;

    if(3 < estrato or estrato <= 0){
        cout << "Su estrato no es valido para el descuento." << endl;
    }else{
        cout << "Ingrese su deuda: " << endl;
        cin >> deuda;

        if(60000 <= deuda and deuda < 150000){
            descuento = deuda * 0.2;
            pagar = deuda - descuento;
            cout << "Su descuento es del " << descuento << " y el valor a pagar aplicando este descuento es de " << pagar << endl;
        }else if(150000 <= deuda and deuda <= 300000){
            descuento = deuda * 0.3;
            pagar = deuda - descuento;
            cout << "Su descuento es del " << descuento << " y el valor a pagar aplicando este descuento es de " << pagar << endl;
        }else if(300000 < deuda and deuda <= 800000){
            descuento = deuda * 0.4;
            pagar = deuda - descuento;
            cout << "Su descuento es del " << descuento << " y el valor a pagar aplicando este descuento es de " << pagar << endl;
        }else if(800000 < deuda){
            descuento = deuda * 0.5;
            pagar = deuda - descuento;
            cout << "Su descuento es del " << descuento << " y el valor a pagar aplicando este descuento es de " << pagar << endl;
        }else{
            cout << "Su deuda no es apta para optener un descuento." << endl;
        }
    }

    return 0;
}