#include <bits/stdc++.h>
using namespace std;

/*Usualmente al enviar un parámetro a una función todo lo que se haga con dicho parámetro allí adentro NO tiene efecto por fuera. 
Por ejemplo si a una función la se le envía una variable cuyo valor es diez y al interior de la función le sumamos un cinco, 
después de la ejecución de la función el valor de la variable seguirá siendo diez en vez de quince. 
Lo que pasó al interior de la función se quedó allí. Para solucionar esto, si queremos que el valor cambie definitivamente, 
usamos punteros para pasar no el valor del parámetro sino una referencia a éste */

int funcion(int valor)
{
    valor += 10;//Se le suma 10
    return valor;
}

int funcionPunteros(int* valor)
{
    *valor += 10;//Se le suma 10 a la posicion
    return *valor;
}
int main(int argc, char const *argv[])
{
    int numero = 10;
    cout << "Antes de funcion " << numero << "\n";//10
    funcion(numero);//Se pasa por valor
    
    cout << "Despues de funcion " << numero << "\n";//10
    cout << "Antes de funcionPunteros " << numero << "\n";//10
    
    funcionPunteros(&numero);//Se envia la direccion de la memoria y la funcion resuelve la referencia 
    cout << "Despues de funcion Punteros " << numero << "\n";//20 (10 + 10)
    return 0;
}