#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/* 2.1 Los alumnos de un curso se han dividido en dos grupos A y B de acuerdo al sexo y el nombre. 
	El grupo A esta formado por las mujeres con un nombre anterior a la M y los hombres con un nombre 
	posterior a la N y el grupo B por el resto. Escribir un programa que pregunte al usuario su nombre y sexo, 
	y muestre por pantalla el grupo que le corresponde.*/
	
	char nombre[50];
	char sexo;
	
	printf("Ingresa tu nombre en mayuscula: ");
	scanf("%s", &nombre);
	
	// printf("Ingresa tu sexo (M/F): ");
	// scanf(" %c", &sexo);

	// Validacion de opcion (M/F)
	printf("Ingresa tu sexo (M/F): ");
	if (scanf(" %c", &sexo) != 1 || (sexo != 'M' && sexo != 'F')) {
		printf("Error: sexo invalido. Debe ser M o F\n");
		return 1;
	}
	
	
	if (sexo == 'F') {
		if (nombre[0] < 'M') {
			printf("Perteneces al grupo A\n");
		}
		else {
			printf("Perteneces al grupo B\n");
		}
	}
	else {
		if (nombre[0] > 'N') {
			printf("Perteneces al grupo A\n");
		}
		else {
			printf("Perteneces al grupo B\n");
		}
	}
		
	return 0;
}
