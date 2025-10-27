#include <stdio.h>

void reiniciar(int *a, int b) {
    *a = 0;
    b = 0;
}

int main() {
    int enteros[5] = {10, 20, 30, 40, 50};
    int i;
    int *px, *b;
    int algo = 900;
    
    // px --> la direccion de memoria de un entero
    // *px --> el valor del entero al que apunta px
    // &algo --> la direccion de memoria de la variable 'algo'
    // algo --> el valor en si de la variable

    px = enteros; // Asignar la dirección del primer elemento del arreglo al puntero
    // printf("%d", px);
    
    b = &enteros[2];
    // printf("%d", *b);

    // printf("%d", algo);
    
    // for(i = 0; i < 5; i++) {
    //     printf("Elemento %d: %d\n", i, enteros[i]);
    // }

    int x = 5;
    int y = 8;

    

    printf("%d\n", x);
    printf("%d\n", y);

    printf("Despues:\n");

    reiniciar(&x, y); // Solo me modifica el valor de x, porque le estoy pasando la direccion de memoria de x
                      // No sirve que le pase por referencia el valor de y, porque solo le paso una copia del valor de y
                      
    // reiniciar(&x);

    printf("%d\n", x);
    printf("%d\n", y);
    // printf("%d\n", &y);

}




