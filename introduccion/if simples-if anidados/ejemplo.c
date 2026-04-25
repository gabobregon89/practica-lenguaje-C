#include <stdio.h>

int main() {

    /* Enunciado del problema: Registro básico de una bicicleta. Escribí un programa en C que declare e 
    inicialice las variables necesarias para guardar la información de una bicicleta.
    El programa debe almacenar:
    la cantidad de ruedas (dato fijo que no cambia)
    el precio de la bicicleta
    la letra inicial de la marca
    el año de fabricación
    Requisitos:
    La cantidad de ruedas debe guardarse como constante.
    El precio debe guardarse en una variable de tipo float.
    La inicial de la marca debe guardarse en una variable de tipo char.
    El año de fabricación debe guardarse en una variable de tipo int.
    Asigná valores válidos a cada dato al momento de declarar las variables. */

    const int ruedas = 2;
    int año_fabricacion;
    float precio_bici;
    char marca;

    printf("Registo de bicicletas\n");
    printf("Ingresa los siguientes datos.\n");
    printf("Ingresa la inicial de la marca de la bicicleta: ");
    scanf(" %c", &marca);
    printf("Ingresa el anio de fabricacion de la bicicleta: ");
    scanf("%d", &año_fabricacion);
    printf("Ingresa el precio en pesos de la bicicleta: ");
    scanf("%f", &precio_bici);

    printf("Bicicleta marca: %c\n", marca);
    printf("Anio de fabricacion es %d\n", año_fabricacion);
    printf("Tiene %d ruedas originales de fabrica\n", ruedas);
    printf("El precio es de $ %.2f\n", precio_bici);

    return 0;
}