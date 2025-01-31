/*Scrivere un programma in C che:

Definisca questa matrice 3x4 di numeri in virgola mobile (float) e la inizializzi staticamente nel codice:
 

  1.5  −6.8   10.0
 −3.2   7.1  −11.3
  4.0  −8.4   12.6
  5.5   9.9  −13.7

Calcoli e stampi:
La somma di tutti i numeri positivi presenti nella matrice.
La somma di tutti i numeri negativi presenti nella matrice.
Il valore massimo e il valore minimo della matrice.
Il numero di elementi pari e il numero di elementi dispari (considerando solo la parte intera del numero).
Stampi un messaggio se tutti i numeri nella matrice sono positivi o tutti negativi.
Stampi un messaggio se almeno un numero è multiplo di 5 (considerando solo la parte intera del numero).
*/

#include <stdio.h>
#include <define_06_02.h>

int main(){
    float matrix [ROWS][COLS] =
    {
        {1.5 , −6.8, 10.0},
        {−3.2, 7.1, −11.3},
        {4.0, −8.4, 12.6},
        {5.5, 9.9, −13.7}
    };
}