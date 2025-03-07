#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    //Por medio de un puntero, creo un array de 64 caracteres de modo dinamico
    char * pszDecir = new char[64];
    char * pszDecir2;
    
    strcpy(pszDecir, "Que sea paranoico no significa que no me esten siguiendo");//Le copio el texto
    
    /*Le asigno a un 2do puntero a una 2da direccion de memoria 
    (equivalente al octavo elemento del texto)*/

    pszDecir2 = &pszDecir[8];//Es como decir que lea el libro desde la pag 8 en adelante, lo va a seguir haciendo hasta que se encuentre con un \0 y ahi finaliza
    cout << pszDecir << endl;
    
    cout << pszDecir2 << endl;
    cout << *pszDecir2 << endl;
    
    //Libero la memoria asociada al puntero
    delete[] pszDecir;
    return 0;
}