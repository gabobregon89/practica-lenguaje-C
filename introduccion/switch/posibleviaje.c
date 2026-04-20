#include <stdio.h>

int main() {

    /* 3.1 Realizar un programa que muestre los posibles destinos de viaje en pantalla,
    y que, mediante una selección por menú, muestre en pantalla la cantidad que cuesta 
    el viaje a un destino introducido desde teclado. Después de esto el mismo programa 
    debe pedir el dinero disponible por el viajero y en función de él, le indique el 
    destino más lejano al que puede viajar. */

    int opcion;
    float destino1 = 40000, destino2 = 35000, destino3 = 40500, destino4 = 25000;
    float monto_disponible;

    printf("Empresa de viaje El Estudiante\n");
    printf("Destinos:\n");
    printf("1: Rcia.-Taco Pozo\n");
    printf("2: Rcia.-Villa Angela\n");
    printf("3: Rcia.-Castelli\n");
    printf("4: Rcia.-San Martin\n");
    printf("Seleccione el destino al que desea viajar.\n");
    if (scanf("%d", &opcion) != 1) {
        printf("Error: valor ingresado invalido.");
        return 1;
    }
    
    switch (opcion) {
        case 1:
            printf("El viaje Rcia.-Taco Pozo cuesta $40000.\n");
            break;
        case 2:
            printf("El viaje Rcia.-Villa Angela cuesta $35000.\n");
            break;
        case 3:
            printf("El viaje Rcia.-Castelli cuesta $40500.\n");
            break;
        case 4:
            printf("El viaje Rcia.-San Martin cuesta $25000.\n");
            break;
        default:
            printf("La opcion ingresada no corresponde a alguna del menu.");
            return 1;
    }

    printf("Ingresa el monto que dispones para viajar: \n");
    if (scanf("%f", &monto_disponible) < 0) {
        printf("Error: no podes ingresar un monto menor a $0.");
        return 1;
    }

    if (monto_disponible > destino3) {
        printf("El destino mas lejano para viajar segun tu monto es Castelli.\n");
    } else if (monto_disponible > destino1) {
        printf("El destino mas lejano para viajar segun tu monto es Tacopozo.\n");
    } else if (monto_disponible > destino2) {
        printf("El destino mas lejano para viajar segun tu monto es Villa Angela.\n");
    } else if (monto_disponible > destino4) {
        printf("El destino mas lejano para viajar segun tu monto es San Martin.\n");
    } else {
        printf("El montro ingresado no te alzanca para realizar ningun viaje.\n");
    }
    
    return 0;
}