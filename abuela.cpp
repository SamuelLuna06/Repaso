#include <iostream>

using namespace std;

int main(){

    float tempFare = 0;
    float tempCen = 0;

    cout << "Ingresa la temperatura en grados Farenheit que te indica la receta: " << endl;
    cin >> tempFare;

    tempCen = (tempFare - 32) / 1.8;

    cout << "La temperatura a la que debes poner tu horno es de " << tempCen << endl;

    return 0;
}