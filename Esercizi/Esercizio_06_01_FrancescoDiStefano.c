/*Scrivere un programma in C che:

Chieda all'utente di inserire 10 numeri interi e li memorizzi in un array.
Calcoli e stampi:
La somma di tutti i numeri positivi presenti nell’array.
La somma di tutti i numeri negativi presenti nell’array.
Il valore massimo e il valore minimo dell'array.
Il numero di elementi pari e il numero di elementi dispari presenti nell'array.
Stampi un messaggio se tutti i numeri inseriti sono positivi o tutti negativi.
Stampi un messaggio se almeno un numero è multiplo di 5.*/

#include<stdio.h>
#include "define_06_01.h"
#include<stdbool.h>
#include<float.h>
#include<limits.h>

int main(){

    int numbers[SIZE];
    int sumPos = 0;
    int sumNeg = 0;
    int max = INT_MIN;
    int min = INT_MAX;
    int contPari = 0;
    int contDispari = 0;
    int contPos = 0;
    int contNeg = 0;
    bool multi5 = false;

    for ( int i = 0; i < SIZE; i++){
        printf("Numero %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    for ( int i = 0; i < SIZE; i++){
        printf("%d ", numbers[i]);
    }
     for ( int i = 0; i < SIZE; i++){
        if( numbers[i] > 0){
            sumPos += numbers[i];
        }
        else {
            sumNeg += numbers[i];
        }
        if ( numbers[i] > max){
            max = numbers[i];
        }
        
        if ( numbers[i] < min){
            min = numbers[i];
        }
        (( (numbers[i] % 2) == 0) ? contPari++ : contDispari++);
        if ( (numbers[i] % 5 ) == 0){
            multi5 = 5;
        }
        if( numbers[i] > 0){
            contPos++;
        }
        if( numbers[i] < 0){
            contNeg++;
        }
        


     }
    // output dei risultati
    printf("\n=== RISULTATI ===\n");
    printf("Somma totale dei positivi %d\n", sumPos);
    printf("Somma totale dei negativi %d\n", sumNeg);
    printf("Massimo %d\n", max);
    printf("Minimo %d\n", min);
    printf("Numeri pari: %d\n", contPari);
    printf("Numeri dispari %d\n", contDispari);
    if (multi5 == true){
        printf("Presente almeno un numero dividibile per 5 \n");
    }
    
    if (multi5 == false){
        printf("Non è presente almeno un numero dividibile per 5 \n");
    }
    printf("\n\n");

    if ( contPos == SIZE ){
        printf("I numeri sono tutti positivi");
    }

    if ( contNeg == SIZE ){
        printf("I numeri sono tutti negativi");
    }
    return 0;
}