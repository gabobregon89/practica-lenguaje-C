#include <stdio.h>
/* 2. Operaciones matemáticas básicas
Objetivo: trabajar con operadores y entrada de datos. */

int main() {

    int numero;
    printf("Ingresa un numero para jugar: ");
    scanf("%d", &numero);

    int suma = 5 + numero;
    int resta = 10 - numero;
    float multiplicacion = 1.5 * numero;
    float division = 50 / numero;


    printf("5 + %d = %d\n", numero, suma);
    printf("10 - %d = %d\n", numero, resta);
    printf("1.5 * %d = %.2f\n", numero, multiplicacion);
    printf("50 / %d = %.2f\n", numero, division);

    // tambien se pueden realizar las operaciones en el mismo printf
    printf("La suma es %d\n", 5 + numero);
    printf("La resta es %d\n", 10- numero);
    printf("La multiplicacion es %.2f\n", 1.5 * numero);
    printf("La division es %.2f\n", (float)50 / numero);

    return 0;
}