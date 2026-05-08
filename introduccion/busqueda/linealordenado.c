#include <stdio.h>

int main() {

    // Busqueda en un arreglo sin elementos repetidos


    int lista[8] = {1,2,3,3,5,6,77,8};
    int b, enc, a;

    for(int k = 0; k < 8; k++) {
        printf("%d\n",lista[k]);
        if(lista[k] % 2 == 0) {
            printf("es par\n");
        }
    }

    printf("Ingrese un elemento a buscar: ");
    scanf("%d", &b);

    a = 0;
    enc = 0;
    while(a < 8) {
        printf("paso %d vez\n", a+1);
        while(b == lista[a]) {
            enc += 1;
            a++;
        }
        a++;
    }

    if(enc == 0) {
        printf("Numero no encontrado\n");
    } else {
        printf("Numero encontrado %d veces\n", enc);
    }


    return 0;
}