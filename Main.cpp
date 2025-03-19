#include <bits/stdc++.h>
using namespace std;

void Food(int *a)
{
    *a = 20;
}
void Food2(int b)
{
    b = 30;
}
int main(int argc, char const *argv[])
{
    int iVar = 10;
    int iVar2 = 40;
    //Paso la variable iVar por el Valor
    Food(&iVar);
    //iVar fue modificado
    cout << iVar << endl;

    /*iVar2 no fue modificado*/
    Food2(iVar2);
    cout << iVar2 << endl;
    return 0;
}