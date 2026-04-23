#include <stdio.h>
#define VUELTAS 5

int main() {
    /* Ingresar por teclado y mostrarlo por pantalla, usar DEFINE para declarar la variable 
    que maneja el bucle, ademas: calcular la suma total y mostrar el resultado por pantalla, 
    calcular el promedio y mostrar el resultado por pantalla.
    Documentar el programa.
    Permitir que el usuario pueda volver a correr el programa. */

    int num, suma = 0;

    for(int i = 0; i < VUELTAS; i++) {
        printf("Ingresa un numero positivo: ");
        if(scanf("%d", &num) != 1) {
            printf("Error: ingresaste un valor invalido");
            return 1;
        }

        suma = suma + num;
    }

    printf("La suma total es de %d\n", suma);
    printf("El promedio es de %.2f\n", (float)(suma / num));


    /* Determinar el precio del billet de ida y vuelta del avion, conociendo la distancia a recorrer 
    y sabiendo que si el numero de dias de estancia en el lugar es superior a 7 y la distancia superior
    a 800km el billete tiene un reduccion del 30%. El precio  por km es de $2500. */

}