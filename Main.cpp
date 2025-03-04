#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string* titulos = NULL;
    string* autores = NULL;
    int tamanio;
    cout << "Cuantos libros desea ingresar?" << endl;
    
    string entrada;
    getline(cin, entrada);
    tamanio = stoi(entrada);

    titulos = new string[tamanio];//El new es como guardar espacio para esa variable
    autores = new string[tamanio];
    
    cout << "Por favor ingrese la siguiente informacion de los libros: \n";
    for(int i = 0; i < tamanio; i++)
    {
        cout << "\n****** Libro " << i + 1 << "******\n";
        cout << "Titulo: ";
        getline(cin, titulos[i]);
        cout << "Autor: ";
        getline(cin, autores[i]);
    }
    delete[] titulos;//Una vez usado borramos los datos para liberar espacio
    delete[] autores;
    titulos = NULL;
    autores = NULL;
    return 0;
}