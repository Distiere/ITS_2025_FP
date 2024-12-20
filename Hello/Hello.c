#include <stdio.h>




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

    return 0;
}