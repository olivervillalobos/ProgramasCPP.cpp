# EjerciciosLenguajesInterfaz1
/*
INSTITUTO TECNOLOGICO DE TIJUANA
OLIVER VILLALOBOS BECERRIL
NO.CONTROL: 18212282
*/
//Ejercicio 103
//Un programa que te diga la determinante de una matriz

#include <iostream>
#include <cmath>
#define MAX 5

using namespace std;

void mostrar_matriz(int matriz[][MAX], int orden);
int determinante(int matriz[][MAX], int orden);
int cofactor(int matriz[][MAX], int orden, int fila, int columna);

int main()
{
   int matriz[MAX][MAX];
   int orden;
   
   cout << "Ingresa el orden de la matriz (maximo " << MAX << "): ";
   cin >> orden;
   while (orden < 0 || orden > MAX) {
      cout << "\nEl orden de la matriz no puede ser mayor que " << MAX << endl;
      cout << "Ingrese nuevamente el orden de la matriz: ";
      cin >> orden;
   }
   
   cout << "\nIngrese los elementos de la matriz:\n\n";
   for (int i = 0; i < orden; i++) {
      for (int j = 0; j < orden; j++) {
         cin >> matriz[i][j];
      }
   }

   cout << "\nMostrando la matriz ingresada:\n";
   mostrar_matriz(matriz, orden);
   
   cout << "\nEl determinante es: " << determinante(matriz, orden) << endl;

   cin.get();
   cin.get();
   return 0;
}

void mostrar_matriz(int matriz[][MAX], int orden)
{
   cout << "Orden: " << orden << endl;
   for (int i = 0; i < orden; i++) {
      for (int j = 0; j < orden; j++) {
         cout << "\t" << matriz[i][j];
      }
      cout << "\n";
   }
}


int determinante(int matriz[][MAX], int orden)
{
   int det = 0.0;
   
   if (orden == 1) {
      det = matriz[0][0];
   } else {
      for (int j = 0; j < orden; j++) {
         det = det + matriz[0][j] * cofactor(matriz, orden, 0, j);
      }
   }
   
   return det;
}


int cofactor(int matriz[][MAX], int orden, int fila, int columna)
{
   int submatriz[MAX][MAX];
   int n = orden - 1;
   
   int x = 0;
   int y = 0;
   for (int i = 0; i < orden; i++) {
      for (int j = 0; j < orden; j++) {
         if (i != fila && j != columna) {
            submatriz[x][y] = matriz[i][j];
            y++;
            if (y >= n) {
               x++;
               y = 0;
            }
         }
      }
   }
   
   return pow(-1.0, fila + columna) * determinante(submatriz, n);
}
