#include <iostream>

using namespace std;

int main(){

    int n = 0;

    cout << "Ingrese un numero: " << endl;
    cin >> n;

    if(n%2 == 0){
        cout << "El numero es par." << endl;
    }else{
        cout << "El numero es impar." << endl;
    }

    return 0;
}