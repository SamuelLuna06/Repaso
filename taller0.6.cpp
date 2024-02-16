#include <iostream>

using namespace std;

int main(){

    int i = 1;
    int suma = 0;

    while (i <= 100){
        suma += i;
        i++;
    }

    cout << suma << endl;

    return 0;
}