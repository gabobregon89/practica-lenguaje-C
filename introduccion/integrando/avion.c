#include <stdio.h>
#define PRECIO_KM 2500
#define DESCUENTO 0.3

int main() {

    /* Determinar el precio del billete de ida y vuelta del avion, conociendo la distancia a recorrer 
    y sabiendo que si el numero de dias de estancia en el lugar es superior a 7 y la distancia superior
    a 800km el billete tiene un reduccion del 30%. El precio por km es de $2500. */

    float billete = 0, distancia = 0;
    int dias;

    printf("Ingresa la distancia del recorrido: ");
    scanf("%f", &distancia);
    
    printf("Ingresa la cantidad de dias de hospedaje: ");
    scanf("%d", &dias);

    billete = PRECIO_KM * distancia;

    if(distancia > 800 && dias > 7) {
        billete = billete - (billete * DESCUENTO);
    }

    printf("El precio del billete es de %.2f\n", billete);
}