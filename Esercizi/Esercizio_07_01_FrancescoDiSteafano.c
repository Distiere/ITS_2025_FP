/*Scrivere un programma in C che:

    chieda all'utente due numeri interi e un'operazione da eseguire (+, -, *, /); il programma deve definire e usare quattro funzioni separate per ciascuna operazione matematica:
    int add(int, int) → somma due numeri
    int sub(int, int) → sottrae due numeri
    int mul(int, int) → moltiplica due numeri
    float divi(int, int) → divide due numeri (gestendo il caso di divisione per zero)
dopo aver preso in input i numeri e l'operazione, il programma deve chiamare la funzione corrispondente e stampare il risultato
    il programma deve essere organizzato per scrivere il codice relativo alle funzioni su file separati dal main 
    il programma deve presentare un menù iniziale con le seguenti opzioni (da visualizzare più volte per ripetere le operazioni):
    1. Addizione (+)
    2. Sottrazione (-)
    3. Moltiplicazione (*)
    4. Divisione (/)
    5. Esci
    Scegli un'operazione (1-5):*/
#include<stdio.h>
#include "operation.h"


int main(){
    printf("\n\n=== OPERAZIONI MATEMATICHE === \n\n");

    int num = add (5,6);

    printf("5+6 = %d\n", num);

    num = sub(5,6);
    printf("5-6= %d\n", num);

    num = mul(5,6);
    printf("5*6= %d\n", num);

    num = div(5,6);
    printf("5/6= %d\n", num);

    printf("\n\n");


    return 0;
}
int add (int op1, int op2){
    return 0;
}