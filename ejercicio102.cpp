// EjerciciosLenguajesInterfaz1
/*
INSTITUTO TECNOLOGICO DE TIJUANA
OLIVER VILLALOBOS BECERRIL
NO.CONTROL: 18212282
*/

//Maestro no pude hacer el 101,104, 105 por lo que use uno con random, formulas matematicas y uno muy curioso que te transforma a ascii.
//Ejercicio 102
//Programa en el que te de el cociente y el residuo

#include <iostream>
using namespace std;

int main() {
    int numero = 0, divisor = 0, cociente = 0, residuo = 0;

    cout<<"Introduce un numero entero a dividir: \n";
    cin>>numero;
    cout<<"Introduce un divisor entero: \n";
    cin>>divisor;

    cociente = numero/divisor;
    residuo = numero%divisor;

    cout<<"El cociente de la division "<<numero<<" / "<<divisor<<" es igual a "<<cociente<<"\n";
    cout<<"El residuo de la division "<<numero<<" / "<<divisor<<" es igual a "<<residuo<<"\n";

    return 0;
}
