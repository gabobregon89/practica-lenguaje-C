#include <stdio.h>

int main(int argc, char *argv[]) {
	// Alumnos: Rodrigo Dojas, Mateo Sanchez, Leandro Aquino, Pablo Fernandez
	// Antonella Mierez, Santiago Yurca, Danesa Benitez, 
	// Gerardo Gamarra, Gabriel Obregon
	
	// 1.1	Indicar si un número es par o impar.
	int numero;
	
	printf("Ingresa un numero entero: ");
	scanf("%d", &numero);
	
	if (numero % 2 == 0) printf("El numero ingresado es par");
	else printf("El numero ingresado es impar");
	
	return 0;
}

