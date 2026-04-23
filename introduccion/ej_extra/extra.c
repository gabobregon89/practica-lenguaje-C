#include <stdio.h>

int main() {

    float val, aux, deprec;
    int n, anual = 0, eleccion;

    printf("Programa de Depreciacion Anual\n");
    printf("Para iniciar debes elegir una de las siguiente opciones.\n");
    printf("Lista de opciones:\n");
    printf("1-Metodo de Linea Recta.\n");
    printf("2-Metodo de Balance Doblemente Declinante.\n");
    printf("3-Metodo de la Suma de los Digitos de los años.\n");
    printf("4-Finalizas operaciones.\n");

    if (scanf("%d", &eleccion) != 1) {
        printf("Error: No ingresaste una opcion valida1.");
        return 1;
    }

    while (eleccion != 4) {

        if (eleccion != 1 && eleccion != 2 && eleccion != 3)
        {
            printf("Error: No ingresaste una opcion valida2.");
            return 1;
        }
        
        printf("Ingresa el valor en curso del objeto: ");
        if (scanf("%f", &val) < 0) {
            printf("Error: no podes ingresar un valor menor a $0.");
            return 1;
        }
        
        printf("Ingresa la cantidad de anios a depreciar el objeto: ");
        if (scanf("%d", &n) != 1 || n < 0) {
            printf("Error: Ingresaste un anio invalido.");
            return 1;
        }

        switch (eleccion) {
            case 1:
                deprec = val / n;
                for(int i=0; i < n; i++) {
                    printf("Anio: %d - Valor actualizado: %.2f - Depreciacion anual: %.2f\n", i+1, (val - deprec * (i+1)), deprec);
                }
                break;

            case 2:
                for(int i=0; i < n; i++) {
                    deprec = val * (2.0 / n);
                    val = val - deprec;
                    printf("Anio: %d - Valor actualizado: %.2f - Depreciacion anual: %.2f\n", i+1, val, deprec);
                }
                break;

            case 3:
                for(int i = 1; i <= n; i++) {
                    anual = anual + i;
                }
                
                aux = val;
                
                for(int i=10; i > 0; i--) {
                    deprec = aux * ((float)i / anual);
                    val = aux - deprec;
                    printf("Anio: %d - Valor actualizado: %.2f - Depreciacion anual: %.2f\n", i, val , deprec);
                }

                break;
            
            default:
                printf("aca2");
                break;
        }

        printf("Ingresa nuevamente alguna opcion de metodo sino el 4 para finalizar:\n");
        if (scanf("%d", &eleccion) != 1) {
            printf("Error: No ingresaste una opcion valida1.");
            return 1;
        }

    }

    printf("Programa finalizado.");


    return 0;
}