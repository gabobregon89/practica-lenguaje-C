#include <stdio.h>

int main() {

    /* 4.4 Escribir un programa que permita determinar si un número entero que se ingresa por teclado es perfecto. 
    Un número es perfecto si es igual a la suma de sus divisores propios. */

    int numero, suma_divisores = 0;

    // verifico que se ingrese un numero entero positivo
    printf("Ingrese un numero entero: ");
    if (scanf("%d", &numero) != 1 || numero <= 0) {
        printf("Error: Por favor, ingrese un numero entero.\n");
        return 1;
    }

    // obtengo sus divisores propios y los sumo
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            suma_divisores += i;
        }
    }

    // comparo la suma de los divisores con el numero ingresado
    if (suma_divisores == numero) {
        printf("%d es un numero perfecto.\n", numero);
    } else {
        printf("%d no es un numero perfecto.\n", numero);
    }

    return 0;
}