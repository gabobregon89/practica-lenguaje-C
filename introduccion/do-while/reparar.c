#include <stdio.h>

int main() {

    /* 6.1 Escribe un programa de ayuda para reparar objetos. El programa primero debe preguntar si el objeto se mueve. 
    Después debe preguntar si el objeto debería moverse. A continuación, el programa debe imprimir un mensaje en pantalla 
    dependiendo de las opciones introducidas:
        Si el objeto se mueve y debería moverse -> No hace falta reparar.
        Si el objeto se mueve y no debería moverse -> Utilizar cinta americana.
        Si el objeto no se mueve y no debería moverse -> No hace falta reparar.
        Si el objeto no se mueve y debería moverse -> Utilizar aceite 3 en 1.

    El usuario puede repetir esta operación las veces que considere necesario. El programa termina cuando se 
    introduce el número 0, debe aparecer un mensaje por pantalla indicando que se termino de ejecutar el programa. */

    int se_mueve, deberia_moverse;
    printf("Vamos a reparar tu objeto, responde lo siguiente segun las opciones posibles.\n");
    printf("El objeto a reparar se mueve? 1-SI 2-NO 0-FINALIZAR\n");
    if (scanf("%d", &se_mueve) != 1) {
        printf("Error: no ingresaste un numero valido\n");
        return 1;
    }

    printf("El objeto deberia moverse? 1-SI 2-NO 0-FINALIZAR\n");
    if (scanf("%d", &deberia_moverse) != 1) {
        printf("Error: no ingresaste un numero valido\n");
        return 1;
    }

    do {
        if (se_mueve == 1 && deberia_moverse == 1) {
            printf("No hace falta reparar.\n");
        } else if (se_mueve == 1 && deberia_moverse == 2) {
            printf("Utilizar cinta americana.\n");
        } else if (se_mueve == 2 && deberia_moverse == 2) {
            printf("No hace falta reparar.\n");
        } else {
            printf("Utilizar aceite 3 en 1.\n");
        }

        printf("El objeto a reparar se mueve? 1-SI 2-NO 0-FINALIZAR\n");
        if (scanf("%d", &se_mueve) != 1) {
            printf("Error: no ingresaste un numero valido\n");
            return 1;
        }

        printf("El objeto deberia moverse? 1-SI 2-NO 0-FINALIZAR\n");
        if (scanf("%d", &deberia_moverse) != 1) {
            printf("Error: no ingresaste un numero valido\n");
            return 1;
        }
        
    } while (se_mueve != 0 && deberia_moverse != 0);

    printf("Se termino de ejecutar el programa.\n");

    return 0;
}