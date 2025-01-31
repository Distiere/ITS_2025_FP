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
    float tot = elettricita + acqua + gas + web;
    printf("Totale spesa %f\n", tot);
    if (tot >= soglia_massima_spesa){
        printf("La spesa mensile e' fuori controllo!!\n");
    }
    else{
        printf("La spesa mensile e' sotto controllo");
    }
    debug_print("Calcolo della penale");

#ifdef ABILITA_CALC_PENALE
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
    #endif //ABILITA_CALC_PENALE
    // suggerimento per il risparmio
    int scelta_corretta = 1; 
    do{


  

        printf("Quale spesa vuoi ottimizzare?\n");
        printf("1. Elettricità \n2. Acqua \n3. Gas\n4. Internet \n");
        int scelta = 0;
        scanf("%d", &scelta);
        scelta_corretta = 1;
        switch (scelta) {
            case 1:
                printf("Suggetimento: fai attenzione a spegnere le luci\n\n");
                break;
            case 2:
                printf("Suggerminato: ripare eventuali perdite e ricorda di chiudere l'acqua mentre lavi i denti\n\n");
                break;
            case 3:
                printf("Suggerimento: mentre cucini la pasta appena bolle spegni il gas e copri la pentola\n\n");
                break;
            case 4:
                printf("Suggerimento: puoi provare a cercare un nuovo operatore che abbia costi inferiori\n\n");
                break;
            default:
                scelta_corretta = 0;
                printf("Scelta non valida\n\n");
        }
    } while(scelta_corretta == 0);
    
    return 0;
}