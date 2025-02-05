/*Scrivere un programma in C che:

Definisca questa matrice 3x4 di numeri in virgola mobile (float) e la inizializzi staticamente nel codice:
 

  1.5  −6.8   10.0
 −3.2   7.1  −11.3
  4.0  −8.4   12.6
  5.5   9.9  −13.7

Calcoli e stampi:
  La somma di tutti i numeri positivi presenti nella matrice.
  La somma di tutti i numeri negativi presenti nella matrice.
  Il valore massimo e il valore minimo della matrice.
  Il numero di elementi pari e il numero di elementi dispari (considerando solo la parte intera del numero).
  Stampi un messaggio se tutti i numeri nella matrice sono positivi o tutti negativi.
  Stampi un messaggio se almeno un numero è multiplo di 5 (considerando solo la parte intera del numero).
*/

#include <stdio.h>
#include<float.h>
#include<stdbool.h>
#include "define_06_02.h"

int main(){
    float matrix [ROWS][COLS] =
    {
        {1.5 , -6.8, 10.0},
        {-3.2, 7.1, -11.3},
        {4.0, -8.4, 12.6},
        {5.5, 9.9, -13.7}
    };
    // La somma di tutti i numeri positivi presenti nella matrice
    float sumPos = 0;
    for ( int i = 0 ; i < ROWS; i++ ){
      for( int j = 0; j < COLS; ++j ){
        float f = matrix[i][j];
        if( f >= 0 ){
          // il numero è positivo
          sumPos = sumPos + f;
        }

      }
    }
    printf("\n=== SOMMA VALORI POSITIVI ===\n\n");
    printf("somma: %2f", sumPos);
    printf("\n\n");

    // somma dei valori negativi
    float sumNeg = 0;
    for ( int i = 0 ; i < ROWS; i++ ){
      for( int j = 0; j < COLS; ++j ){
        float f = matrix[i][j];
        if( f < 0 ){
          // il numero è negativo
          sumNeg = sumNeg + f;
        }

      }
    }
    printf("\n=== SOMMA VALORI NEGATIVI ===\n\n");
    printf("somma: %2f", sumNeg);

    printf("\n\n");

    // il valore massimo della matrice
    float max = FLT_MIN_EXP;
    for ( int i = 0 ; i < ROWS; i++ ){
      for( int j = 0; j < COLS; ++j ){
        float f = matrix[i][j];
        if( max < f ){
          // ho trovato un nuovo massimo
          max = f;
        }

      }
    }
    printf("\n=== VALORE MASSIMO ===\n\n");
    printf("MAX: %2f", max);
    printf("\n\n");

    // il valore minimo della matrice
    float min = FLT_MAX;
    for ( int i = 0 ; i < ROWS; i++ ){
      for( int j = 0; j < COLS; ++j ){
        float f = matrix[i][j];
        if( min > f ){
          // ho trovato un nuovo minimo
          min = f;
        }

      }
    }
    printf("\n=== VALORE MINIMO ===\n\n");
    printf("MIN: %2f", min);
    printf("\n\n");
    //Il numero di elementi pari e il numero di elementi dispari
    int countEven = 0;
    for ( int i = 0 ; i < ROWS; i++ ){
      for( int j = 0; j < COLS; ++j ){
        int f = matrix[i][j];
        bool isEven = (( f % 2) == 0 );
        if( isEven ){
          // ho trovato un numero pari
          countEven++;
        }

      }
    }
    printf("\n=== QUANTI SONO I NUMERI PARI ===\n\n");
    printf("COUNTER: %d", countEven);
    printf("\n=== QUANTI SONO I NUMERI DISPARI ===\n\n");
    printf("COUNTER: %d", ((ROWS*COLS) - countEven));
    printf("\n\n"); 
    //Stampi un messaggio se tutti i numeri nella matrice sono positivi o tutti negativi
    bool allPos = true;
    for ( int i = 0 ; i < ROWS; i++ ){
      for( int j = 0; j < COLS; ++j ){
        int f = matrix[i][j];
        if( f < 0 ){
          // ho trovato un numero negativo
          allPos = false;
          break;
        }

      }
    } 
    if( allPos ){
          printf("\n=== TUTTI I NUMERI SONO POSITIVI ===\n\n");
    }
    bool allNeg = true;
    for ( int i = 0 ; i < ROWS; i++ ){
      for( int j = 0; j < COLS; ++j ){
        int f = matrix[i][j];
        if( f < 0 ){
          // ho trovato un numero positivo
          allNeg = false;
          break;
        }

      }
    } 
    if( allNeg ){
          printf("\n=== TUTTI I NUMERI SONO NEGATIVI ===\n\n");
    } 




    return 0;
}