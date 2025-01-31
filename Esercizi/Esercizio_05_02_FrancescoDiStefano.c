/*Scrivere un programma in C che:

simuli un semplice gioco in cui l'utente deve indovinare un numero segreto
il programma genera un numero segreto casuale tra 1 e 100
l'utente ha un numero illimitato di tentativi per indovinare il numero.
dopo ogni tentativo, il programma deve fornire un suggerimento: se il numero inserito è troppo alto, il programma deve stampare: "Troppo alto! Riprova."; se il numero inserito è troppo basso, il programma deve stampare: "Troppo basso! Riprova."
se l'utente indovina, il programma stampa: "Complimenti! Hai indovinato il numero in [X] tentativi." (dove [X] è il numero di tentativi effettuati).
il programma termina solo quando l'utente indovina il numero.
usare il ciclo do while per gestire i tentativi
utilizzare la funzione rand() per generare il numero segreto casualmente
gestire i tentativi con una variabile contatore
verificare che l'input sia valido (solo numeri interi positivi)*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int main(){
    //inizializzazione di numeri casuali
    srand(time(NULL));

    //generazione del numero casuale
    int NumeroSegreto = rand() % 100 + 1;
    int NumeroInserito = 0;
    int ContatoreTentativi = 0;

    // ciclo per gestire i tentatvi
    do{
        printf("Inserisci un numero da 1 a 100: ");
        ContatoreTentativi ++;
        scanf("%d", &NumeroInserito);
        if (NumeroInserito < NumeroSegreto){
            printf("Il numero inserito è troppo piccolo, scarso\n");

        }
        else if (NumeroInserito > NumeroSegreto){
            printf("Il numero inserito è troppo grande, scimmia\n");

        }
        else{
            printf("A questo giro ci hai preso schifoso, ci ha messo solo %d tentativi\n\n\n", ContatoreTentativi);
          
        }
    } while(NumeroInserito != NumeroSegreto);

    
    
    
    return 0;
}