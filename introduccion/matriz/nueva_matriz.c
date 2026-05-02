#include <stdio.h>

int main() {

    // arreglos: coleccion de datos del mismo tipo, conjunto finito ordenado de elementos homogeneos
    // ordenado porque estan enumerados
    // la carga puede ser de 2 formas: en tiempo de declaracion o en etapa de carga (ingresar los valores por teclado)

    // procedimiento = subprograma que realiza una determina cantidad de acciones pero no devuelve nada

    // arrreglo definido en etapa de declaracion
    int lista[9] = {0, 4, 78, 5, 32, 9, 77, 1, 23};
    int lista2[9];
    int i, j, k, cantidad= 0, suma = 0, suma2 = 0, cont = 0;

    // con este for recorremos el arreglo y mostramos sus valore
    for(i = 0; i < 9; i++) {
        if(lista[i] % 2 == 0) {
            cont++;
        }
        cantidad++;
        suma += lista[i];
        printf("Digito %d:%d\n", i, lista[i]);
    }

    // se carga arreglo por entrada de teclado
    for (j = 0; j < 9; j++) {
        printf("Ingresa un valor: ");
        scanf("%d", &lista2[j]);
    }

    for(k = 0; k < 9; k++) {
        suma2 += lista2[k];
        printf("Digito nuevo %d:%d\n", k, lista2[k]);
    }

    printf("Cantidad de numeros pares es: %d\n", cont);
    printf("El promedio es: %.2f\n", (float) suma/cantidad);

    // decision quien tiene mayor sumatoria
    if(suma > suma2) {
        printf("La lista que tiene sumatoria mayor es lista.\n");
    } else if (suma == suma2) {
        printf("Ambas listas tienen la misma sumatoria.\n");
    } else {
        printf("La lista que tiene sumatoria mayor es lista2.\n");
    }
    
    return 0;
}