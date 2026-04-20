#include <stdio.h>

int main(int argc, char *argv[]) {
	// Alumnos: Rodrigo Dojas, Mateo Sanchez, Leandro Aquino, Pablo Fernandez
	// Antonella Mierez, Santiago Yurca, Danesa Benitez, 
	// Gerardo Gamarra, Gbriel Obregon
	
	// 1.3	Indicar si un n�mero que se ingresa por teclado es divisible por 3.
	printf("Ingresa un numero entero: ");
	int numero;
	// scanf("%d", &numero);

	// Valida si el dato ingresado por el usuario es un numero o no
	if (scanf("%d", &numero) != 1) {
        printf("Error: no ingresaste un numero valido\n");
        return 1;
    }
	
	if (numero % 3 == 0) printf("El numero ingresado es divisible por 3");
	else printf("El numero ingresado no es divisible por 3");
	
	return 0;
}

