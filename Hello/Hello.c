#include <stdio.h>
#include <stdbool.h>


// macros
#define DEBUG_PRINT(x) printf("[DEBUG] - ");printf("%s", x);printf("\n");
#define NEW_LINE printf("\n");
#define PI_GRECO 3.14155926



int main()
{
    printf("Hello World!!!\n\n\n");
    
    //variable of 32 chars
    char name [32];

    // ask for a name
    printf("enter a name: ");

    //read the input
    scanf("%s", name);

    //print a message wiht name entered
    printf("\nHello\t%s\n\n\n", name);

    bool b= true;
    printf("my bool value %d", b);
    
    NEW_LINE;

    int i = 10;
    printf("my integer value %d", i);
    
    NEW_LINE;
    float f = 10.0;
    printf("enter a real number: ");
    scanf("%f", &f);
    NEW_LINE;
    printf("my float value %f", f);
    NEW_LINE;
    printf("=== AREA DEL CERCHIO ===");
    printf("Inserisci il raggio: ");
    scanf("%f", &f);
    f= f * f * PI_GRECO;
    float funny = (f + f - PI_GRECO) / 10.0;
    NEW_LINE;
    printf("L'area del cerchio è: %f", f);
    NEW_LINE;
    printf("Calcolo con tutti gli operatori matematici: %f", funny);
    NEW_LINE;
    DEBUG_PRINT("Programma terminato");

   



    NEW_LINE;
    NEW_LINE;
    return 0;
}