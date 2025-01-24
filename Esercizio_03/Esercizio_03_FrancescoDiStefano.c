/*Scrivere un programma in C che:

Legga da tastiera il giorno della settimana (come stringa) e la spesa effettuata in quel giorno.
Usi una macro per calcolare l'IVA (22%) sulla spesa.
Usi una struttura di controllo if-else per distinguere i giorni feriali da quelli festivi.
Stampi il totale delle spese con e senza IVA, specificando se il giorno è feriale o festivo.*/

#include <stdio.h>
#include <stdbool.h>

#define IVA_PERCENTUALE 0.22
#define CALCOLA_IVA(spesa) ((spesa) * IVA_PERCENTUALE)

int main(void){
    char giorno[15];
    float spesa, iva, totale_con_iva, totale_senza_iva;

    //Lettura del giorno della settimana
    printf("Immettere il giorno della settimana in cui si è fatta la spesa: ");
    scanf("%s", giorno);
    //Lettura della spesa del giorno
    printf("Immettere il prezzo totale della spesa effetuata: ");
    scanf("%f", &spesa);
    //Determinazine giorno feriale o festivo
    if (strcmp(giorno, "sabato") == 0 || strcmp(giorno, "domenica") == 0) {
        printf("Il giorno %s è festivo.\n", giorno);
    } else {
        printf("Il giorno %s è feriale.\n", giorno);
    };
    //Calcolo Iva
    iva = CALCOLA_IVA(spesa);
    totale_con_iva = spesa + iva;
    totale_senza_iva = spesa;
    //Stampe finali
    printf("Spesa con IVA: %f\n", totale_con_iva);
    printf("Spesa senza IVA: %f\n\n", totale_senza_iva);



    return 0;
}