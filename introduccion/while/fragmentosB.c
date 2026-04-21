#include <stdio.h>

int main() {

    /* 5.2 Completar los siguientes fragmentos de programa e indicar si permiten obtener la misma salida. */
    // B

    // se agrega la inicializacion de las 2 variables
    int n, cont;

    printf("Dame un numero: ");
    scanf("%d", &n);
    for(cont=1;cont<=n;cont++) {
        if (cont%2==0) {
            printf("%d \n", cont);
        }
    }

    return 0;
}