#include <stdio.h>
#include <string.h>

// Dichiarazione delle macro per nome, cognome e percentuali di recupero
#define NOME "Francesco"
#define COGNOME "Di Stefano"

// Percentuali di recupero per le diverse categorie
#define PERCENTUALE_R1 0.85
#define PERCENTUALE_R2 0.75
#define PERCENTUALE_R3 0.65
#define PERCENTUALE_R4 0.50
#define PERCENTUALE_R5 0.40

// Funzione principale
int main() {
    // Variabili
    char categoria[3];
    double peso, recuperabile, irrecuperabile;

    // Stampa del messaggio introduttivo
    printf("Ciao, mi chiamo %s %s.\n", NOME, COGNOME);
    printf("Benvenuto nel programma di riciclo RAEE.\n");

    // Chiedi la categoria dell'oggetto da riciclare
    printf("Inserisci la categoria RAEE (R1, R2, R3, R4, R5): ");
    scanf("%s", categoria);

    // Chiedi il peso in kg
    printf("Inserisci il peso in kg.: ");
    scanf("%lf", &peso);

    /*switch (categoria){
        case 'R1':
            recuperabile = peso * PERCENTUALE_R1;
            break;
        case 'R2':
            recuperabile = peso * PERCENTUALE_R2;
            break;
        default:
            // Se la categoria non è valida
            printf("Categoria non valida. Utilizza R1, R2, R3, R4 o R5.\n");
            return 1; // Uscita con errore
            
    }*/

    // Calcolo della percentuale di materiale recuperabile in base alla categoria
    if (strcmp(categoria, "R1") == 0) {
        recuperabile = peso * PERCENTUALE_R1;
    } else if (strcmp(categoria, "R2") == 0) {
        recuperabile = peso * PERCENTUALE_R2;
    } else if (strcmp(categoria, "R3") == 0) {
        recuperabile = peso * PERCENTUALE_R3;
    } else if (strcmp(categoria, "R4") == 0) {
        recuperabile = peso * PERCENTUALE_R4;
    } else if (strcmp(categoria, "R5") == 0) {
        recuperabile = peso * PERCENTUALE_R5;
    } else {
        // Se la categoria non è valida
        printf("Categoria non valida. Utilizza R1, R2, R3, R4 o R5.\n");
        return 1; // Uscita con errore
    }

    // Calcolo del peso irrecuperabile
    irrecuperabile = peso - recuperabile;

    // Stampa dei risultati
    printf("Peso totale: %.2f kg.\n", peso);
    printf("Recuperabile: %.2f kg.\n", recuperabile);
    printf("Irrecuperabile: %.2f kg.\n", irrecuperabile);

    // Messaggio di ringraziamento
    printf("Grazie per aver usato il nostro programma.\n");

    return 0;
}
