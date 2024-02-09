#include <iostream>

using namespace std;

int main (){
    
    int tipoLlamada = 0;
    int contLlamada = 0;
    int costoLlamada = 0;

    cout << "Que tipo de llamada desea realizar?\n1. Llamada Celular.\n2. Llamada Fija.\n3. Llamada Internacional." << endl;
    cin >> tipoLlamada;

    cout << "Ingrese los minutos que duro su llamada: ";
    cin >> contLlamada;

    if (tipoLlamada == 1){
        costoLlamada = contLlamada * 300; 
        cout << "El costo de su llamada es de $" << costoLlamada << endl;
    }else if(tipoLlamada == 2){
        costoLlamada = contLlamada * 200; 
        cout << "El costo de su llamada es de $" << costoLlamada << endl;
    }else if(tipoLlamada == 3){
        costoLlamada = contLlamada * 500; 
        cout << "El costo de su llamada es de $" << costoLlamada << endl;
    }else{
        cout << "Numero invalido." << endl;
    }
}