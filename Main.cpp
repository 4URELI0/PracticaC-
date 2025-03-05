#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /*int aiNotas[10];//Array de numeros enteros
    int * pINotas;//Puntero para el array *Debe ser del mismo tipo de dato osea un int

    //int * pINotas = new int;//Cuando queremos apuntar a un solo numero entero
    int * pINotas = new int[10];//Cuando queremos apuntar a un array */

    unsigned short int tamArray;
    
    cout << "Ingrese el tamanio del array: " << endl;
    cin >> tamArray;
    cout << endl;

    int * piNotas = new int[tamArray];
    
    /*Verificamos que la memoria haya sido asignada, en caso que no lo fuera apuntaria a 0*/
    if (piNotas)
    {
        long iSumaNotas = 0;
        for (int i = 0; i < tamArray; i++)
        {
            cout << endl << "Ingrese nota " << i + 1 << ": ";
            cin >> piNotas[i];
            iSumaNotas += piNotas[i];
        }
        cout << "El promedio de notas es: " << iSumaNotas / (float) tamArray << endl;
        delete[] piNotas;
    }
    return 0;
}