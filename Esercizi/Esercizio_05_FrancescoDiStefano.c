/*Scrivere un programma in C che:

legga un numero intero positivo N dall'utente e stampi un triangolo di numeri con N righe
per tutti i cicli utilizzare il for
controllare che l'input inserito dall'utente sia positivo; in caso contrario, richiedi di reinserire il valore*/
#include<stdio.h>

int main(){

    int numero = 0;
    do{
        printf("Inserisci un numero intero positivo:");
        scanf("%d", &numero);
        if (numero <= 0){
            printf("Il numero deve essere intero, uguale o maggiore di 1 \n");

        }
    
    }
    while (numero <= 0);
    for (int i = 1; i <= numero; i++){
        for(int j = 1; j <= i; j++){
            //stampa dei numeri presenti nella stessa riga
            printf("%d", j);
        }
        //inserimento del ritorno a capo per iniziare una nuova riga
        printf("\n");

 
    }
    printf("\n\n");
    return 0;
}
