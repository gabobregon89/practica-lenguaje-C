#include <stdio.h>

int main() {

    /* 5.1 Suponga que la Provincia del Chaco impone a los pescadores un límite en los Kg. de pesca 
    que pueden recoger en un día, para preservar los recursos del río Paraná. Desarrolle un programa 
    al que primero se le dé ese límite y luego se le vayan dando los pesos de lo que se va pescando 
    y vaya mostrando el total de Kg. pescados hasta ese momento. Cuando supere el máximo se debe 
    informar por pantalla en cuanto está excedido y terminar. */

    float limite_kg, kg_pescado, total_kg = 0;

    printf("Ingresa el limite de kg de pesca: \n");
    scanf("%f", &limite_kg);

    while (total_kg <= limite_kg) {
        printf("Ingresa el peso del pescado (en kg): \n");
        scanf("%f", &kg_pescado);
        total_kg = total_kg + kg_pescado;
        printf("El total de Kg hasta el momento es de %.2f kg\n", total_kg);
    }

    printf("Te excediste del limite por %.2f kg\n", total_kg - limite_kg);

    return 0;
}