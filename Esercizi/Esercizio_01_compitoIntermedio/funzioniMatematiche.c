#include <stdio.h>
#include "operazioni.h"

int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}


int mul(int a, int b) {
    return a * b;
}

float divi(int a, int b) {
    if (b == 0) {
        printf("Errore: divisione per zero!\n");
        return 0;
    }
    return (float)a / b;
}
int mod(int a, int b) {
    if (b == 0) {
        printf("Errore: modulo per zero!\n");
        return 0;
    }
    return a % b;
}

int power(int base, int esp) {
    int result = 1;
    for (int i = 0; i < esp; i++) {
        result *= base;
    }
    return result;
}
