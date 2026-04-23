#include <stdio.h>

int main() {

    int legajo, parc_aprobados, recu_aprobados, aprobados = 0, desaprobados = 0, promocionados = 0;
    float nota, recuperatorio;

    printf("---------------------------------------------\n");
    printf("| Bienvenido al sistema de ingreso de notas |\n");
    printf("---------------------------------------------\n");
    printf("Ingresa el numero de legajo, si quieres finalizar la carga ingresa un valor negativo: ");
    
    // se pide el numero de legajo
    if(scanf("%d", &legajo) != 1) {
        printf("Error: el numero de legajo deben ser solo numeros.\n");
        return 1;
    }

    while(legajo > 0) {

        // se pide ingresar las notas de los 3 parciales
        parc_aprobados = 0;
        recu_aprobados = 0;
        for(int i = 0; i < 3; i++) {
            printf("Ingresa la nota del parcial %d: ", i+1);
        
            if(scanf("%f", &nota) != 1 || nota < 0 || nota > 10) {
                printf("Error: la nota no puede ser menor a cero ni tampoco mayor a 10.\n");
                return 1;
            }

            // registro cuantos parciales aprobo
            if(nota >= 6) {
                parc_aprobados ++;
            }

        }

        // si fuese necesario se pide ingresar la nota de los recuperatorios
        if(parc_aprobados < 3 && parc_aprobados > 0) {
            for(int i = 0; i < 2; i++) {
                printf("Ingresa la nota del recuperatorio %d, el cero si no uso esa instancia de recuperatorio: ", i+1);
            
                if(scanf("%f", &recuperatorio) != 1 || recuperatorio < 0 || recuperatorio > 10) {
                    printf("Error: la nota no puede ser menor a cero ni tampoco mayor a cero.\n");
                    return 1;
                }

                // registro cuantos recuperatorios aprobo
                if(recuperatorio >= 6) {
                    recu_aprobados ++;
                }

            }
        }

        // se valida la condicion de aprobacion, promocion o si reprobo
        if(parc_aprobados == 3 || (parc_aprobados == 2 && recu_aprobados == 1)) {
            promocionados ++;
            printf("El alumno con legajo %d promociono (P)\n", legajo);
        } else if (parc_aprobados == 0 || (parc_aprobados == 1 && recu_aprobados == 0)) {
            desaprobados ++;
            printf("El alumno con legajo %d reprobo (R)\n", legajo);
        } else {
            aprobados ++;
            printf("El alumno con legajo %d aprobo (A)\n", legajo);
        }

        // se vuelve a pedir un numero de legajo
        printf("Ingresa un nuevo numero de legajo, si quieres finalizar la carga ingresa un valor negativo: ");
        if(scanf("%d", &legajo) != 1) {
            printf("Error: el numero de legajo deben ser solo numeros.\n");
            return 1;
        }

    }

    // se imprime el reporte final
    printf("Reporte final:\n");
    printf("La cantidad de alumnos promocionados es de %d.\n", promocionados);
    printf("La cantidad de alumnos aprobados es de %d.\n", aprobados);
    printf("La cantidad de alumnos desaprobados es de %d.\n", desaprobados);

    return 0;
}