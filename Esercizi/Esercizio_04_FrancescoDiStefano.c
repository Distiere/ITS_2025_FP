/*Scrivere un programma in C che:

Gestisca le spese mensili per elettricità, acqua, gas e internet.
Usi una macro per calcolare una penale del 10% per ritardi nei pagamenti.
Usi direttive come #ifdef e #ifndef per: abilitare o disabilitare il calcolo della penale in base a una configurazione.
Permettere il debug del programma stampando informazioni aggiuntive.
Determini se la spesa totale supera una soglia predefinita e stampi un messaggio con if-else.
Offra suggerimenti di risparmio utilizzando uno switch.
Stampi un riepilogo finale con tutte le informazioni.*/ 



#include <stdio.h>
#include "define.h"


int main(){
    float elettricita, acqua, gas, web;
    float tot = elettricita + acqua + gas + web;
    char ritardo[2];
    float penale = 0;

    printf("Inserimento delle spese mensili: \n");
    printf("Elettricità: ");
    scanf("%f", &elettricita);
    printf("Acqua: ");
    scanf("%f", &acqua);
    printf("Gas: ");
    scanf("%f", &gas);
    printf("Web: ");
    scanf("%f", &web);
    printf("Totale spesa %f\n", &tot);
    if (tot >= soglia_massima_spesa){
        printf("La spesa mensile e' fuori controllo!!\n");
    }
    else{
        printf("La spesa mensile e' sotto controllo");
    }
    printf("Il pagamento è in ritardo [s/n]: ");
    scanf("%1s", ritardo);
    if (!strcmp(ritardo, "s")){
        //pagamento in ritardo
        printf("Attenzione: la spesa mensile è stata pagata in ritardo\n");
        penale = calc_penale(tot);
        printf("Penale: %2f\n", &penale);

    }
    else{
        //pagamento entro la data di scadenza
        printf("Attenzione: la spesa mensile è stata pagata entro la scadenza\n");

    }
    

    return 0;
}