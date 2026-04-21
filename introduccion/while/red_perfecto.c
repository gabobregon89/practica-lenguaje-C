#include <stdio.h>

int main() {

    /* 5.4 Rediseñar el programa 4.4 usando sentencia While. */

    int numero, cont = 1, suma_divisores = 0;

    // verifico que se ingrese un numero entero positivo
    printf("Ingrese un numero entero: ");
    if (scanf("%d", &numero) != 1 || numero <= 0) {
        printf("Error: Por favor, ingrese un numero entero.\n");
        return 1;
    }

    // obtengo sus divisores propios y los sumo
    while (cont < numero) {
        if (numero % cont == 0) {
            suma_divisores += cont;
        }
        cont++;
    }

    // comparo la suma de los divisores con el numero ingresado
    if (suma_divisores == numero) {
        printf("%d es un numero perfecto.\n", numero);
    } else {
        printf("%d no es un numero perfecto.\n", numero);
    }

    return 0;
}