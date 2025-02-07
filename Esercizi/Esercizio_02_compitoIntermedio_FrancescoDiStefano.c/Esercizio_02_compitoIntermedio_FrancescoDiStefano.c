#include <stdio.h>
#include <string.h>
#include "Funzioni_Esercizio_02_compitoIntermedio_FrancescoDiStefano.c" // Includiamo il file delle funzioni

int main() {
    int conta_vocali_iniziali = 0;
    int conta_numeri = 0;
    int conta_palindromi = 0;
    char parola_piu_lunga[20], parola_piu_corta[20];

    // Contare le parole che iniziano con una vocale e quelle che contengono almeno un numero
    for (int i = 0; i < NUMERO_PAROLE; i++) {
        if (inizia_con_vocale(parole[i])) {
            conta_vocali_iniziali++;
        }
        if (contiene_numero(parole[i])) {
            conta_numeri++;
        }
        if (palindroma(parole[i])) {
            conta_palindromi++;
        }
    }
        for (int i = 0; i < NUMERO_PAROLE; i++) {
        if (inizia_con_vocale(test_personale[i])) {
            conta_vocali_iniziali++;
        }
        if (contiene_numero(test_personale[i])) {
            conta_numeri++;
        }
        if (palindroma(test_personale[i])) {
            conta_palindromi++;
        }
    }

    // Trova la parola più lunga e la più corta
    trova_parola_piu_lunga_e_piu_corta(parole, NUMERO_PAROLE, parola_piu_lunga, parola_piu_corta);
    trova_parola_piu_lunga_e_piu_corta_personale(test_personale, NUMERO_PAROLE, parola_piu_lunga, parola_piu_corta);
    // Calcolare il numero totale di caratteri
    int caratteri_totali = numero_caratteri_totali(parole, NUMERO_PAROLE);
    int caratteri_totali_personale = numero_caratteri_totali_personale(test_personale, NUMERO_PAROLE);

    // Stampa i risultati
    printf("Numero di parole che iniziano con una vocale: %d\n", conta_vocali_iniziali);
    printf("Numero di parole che contengono almeno un numero: %d\n", conta_numeri);
    printf("Numero di parole palindrome: %d\n", conta_palindromi);
    printf("La parola più lunga: %s\n", parola_piu_lunga);
    printf("La parola più corta: %s\n", parola_piu_corta);
    printf("Numero totale di caratteri in tutte le parole: %d\n", caratteri_totali);

    // Stampare le parole in ordine corretto e al contrario
    stampa_parole_e_inverse(parole, NUMERO_PAROLE);
    stampa_parole_e_inverse_personale(test_personale, NUMERO_PAROLE);

    // Stampare le parole in ordine inverso con i singoli caratteri invertiti
    stampa_parole_invertite_e_caratteri_invertiti(parole, NUMERO_PAROLE);
    stampa_parole_invertite_e_caratteri_invertiti_personale(test_personale, NUMERO_PAROLE);

    return 0;
}
