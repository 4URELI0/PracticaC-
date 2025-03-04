#include <bits/stdc++.h>
#include "colors.h"
using namespace std;

/*Funcion que me dara un valor aleatorio*/
int EleccionElemento()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 3);
    return dis(gen);
};
/*Lo mismo que la anterior funcion perda da un valor aleatorio para la ronda*/
int RondaAleatoria()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 3);
    return dis(gen);
}

int main(int argc, char const *argv[])
{
    vector<pair<string, int>> jugadores(2);//vector de pares para el nombre del primer jugador, y su puntuaje

    vector<pair<int, string>> pIpAtI = {{1, "Piedra"}, {2, "Papel"}, {3, "Tijera"}};

    string resultadoActual;//Me devolvera un string con el resultado actual

    int valor, eleccionBot, ronda = 1;

    for (int i = 0; i < 2; i++)
    {
        cout << CYAN << "Ingrese el nombre del jugador " << i + 1 << ": ";
        getline(cin, jugadores[i].first);//En caso que el nombre tenga espacios
        jugadores[i].second = 0;
    }

    cout << GREEN << "Bienvenido " << jugadores[0].first << " y " << jugadores[1].first << RESET << endl;

    int totalRondas = RondaAleatoria();

    cout << ORANGE << "LA CANTIDAD DE RONDA SON: " << totalRondas << RESET << endl;

    /*Saldra del bucle cuando se termine la ronda*/
    do
    {
        cout << "Elige un elemento" << endl;

        for (int i = 0; i < 3; i++)
        {
            cout << i + 1 << ". " << pIpAtI[i].second << endl;
        }

        cin >> valor;
        eleccionBot = EleccionElemento();

        switch (eleccionBot)
        {
        case 1:
            eleccionBot = pIpAtI[0].first;
            cout << RED << jugadores[1].first << " saco: " << pIpAtI[0].second << RESET << endl;
            break;
        case 2:
            eleccionBot = pIpAtI[1].first;
            cout << RED << jugadores[1].first << " saco: " << pIpAtI[1].second << RESET << endl;
            break;
        case 3:
            eleccionBot = pIpAtI[2].first;
            cout << RED << jugadores[1].first << " saco: " << pIpAtI[2].second << RESET << endl;
            break;
        }

        int resultado = (valor == eleccionBot) ? 0 : ((valor == 1 && eleccionBot == 3) || (valor == 2 && eleccionBot == 1) || (valor == 3 && eleccionBot == 2)) ? 1: 2;
        
        /*Sumar el puntaje de cada uno*/
        if (resultado == 1)
        {
            jugadores[0].second++;
        }
        else if (resultado == 2)
        {
            jugadores[1].second++;
        }
        else
        {
            cout << BLACK << BG_RED << "EMPATE!" << RESET << endl;
        }

        resultadoActual = jugadores[0].second > jugadores[1].second ? "Delantera actual: " + jugadores[0].first : (jugadores[0].second < jugadores[1].second ? "Delantera actual: " + jugadores[1].first : "Empate en la delantera");

        cout <<RED<<BG_YELLOW<< resultadoActual <<RESET<< endl;

        ronda++;
    } while (ronda <= totalRondas);

    /*Muestro al ganador*/
    if (jugadores[0].second > jugadores[1].second)
    {
        cout <<BG_GREEN<< "Ganador: " << jugadores[0].first <<RESET<< endl;
    }
    else
    {
        cout <<BG_RED<< "Ganador: " << jugadores[1].first <<RESET<< endl;
    }
    return 0;
}