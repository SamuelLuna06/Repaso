#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){

    int num = 0;
    int caraSello = 0;
    
    srand(time(NULL));

    cout << "Se esta lanzando la moneda. Elige rapido!!\n1.Cara.\n2.Sello." << endl;
    cin >> caraSello;

    if (caraSello == 1){
        num = rand()%101;
        if (num%2 == 0){
           cout << "Has ganado y la suerte te sonrie, felicidades!!" << endl;
        }else{
            cout << "Has perdido. Suerte a la proxima!!" << endl; 
        }
    }else if (caraSello == 2){
        num = rand()%101;
        if (num%3 == 0){
           cout << "Has ganado y la suerte te sonrie, felicidades!!" << endl;
        }else{
            cout << "Has perdido. Suerte a la proxima!!" << endl; 
        }
    }
    
    return 0;
}