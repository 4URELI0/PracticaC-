#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /*PUNTERO*/
    int x, *p;
    p = &x;

    *p = 5;
    cout << "El valor de x es: " << x << endl;

    /*REFERENCIA*/
    int x1;
    int &r = x1;
    r = 5;
    cout << x1;
    return 0;
}