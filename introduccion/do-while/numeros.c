#include <stdio.h>

int main() {

    int n, num, c15 = 0, c50 = 0, c_rango = 0;

    printf("Ingresa un numero entero positivo para definir la cantidad de numeros a ingresar: \n");
    scanf("%d", &n);

    do {
        printf("Ingresa un numero entero cualquiera: \n");
        scanf("%d", &num);

        if (num < 15) {
            c15++;
        }
        if (num > 50) {
            c50++;
        }
        if (num >= 25 && num <= 45) {
            c_rango++;
        }

        n --;

    } while (n > 0);

    printf("Cantidad de numeros menores a 15: %d\n", c15);
    printf("Cantidad de numeros mayores a 50: %d\n", c50);
    printf("Cantidad de numeros entre 25 y 45: %d\n", c_rango);

    return 0;
}