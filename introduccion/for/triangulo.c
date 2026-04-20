#include <stdio.h>

int main() {
    /* 4.3 Realizar un programa que permita obtener la siguiente salida. */
    
    int numeros = 10;
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= numeros; j++) {
            printf("%d ", j);
        }
        numeros -= 1;
        printf("\n");
    }
    
    return 0;
}