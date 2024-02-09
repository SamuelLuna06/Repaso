#include <iostream>

using namespace std;

int main(){

    int pesoBebe = 0;
    int edadBebe = 0;
    float dosisVacuna = 0;

    cout << "Ingresa el peso del bebe:" << endl;
    cin >> pesoBebe;

    cout << "Ingresa la edad en meses del bebe:" << endl;
    cin >> edadBebe;

    dosisVacuna = (pesoBebe + 10 / edadBebe * 10) * 8;

    cout << "La dosis de vacuna que le debes aplicar al bebe es de " << dosisVacuna << endl;

    return 0;
}