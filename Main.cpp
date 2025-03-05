#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int* piNotas = new int[1];
    piNotas[0] = 10;

    cout << "Direccion de piNotas: " << piNotas << endl;
    cout << "Direccion de &piNotas[0]: " << &piNotas[0] << endl;
    cout << "Valor de *piNotas: " << *piNotas << endl;

    delete[] piNotas;
    return 0;
}