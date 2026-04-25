#include <stdio.h>

int main() {

    /* Escribe un programa en C que solicite al usuario los siguientes datos:
    La inicial de su nombre (un carácter).
    Su edad (un número entero).
    Su altura en metros (un número decimal, por ejemplo 1.75).
    El programa debe leer cada dato usando scanf() y luego mostrar un mensaje 
    en pantalla que resuma toda la información ingresada, con un formato claro y en líneas separadas. */

    int edad;
    float altura;
    char inicial_nombre;

    printf("Datos personales\n");
    printf("Ingresa los siguientes datos.\n");
    printf("Tu edad: ");
    scanf("%d", &edad);
    printf("Tu altura (mts): ");
    scanf("%f", &altura);
    printf("La inicial de tu nombre: ");
    scanf(" %c", &inicial_nombre);

    printf("La inicial de tu nombre es  %c\n", inicial_nombre);
    printf("Tenes %d anios\n", edad);
    printf("Y tu estatura es %.2f mts\n", altura);

    return 0;
}