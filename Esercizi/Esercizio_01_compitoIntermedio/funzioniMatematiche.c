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
void test_all_operations(int arr[], int size) {
    printf("Test delle operazioni sui numeri {");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("}:\n");

    for (int i = 0; i < size - 1; i++) {
        printf("%d + %d = %d\n", arr[i], arr[i + 1], add(arr[i], arr[i + 1]));
        printf("%d - %d = %d\n", arr[i], arr[i + 1], sub(arr[i], arr[i + 1]));
        printf("%d * %d = %d\n", arr[i], arr[i + 1], mul(arr[i], arr[i + 1]));
        printf("%d / %d = %.2f\n", arr[i], arr[i + 1], divi(arr[i], arr[i + 1]));
        printf("%d %% %d = %d\n", arr[i], arr[i + 1], mod(arr[i], arr[i + 1]));
        printf("%d ^ %d = %d\n", arr[i], arr[i + 1], power(arr[i], arr[i + 1]));
    }
}
