#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main() {
    // 7.3

    int min = 1, max = 10;
    int azar, u;
    
    // eleccion al azar del numero por adivinar (entre 1 y 10)
    // Inicializar semilla para generar números distintos cada vez
    srand(time(NULL)); 

    // Generar número entre 1 y 10
    azar = (rand() % (max - min + 1)) + min;

    printf("Bienvenido al juego donde tenes que adivinar que numero eligio la maquina.\n");
    printf("Ingresa un numero entre el 1 y 10: ");
    if(scanf("%d", &u) != 1) {
        printf("Error: ingresaste una opcion invalida.\n");
        return 1;
    }

    if(u < 1 || u > 10) {
        printf("El numero ingresado no es valido, tiene que estar entre el 1 y 10: ");
        if(scanf("%d", &u) != 1) {
            printf("Error: ingresaste una opcion invalida.\n");
            return 1;
        }
    }

    while(u != azar) {
        if(u > azar) {
            printf("Ingresaste un numero mas grande, intentalo de nuevo.\n");
        } else {
            printf("Ingresaste un numero mas chico, intentalo de nuevo.\n");
        }

        if(scanf("%d", &u) != 1) {
            printf("Error: ingresaste una opcion invalida.\n");
            return 1;
        }
    }

    printf("Acertaste el numero misterioso es %d\n", azar);

    return 0;
}