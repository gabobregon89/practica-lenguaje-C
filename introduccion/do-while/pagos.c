#include <stdio.h>

int main() {

    float pago, total = 0;

    printf("Ingrese el primer pago: ");
    scanf("%f", &pago);

    do {

        printf("Ingrese el siguiente pago, 0 para terminar: ");
        scanf("%f", &pago);

        total = total + pago;

    } while (pago != 0);

    printf("El total de pagos del mes es: %.2f ", total+100);

    return 0;
}