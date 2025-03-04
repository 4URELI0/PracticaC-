#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int * punteroA;//Declarar el puntero que guardara la direccion
    int variableEnt = 10;//Una variable que se inicia con 10

    punteroA = &variableEnt;//el "&" significa "direccion de" y el nombre de la variable que queremos saber su direccion
    *punteroA = 31;//Cambiar el valor de la variable NO del puntero mediante el "*"
    cout << variableEnt;
    return 0;
}