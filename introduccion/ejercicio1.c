#include <stdio.h>

// Ejercicio 1
// Crea un programa que pida tu nombre, edad y altura, y luego los muestre en pantalla.

int main() {

    char nombre[20];
    int edad;
    float altura;

    printf("Bienvenido al programa, acontinuacion se te pedira que ingreses tus datos.\n");

    printf("Ingresa tu nombre: ");
    scanf("%s", nombre);

    printf("Ingresa tu edad: ");
    scanf("%d", &edad);

    printf("Ingresa tu altura (en metros): ");
    scanf("%f", &altura);

    printf("Hola %s, tenes %d años y medis %.2f metros.\n", nombre, edad, altura);

    return 0;
}