#include <stdio.h>

int main() {
    
    /* 2.3 Hacer un programa que lea tres números enteros positivos distintos e imprima el mayor valor de los tres. */
    int num1, num2, num3;
    
    printf("Ingresa el primer numero: ");
    // scanf("%d", &num1);
    if (scanf("%d", &num1) != 1 || num1 <= 0) {
        printf("Error: debe ser un entero positivo\n");
        return 1;
    }
    
    printf("Ingresa el segundo numero: ");
    // scanf("%d", &num2);
    if (scanf("%d", &num2) != 1 || num2 <= 0) {
        printf("Error: debe ser un entero positivo\n");
        return 1;
    }
    
    printf("Ingresa el tercer numero: ");
    // scanf("%d", &num3);
    if (scanf("%d", &num3) != 1 || num3 <= 0) {
        printf("Error: debe ser un entero positivo\n");
        return 1;
    }

    // validar que sean distintos
    if (num1 == num2 || num1 == num3 || num2 == num3) {
        printf("Error: los numeros deben ser distintos\n");
        return 1;
    }
    
    // logica de numero mayor
    if (num1 >= num2 && num1 >= num3) {
        printf("El mayor de los tres numeros es: %d\n", num1);
    }
    else if (num2 >= num1 && num2 >= num3) {
        printf("El mayor de los tres numeros es: %d\n", num2);
    }
    else {
        printf("El mayor de los tres numeros es: %d\n", num3);
    }
        
    return 0;
}