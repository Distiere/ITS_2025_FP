#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
/*robert.pahontu@edu-its.it*/

int main() {
    char parole[][20] = {"elephant", "banana", "computer", "galaxy", "puzzle", "giraffe"};
    
    // seleziona casualmente una parola dall'array inizializzando valore casuale
    srand(time(NULL));
    int index = rand() % 6;  
    char *parola_scelta = parole[index];
    
    int lunghezza_parole = strlen(parola_scelta);
    
    // array per la parola nascosta (inizialmente con * per ogni lettera)
    char parola_nascosta[lunghezza_parole + 1];
    for (int i = 0; i < lunghezza_parole; i++) {
        parola_nascosta[i] = '*';
    }
    parola_nascosta[lunghezza_parole] = '\0';
    
    int tentativi = 0;
    int lettere_indovinate = 0;
    char carattere;
    
    // parte principale di output/input del gioco
    while (lettere_indovinate < lunghezza_parole) {
        printf("La parola da indovinare: %s\n", parola_nascosta);
        printf("Inserisci un carattere: ");
        scanf(" %c", &carattere);
    
        tentativi++;
        int carattere_corretto = 0;
        
        // controllo se il carattere è presente nella parola
        for (int i = 0; i < lunghezza_parole; i++) {
            if (parola_scelta[i] == carattere && parola_nascosta[i] == '*') {
                // aggiorno la parola nascosta
                parola_nascosta[i] = carattere;  
                carattere_corretto = 1;
                lettere_indovinate++;
            }
        }
        
        // casistica di risposta in base al confronto con la parola
        if (!carattere_corretto) {
            printf("Lettera non presente nella parola.\n");
        } else {
            printf("Lettera presente!\n");
        }
    }
    
    // fine del gioco
    printf("Complimenti! Hai indovinato la parola \"%s\" in %d tentativi!\n\n\n", parola_scelta, tentativi);
    
    return 0;
}
