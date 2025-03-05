#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /*Ejemplo con un solo valor*/

    int* ptr = new int;//Reservamos memoria para un numero entero
    *ptr = 10;//Asignamos un valor

    cout << *ptr;//Mostramos el valor
    delete ptr;//Liberamos memoria
    
    /*Ejemplo con un arreglo*/
    int* arr = new int[5];//Reserva memoria para un array de 5 enteros
    arr[0] = 1;//Asigna valores 
    arr[1] = 2;

    delete[] arr;//Libera memoria del array
    
    return 0;
}