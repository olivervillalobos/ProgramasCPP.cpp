# EjerciciosLenguajesInterfaz1
/*
INSTITUTO TECNOLOGICO DE TIJUANA
OLIVER VILLALOBOS BECERRIL
NO.CONTROL: 18212282
*/

//Raices te da las raices a base de la formula general
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a, b, c, x1, x2, discriminant, ParteReal, ParteImaginaria;
    cout << "Ingre los valores de a, b y c: ";
    cin >> a >> b >> c;
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Las raices son reales y diferentes." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    else if (discriminant == 0) {
        cout << "Raices son iguales y reales." << endl;
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        ParteReal = -b / (2 * a);
        ParteImaginaria = sqrt(-discriminant) / (2 * a);
        cout << "Raices son complejas y diferentes." << endl;
        cout << "x1 = " << ParteReal << "+" << ParteImaginaria << "i" << endl;
        cout << "x2 = " << ParteReal << "-" << ParteImaginaria << "i" << endl;
    }

    return 0;
}
