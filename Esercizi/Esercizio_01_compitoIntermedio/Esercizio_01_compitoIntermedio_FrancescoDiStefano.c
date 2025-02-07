#include<stdio.h>
#include"operazioni.h"

int main(){
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

    int sceltaUtente;
    int num1, num2;
    float risultato;
    scanf("%d", &sceltaUtente);
        printf("Inserisci il primo numero: ");
        scanf("%d", &num1);
        printf("Inserisci il secondo numero: ");
        scanf("%d", &num2);

        switch (sceltaUtente) {
            case 1:
                printf("Risultato: %d\n", add(num1, num2));
                break;
            case 2:
                printf("Risultato: %d\n", sub(num1, num2));
                break;
            case 3:
                printf("Risultato: %d\n", mul(num1, num2));
                break;
            case 4:
                risultato = divi(num1, num2);
                if (num2 != 0) {
                    printf("Risultato: %.2f\n", risultato);
                }
                break;
            case 5:
                printf("Risultato: %d\n", mod(num1, num2));
                break;
            case 6:
                printf("Risultato: %d\n", power(num1, num2));
                break;
            case 7:
                printf("Test di tutte le funzioni:\n");
                printf("Addizione: 5 + 3 = %d\n", add(5, 3));
                printf("Sottrazione: 5 - 3 = %d\n", sub(5, 3));
                printf("Moltiplicazione: 5 * 3 = %d\n", mul(5, 3));
                printf("Divisione: 6 / 2 = %.2f\n", divi(6, 2));
                printf("Modulo: 5 %% 3 = %d\n", mod(5, 3));
                printf("Potenza: 2 ^ 3 = %d\n", power(2, 3));
                break;
            case 8:
                printf("Uscita dal programma...\n");
                break;
            default:
                printf("Opzione non valida. Riprovare.\n");
        }
        return 0;
    }

