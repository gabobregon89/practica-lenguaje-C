#include <stdio.h>

int main() { 
    
    // printf funcion que me permite imprimir por pantalla
    printf("Hola Gabo! \n"); 

    // scanf funcion que me permite leer datos por teclado
    int numero;
    int otro_numero;
    // printf("Ingrese un numero: ");
    // scanf("%d\n", &numero);

    // tipos de datos
    int numero_entero = 10;
    float numero_decimal = 3.14;
    char caracter = 'G';
    char oracion[20] = "Hola Gabriel";

    // agrego %i ó %d para imprimir enteros
    // agrego %f para imprimir decimales
    printf("%i\n%.2f\n", numero_entero, numero_decimal);

    // agrego %c para imprimir caracteres
    printf("%c\n", caracter);

    // agrego %s para imprimir cadenas de caracteres
    printf("%s\n", oracion);

    // estructuras de control
    // if evalua una condicion y si esta SE CUMPLE ejecuta el bloque de codigo dentro de las llaves
    if (numero_entero == 9) {
        printf("El numero es 10\n");
    }

    // else es la condicion que se ejecuta cuando el id NO SE CUMPLE
    if (numero_entero != 10) {
        printf("Es 10 titan\n");
    } else {
        printf("Otra cosa nada que ver\n");
    }

    return 0; 
}