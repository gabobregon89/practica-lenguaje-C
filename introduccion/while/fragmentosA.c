#include <stdio.h>

int main() {

    /* 5.2 Completar los siguientes fragmentos de programa e indicar si permiten obtener la misma salida. */
    // A

    // se agrega la inicializacion de las 2 variables
    int n, cont;

    printf("Dame un numero: ");
    scanf("%d", &n);
    cont=1;
    while (cont<=n) {
        printf("%d \n", cont);
        cont=cont+2;
    }

    return 0;
}