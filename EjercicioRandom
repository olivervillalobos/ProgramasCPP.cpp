# EjerciciosLenguajesInterfaz1
/*
INSTITUTO TECNOLOGICO DE TIJUANA
OLIVER VILLALOBOS BECERRIL
NO.CONTROL: 18212282
*/

//Dado Juego
//
//  Un programa que te de numeros aleatorios del 1 al 6 como en un dado
//
#include <iostream>
#include <string>
#include <ctime>
using namespace std;
int main(){
    srand(time(NULL));
    int number = 6;
    int res = 0;
    res = rand() % number + 1;

    switch (res)
    {
        case 1:
            cout << "PERDISTE" <<endl;
            break;
        case 6:
            cout << "GANASTE" <<endl;
            break;
        default:
            cout << "???" <<endl;
            break;
    }

    cout << "Resultado: " << res << endl;

    system("PAUSE");

    return 0;
}
