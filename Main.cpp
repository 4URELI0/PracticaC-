#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char * pszDecir = new char[64];
    strcpy(pszDecir, "Que sea paranoico no signfica que me esten siguiendo");
    char * pszCursor = pszDecir;//Se crea un puntero para poder desplazarnos por el original
    
    /*Recorremos el array, incrementando la posicion del puntero*/
    while (*pszCursor)
    {
        cout << *pszCursor;
        pszCursor++;
    }

    delete[] pszDecir;
    return 0;
}