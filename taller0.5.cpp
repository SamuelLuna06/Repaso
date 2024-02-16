#include <iostream>

using namespace std;

int main(){

    int velocidadA;
    int velocidadB;
    int distancia;
    int tiempo;

    cout << "Ingrese la velocidad del coche A: " << endl;
    cin >> velocidadA;
    cout << "Ingrese la velocidad del coche B: " << endl;
    cin >> velocidadB;

    cout << "Ingrese la distancia entre las ciudades: " << endl;
    cin >> distancia;

    tiempo = distancia / (velocidadA + velocidadB);

    cout << "El tiempo que tardaran los coches en cruzarse es de " << tiempo << endl;

    return 0;
}