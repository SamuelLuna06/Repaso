#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){

    int usuario = 0;
    int maquina = 0;

    srand(time(NULL));

    maquina = 1+rand()%3;
    
    cout << "Bienvendio al mitico juego de piedra, papel o tijera!!\nPor favor elija una opcion:\n1.Piedra\n2.Papel\n3.Tijeras" << endl;
    cin >> usuario;

    switch (usuario){
        case 1:
            if (maquina == 1){
                cout << "Has elegido piedra y la maquina ha elegido piedra. Has empatado contra una maquina, acaso no eres capaz de ganarle?" << endl;    
            }else if (maquina == 2){
                cout << "Has elegido piedra y la maquina ha elegido papel. Has perdido contra una maquina, que malo!! Veguenza me daria." << endl;
            }else{
                cout << "Has elegido piedra y la maquina ha elegido tijera. Has ganado a una maquina, Felicidades!! supongo." << endl;
            }
            break;
        case 2:
            if (maquina == 1){
                cout << "Has elegido papel y la maquina ha elegido piedra. Has ganado a una maquina, Felicidades!! supongo." << endl;    
            }else if (maquina == 2){
                cout << "Has elegido papel y la maquina ha elegido papel. Has empatado contra una maquina, acaso no eres capaz de ganarle?" << endl;
            }else{
                cout << "Has elegido papel y la maquina ha elegido tijera. Has perdido contra una maquina, que malo!! Veguenza me daria." << endl;
            }
            break;
        case 3:
            if (maquina == 1){
                cout << "Has elegido tijera y la maquina ha elegido piedra. Has perdido contra una maquina, que malo!! Veguenza me daria." << endl;    
            }else if (maquina == 2){
                cout << "Has elegido tijera y la maquina ha elegido papel. Has ganado a una maquina, Felicidades!! supongo." << endl;
            }else{
                cout << "Has elegido tijera y la maquina ha elegido tijera. Has empatado contra una maquina, acaso no eres capaz de ganarle?" << endl;
            }
            break;
        default:
            cout << "Elija una opcion valida!!" << endl;
            return 0;        
    }

    return 0;
}