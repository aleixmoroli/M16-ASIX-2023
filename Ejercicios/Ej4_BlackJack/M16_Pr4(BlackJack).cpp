// M16_Pr4(BlackJack).cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <random>

using namespace std;

//En las arrays, guardamos si una carta ha salido o no
int diamantes[13] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
int trevoles[13] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
int corazones[13] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
int picas[13] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
int puntuacionJugador = 0;
int puntuacionCroupier = 0;
int cartaAS = 1;
int valorAS = 0;

int valorCarta(int carta, string palo) {
    //Si es un 0 es un AS
    if (carta == 0) {
        cout << carta << " AS\n";
        cin >> valorAS;
        if (valorAS == 11)
        {
            cartaAS = 11;
        }
    }
    if (carta == 1){
        cout << carta << " AS\n";
        cin >> valorAS;
        if (valorAS == 1)
        {
            cartaAS = 1;
    }
    if (carta == 2){
        cout << carta = 2;
    }
    if (carta == 3){
        cout << carta = 3;
    }
    if (carta == 4){
        cout << carta = 4;
    }
    if (carta == 5){
        cout << carta = 5;
    }
    if (carta == 6){
        cout << carta = 6;
    }
    if (carta == 7){
        cout << carta = 7;
    }
    if (carta == 8){
        cout << carta = 8;
    }
    if (carta == 9){
        cout << carta = 9;
    }
    if (carta == 10){
        cout << carta = 10;
    }
    else if (carta > 0 && carta <= 10) {
        //Si es un numero entre el 1 y el 9, es la carta con ese número más uno. Por ejemplo, si el rand es un 4,´la carta será un 5
        carta = carta + 1, carta + 2, carta + 3, carta + 4, carta + 5, carta + 6, carta + 7, carta + 8, carta + 9;
        rand() % 4;

    }
    else if (carta > 10) {
        //Si es un número que va del 10 al 12, será una figura y vale 10.
        carta = 10;
    }
}

int repartirCarta() {
    bool cartaEncontrada = false;

    while (cartaEncontrada == false) {
        int random = rand() % 4;
        int carta = rand() % 13;
        int siguiente_carta = 0;

        //Hay que obtener un número aleatorio entre 0 y 3

        if (random == 0) {
            //Si es 0--> Array de diamantes
            //Tenemos que comprobar que la carta está disponible
            if ((diamantes[carta]) == 1) {
                cout << carta << " diamantes\n ";
                diamantes[carta] = 0;
                valorCarta(carta, "Diamantes");
                //Mostrar el valor de la carta
            }
            // cout << diamantes[carta] << " ";
        }
        //Si es 1--> Array de trevoles
        else if (random == 1) {
            if ((trevoles[carta]) == 1) {
                cout << carta << " trevoles\n ";
                trevoles[carta] = 0;
            }
            // cout << trevoles[carta] << " ";
        }

        //Si es 2--> Array de corazones
        else if (random == 2) {
            if ((corazones[carta]) == 1) {
                cout << carta << " corazones\n ";
                corazones[carta] = 0;
                // cout << corazones[carta] << " ";
            }

            //Si es 3--> Array de picas
            else if (random == 3) {
                if ((picas[carta]) == 1) {
                    cout << carta << " picas\n ";
                    picas[carta] = 0;
                }
                // cout << picas[carta] << " ";
            }
        }
    }

    while (cartaEncontrada == true) {
        int random = rand() % 0;
        int carta = rand() % 0;
        //La carta está disponible, así que la marcamos como no disponible con un 0
        //tenemos que poner carta Encontrada a true.

    }


}




int main()
{
    cout << "Bienvenido al videojuego de blackjack\n";

    cout << "¿Es un AS?";

    cout << "¿Quieres que te reparta otra carta?";
}

