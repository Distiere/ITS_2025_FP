#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#define NUMERO_PAROLE 7

//definizione dell'array delle stringhe
char parole[NUMERO_PAROLE][20] = {"elephant", "42trees", "Anna", "oasis", "civic", "mango", "Galaxy"};
char test_personale[NUMERO_PAROLE][20] = {"macumba", "33trentini", "Marcolino", "citronella", "universale", "repository"};
//funzione per verificare se una stringa inizia con una vocale
bool inizia_con_vocale(char *parola) {
    char primo_carattere = tolower(parola[0]);
    return (primo_carattere == 'a' || primo_carattere == 'e' || primo_carattere == 'i' || primo_carattere == 'o' || primo_carattere == 'u');
}

//funzione per verificare se una stringa contiene almeno un numero
bool contiene_numero(char *parola) {
    for (int i = 0; parola[i] != '\0'; i++) {
        if (isdigit(parola[i])) {
            return true;
        }
    }
    return false;
}

//funzione per verificare se una stringa è palindroma
bool palindroma(char *parola) {
    int lunghezza = strlen(parola);
    for (int i = 0; i < lunghezza / 2; i++) {
        if (parola[i] != parola[lunghezza - i - 1]) {
            return false;
        }
    }
    return true;
}

//funzione per trovare la stringa più lunga e la più corta
void trova_parola_piu_lunga_e_piu_corta(char parole[][20], int n, char *piu_lunga, char *piu_corta) {
    strcpy(piu_lunga, parole[0]);
    strcpy(piu_corta, parole[0]);
    
    for (int i = 1; i < n; i++) {
        if (strlen(parole[i]) > strlen(piu_lunga)) {
            strcpy(piu_lunga, parole[i]);
        }
        if (strlen(parole[i]) < strlen(piu_corta)) {
            strcpy(piu_corta, parole[i]);
        }
    }
}
//stessa funzione con dati personali
void trova_parola_piu_lunga_e_piu_corta_personale(char test_personale[][20], int n, char *piu_lunga, char *piu_corta) {
    strcpy(piu_lunga, test_personale[0]);
    strcpy(piu_corta, test_personale[0]);
    
    for (int i = 1; i < n; i++) {
        if (strlen(test_personale[i]) > strlen(piu_lunga)) {
            strcpy(piu_lunga, test_personale[i]);
        }
        if (strlen(test_personale[i]) < strlen(piu_corta)) {
            strcpy(piu_corta, test_personale[i]);
        }
    }
}

//funzione per calcolare il numero totale di caratteri
int numero_caratteri_totali(char parole[][20], int n) {
    int totale = 0;
    for (int i = 0; i < n; i++) {
        totale += strlen(parole[i]);
    }
    return totale;
}
//stessa funzione con dati personali
int numero_caratteri_totali_personale(char test_personale[][20], int n) {
    int totale = 0;
    for (int i = 0; i < n; i++) {
        totale += strlen(test_personale[i]);
    }
    return totale;
}


//funzione per stampare le parole in ordine corretto e al contrario
void stampa_parole_e_inverse(char parole[][20], int n) {
    printf("Parole in ordine corretto:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", parole[i]);
    }

    printf("\nParole in ordine inverso:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%s\n", parole[i]);
    }
}
//stessa funzione con dati personali
void stampa_parole_e_inverse_personale(char test_personale[][20], int n) {
    printf("Parole in ordine corretto:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", test_personale[i]);
    }

    printf("\nParole in ordine inverso:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%s\n", test_personale[i]);
    }
}

//funzione per stampare le parole in ordine inverso, invertendo anche i singoli caratteri
void stampa_parole_invertite_e_caratteri_invertiti(char parole[][20], int n) {
    printf("\nParole in ordine inverso con caratteri invertiti:\n");
    for (int i = n - 1; i >= 0; i--) {
        int lunghezza = strlen(parole[i]);
        for (int j = lunghezza - 1; j >= 0; j--) {
            printf("%c", parole[i][j]);
        }
        printf("\n");
    }
}
//stessa funzione con dati personali
void stampa_parole_invertite_e_caratteri_invertiti_personale(char test_personale[][20], int n) {
    printf("\nParole in ordine inverso con caratteri invertiti:\n");
    for (int i = n - 1; i >= 0; i--) {
        int lunghezza = strlen(test_personale[i]);
        for (int j = lunghezza - 1; j >= 0; j--) {
            printf("%c", test_personale[i][j]);
        }
        printf("\n");
    }
}

