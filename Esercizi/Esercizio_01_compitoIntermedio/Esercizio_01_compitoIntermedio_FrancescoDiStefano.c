#include<stdio.h>
#include"operazioni.h"//richiamo definizione di operazioni matematiche
#include"funzioniMatematiche.c"//richiamo per uso delle operazioni matematiche



int main(){
    //dichiarazione e scansione di variabili da far inserire all'utente
    int sceltaUtente;
    int num1, num2;
    float risultato;
    //stampa del menù per utente
    printf("\nBenvenuto, scegli una delle operazioni disponibili con un numero da 1 a 8 e successivamente i numeri con cui fare l'operazione\n");
    printf("\n--- Menu ---\n");
    printf("1. Addizione (+)\n");
    printf("2. Sottrazione (-)\n");
    printf("3. Moltiplicazione (*)\n");
    printf("4. Divisione (/)\n");
    printf("5. Modulo (%%)\n");
    printf("6. Potenza (^)\n");
    printf("7. Test di tutte le funzioni\n");
    printf("8. Esci\n");
    printf("Scegli un'operazione (1-8): ");
    scanf("%d", &sceltaUtente);
    //uso di blocco switch per determinare la casistica e quindi richiamo di funzioni matematiche
    do
        {
            switch (sceltaUtente) {
                case 1:
                    printf("Inserisci il primo numero: ");
                    scanf("%d", &num1);
                    printf("Inserisci il secondo numero: ");
                    scanf("%d", &num2);
                    printf("Risultato: %d\n", add(num1, num2));
                    break;
                case 2:
                    printf("Inserisci il primo numero: ");
                    scanf("%d", &num1);
                    printf("Inserisci il secondo numero: ");
                    scanf("%d", &num2);
                    printf("Risultato: %d\n", sub(num1, num2));
                    break;
                case 3:
                    printf("Inserisci il primo numero: ");
                    scanf("%d", &num1);
                    printf("Inserisci il secondo numero: ");
                    scanf("%d", &num2);
                    printf("Risultato: %d\n", mul(num1, num2));
                    break;
                case 4:
                    printf("Inserisci il primo numero: ");
                    scanf("%d", &num1);
                    printf("Inserisci il secondo numero: ");
                    scanf("%d", &num2);
                    risultato = divi(num1, num2);
                        if (num2 != 0) {
                            printf("Risultato: %.2f\n", risultato);
                        }
                    break;
                case 5:
                    printf("Inserisci il primo numero: ");
                    scanf("%d", &num1);
                    printf("Inserisci il secondo numero: ");
                    scanf("%d", &num2);
                    printf("Risultato: %d\n", mod(num1, num2));
                    break;
                case 6:
                    printf("Inserisci il primo numero: ");
                    scanf("%d", &num1);
                    printf("Inserisci il secondo numero: ");
                    scanf("%d", &num2);
                    printf("Risultato: %d\n", power(num1, num2));
                    break;
                case 7:
                    printf("Inserisci il primo numero: ");
                    scanf("%d", &num1);
                    printf("Inserisci il secondo numero: ");
                    scanf("%d", &num2);
                    printf("Test di tutte le funzioni:\n");
                    printf("Addizione: 5 + 3 = %d\n", add(5, 3));
                    printf("Sottrazione: 5 - 3 = %d\n", sub(5, 3));
                    printf("Moltiplicazione: 5 * 3 = %d\n", mul(5, 3));
                    printf("Divisione: 6 / 2 = %.2f\n", divi(6, 2));
                    printf("Modulo: 5 %% 3 = %d\n", mod(5, 3));
                    printf("Potenza: 2 ^ 3 = %d\n\n", power(2, 3));
                    break;
                case 8:
                    printf("Uscita dal programma...\n\n");
                    return 0;
            //stampa di messaggio di errore in caso utente immetta una richiesta errata
                default:
                    printf("Opzione non valida. Riavviare il programma ed inserire un numero iniziale tra 1 ed 8.\n");
                    return 0;
            }           
        } while (sceltaUtente != 8);
        return 0;
    }

