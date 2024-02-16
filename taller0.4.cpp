#include <iostream>

using namespace std;

int main(){

    int cantidadHoras; 
    int salarioSemanal; 
    int horasExtra; 
    int salarioParcial;
    int extra;

    cout << "Indique las horas trabajadas esta semana: " << endl;
    cin >> cantidadHoras;

    if(cantidadHoras <= 35 and 0 < cantidadHoras){
        salarioSemanal = cantidadHoras * 40000;
        cout << "Su salario semanal es de " << salarioSemanal << endl;
    }else{
        horasExtra = cantidadHoras - 35;
        salarioParcial = (cantidadHoras - horasExtra) * 40000;
        extra = horasExtra * 50000;
        salarioSemanal = salarioParcial + extra;
        cout << "Su salario semanal es de " << salarioSemanal << endl;
    }

    return 0;
}