#include <stdio.h>

int main() {

    /* 7.1 Una planta que fabrica perfiles de hierro posee un lote de n piezas.
    Confeccionar un programa que pida ingresar por teclado la cantidad de piezas a 
    procesar y luego ingrese la longitud de cada perfil; sabiendo que la pieza cuya 
    longitud esté comprendida en el rango de 1.20 y 1.30 son aptas. Imprimir por pantalla 
    la cantidad de piezas aptas que hay en el lote. */

    int lote, cantidad, salida = 1;
    float longitud;

    while(salida != 0) {

        cantidad = 0;
        printf("Ingresa la cantidad de perfiles (lote) a procesar:\n");
        if(scanf("%d", &lote) != 1 || lote < 0) {
            printf("Error: No ingresaste una opcion valida.");
            return 1;
        }

        for(int i = 0; i < lote; i++) {
            printf("Ingresa la longitud del perfil:\n");
            if(scanf("%f", &longitud) != 1 || longitud < 0) {
                printf("Error: No ingresaste una opcion valida.");
                return 1;
            }

            if(longitud >= 1.20 && longitud <= 1.30) {
                cantidad++;
            }
        
        }

        printf("La cantidad de perfiles aptos es de %d\n", cantidad);

        printf("Si queres continuar marca 1 sino marca 0:\n");
        if(scanf("%d", &salida) != 1) {
            printf("Error: No ingresaste una opcion valida.");
            return 1;
        }

    } 

    return 0;
}