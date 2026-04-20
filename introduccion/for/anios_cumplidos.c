#include <stdio.h>

int main() {

    /* 4.1 Escribir un programa que pregunte al usuario su edad y muestre por 
    pantalla todos los años que ha cumplido (desde 1 hasta su edad).*/

    int edad;

    // validacion de entrada de dato
    printf("Ingrese tu edad actual: ");
    if (scanf("%d", &edad) != 1) {
        printf("Error: Por favor, ingrese un numero entero positivo y mayor a cero.\n");
        return 1;
    }

    // validacion de rango de edad
    if (edad <= 0 || edad > 100) {
        printf("Error: Imposible que tengas menos de 0 anios y si tiene mas de 100 ¡Anda la osa!.\n");
        return 1;
    }

    for (int i = 1; i <= edad; i++) {
        printf("Has cumplido %d anios.\n", i);
    }

    return 0;
}