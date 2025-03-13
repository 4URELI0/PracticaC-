#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    //Una variable
    int iVal = 10;
    //Una referencia de la variable anterior
    int &ref = iVal;

    /*Modifica la referencia "ref" que es como modificar la variable iVal*/
    ref = 20;

    cout << "El valor de ref iVal es: " << iVal << endl;
    return 0;
}