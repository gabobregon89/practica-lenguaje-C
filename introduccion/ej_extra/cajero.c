#include <stdio.h>

int main() {

    float monto, saldo = 0;
    int opcion;
    int pin = 0, accedido = 0, intentos = 0, contrasena = 1234;

    printf("-----Bienvenido al cajero automatico------\n");

    while (accedido == 0) {

        printf("Ingrese PIN: ");
        scanf("%d", &pin);

        if (pin != contrasena) {
            printf("Contrasenia incorrecta\n");
            intentos += 1;
        } else {
            accedido = 1;
            printf("Contrasenia valida\n");
        }

        if (intentos >= 3){
            printf("Cantidad intentos excedidos\n");
            return 1;
        }
    }

    while (accedido == 1) {
        printf("----------Menu--------\n");
        printf("1 - Consultar saldo   \n");
        printf("2 - Depositar dinero  \n");
        printf("3 - Extraer dinero    \n");
        printf("4 - Cambiar PIN       \n");
        printf("5 - Salir             \n");

        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Su saldo es de: $%.2f\n", saldo);
                break;
            case 2:
                printf("Ingresar el monto a depositar: ");
                scanf("%f", &monto);

                if (monto > 0) {
                    saldo = saldo + monto;
                    printf("Tu nuevo saldo es de: $%.2f\n", saldo);
                } else {
                    printf("Monto invalido.\n");
                }
                break;

            case 3:
                printf("Ingresar el monto a retirar: ");
                scanf("%f", &monto);

                if (monto > 0) {

                    if (monto <= saldo){
                        saldo = saldo - monto;
                        printf("Tu nuevo saldo es de $%.2f\n", saldo);
                    } else{
                        printf("Fondos insuficientes.\n");
                    }
                } else{
                    printf("Monto invalido.\n");
                }
                break;

            case 4:
                printf("Ingresar PIN actual: ");
                scanf("%d", &pin);

                if (pin != contrasena) {
                    printf("Contrasenia incorrecta.\n");
                    break;
                }

                if (pin == contrasena){
                    printf("Ingrese su nueva contrasenia: ");
                    scanf("%d", &pin);

                    if (pin <= 0 || pin > 9999) {
                        printf("Contrasenia invalida, no debe superar los 4 digitos.\n");
                    } else {
                        contrasena = pin;
                        printf("Tu nueva contrasenia es: %d\n", contrasena);
                    }
                }
                break;

            default:
                printf("Saliendo del sistema...\n");
                accedido = 0;
                break;
        }
    }

    printf("Gracias por usar nuestros servicios.\n");

    return 0;
}
