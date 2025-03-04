#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int *pA;      // Declaramos un puntero
    pA = new int; // solicitamos memoria del operador "new" para el numero entero
    *pA = 21;     // Modificamos el valor entero al cual apuntamos

    cout << "Valor de la variable: " << *pA << endl;
    cout << "Direccion de la memoria: " << &pA << endl;
    return 0;
}