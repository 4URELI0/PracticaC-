#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /*Ejemplo de apuntadores*/

    char *apuntador = NULL;//Declaramos un puntero, lo declaramos como NULL para detectar errores facilmente
    char letra;//declaramos una varibale primitiva
    apuntador = &letra;//obtenemos la direccion de la variable
    *apuntador = 't';//Modificamos la variable usando el '*' del puntero
    cout << letra;
    return 0;
}