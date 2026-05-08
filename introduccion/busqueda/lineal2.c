#include <stdio.h>

int main() {

    // Busqueda en un arreglo sin elementos repetidos


    int lista[10];
    int b, enc, a;

    for (int i = 0; i < 10; i++) {
        printf("Ingresa un valor: ");
        scanf("%d", &lista[i]);
    }

    for(int k = 0; k < 10; k++) {
        printf("%d\n",lista[k]);
        if(lista[k] % 2 == 0) {
            printf("es par\n");
        }
    }

    printf("Ingrese un elemento a buscar: ");
    scanf("%d", &b);

    a = 0;
    // recorre todo el arreglo aunque haya encontrado antes el alemento
    while(a < 10) {
        printf("paso %d vez\n", a+1);
        if(b == lista[a]) {
            enc += 1;
        }
        a++;
    }

    if(enc == 0) {
        printf("Numero no encontrado\n");
    } else {
        printf("Numero encontrado\n");
    }


    return 0;
}