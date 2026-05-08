#include <stdio.h>

int main() {

    /* 
    •Cargar un arreglo de tipo entero de 10 elementos en etapa de definición.
    Mostrar el contenido del arreglo usando la sentecia FOR. Los elementos se deben mostrar
    uno al lado del otro separados por dos guiones medio.
    • Al programa anterior agregar la suma de sus elementos. Mostrar el resultado.
    Calcular el promedio.
    • Mostrar los elementos que son mayores a la mitad del promedio.
    • Ingresar una posición por teclado e indicar que elemento se encuentra en dicha
    posición.
    • Ingresar un valor por teclado e indicar si es un elemento que pertenece al arreglo 
    */


    int numeros[10] = {1,2,3,4,5,6,7,8,9,10};
    int opcion, incognita, suma = 0, esta = 0;
    float promedio, mitad_promedio;

    for(int i = 0; i < 10; i++) {
        suma += numeros[i];
        printf("%d -- ", numeros[i]);
    }

    printf("\n");
    printf("La suma de los elementos es %d\n", suma);
    promedio = (float) suma/10;
    printf("El promedio de los elementos es %.2f\n", promedio);

    mitad_promedio = promedio / 2;
    printf("%.2f\n", mitad_promedio);

    for(int i = 0; i < 10; i++) {
        if(numeros[i] > mitad_promedio) {
            printf("%d -- ", numeros[i]);
        }
    }

    printf("\n");
    printf("Ingresa un numero del 1 al 10: ");
    if(scanf("%d", &opcion) != 1 || opcion < 0) {
        printf("ERROR: ingresaste un valor invalido");
        return 1;
    }

    if (opcion > 10) {
        printf("ERROR: ingresaste un numero que supera la cantidad de elementos del arreglo");
        return 1;
    }

    printf("El numero correspondiente para la posicion %d que elegiste es -> %d\n", opcion, numeros[opcion-1]);
    
    printf("\n");
    printf("Ingresa un numero cualquiera para saber si esta o no dentro del arreglo: ");
    if(scanf("%d", &incognita) != 1) {
        printf("ERROR: ingresaste un valor invalido");
        return 1;
    }

    for(int i = 0; i < 10; i++) {
        if(incognita == numeros[i]) {
            esta = 1;
        }
    }

    if(esta == 1) {
        printf("El numero que ingresaste esta en el arreglo\n");
    } else {
        printf("El numero que ingresaste NO esta en el arreglo\n");
    }

    return 0;
}