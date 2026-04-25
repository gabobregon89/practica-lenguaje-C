#include <stdio.h>

int main() {

    /* Escribí un programa en C que tenga una variable entera llamada temperatura con un valor inicial asignado.
    El programa debe analizar ese valor y mostrar en pantalla uno de los siguientes mensajes:
    Si la temperatura es menor que 10, mostrar: Hace frio
    En caso contrario, mostrar: No hace frio */

    float temperatura;

    printf("Bienvenido al programa de temperatura\n");
    printf("Ingresa la temperatura del dia (en grados): ");
    scanf("%f", &temperatura);

    if(temperatura < 10) {
        printf("Hace frio.");
    } else {
        printf("No hace frio.");
    }

    return 0;
}