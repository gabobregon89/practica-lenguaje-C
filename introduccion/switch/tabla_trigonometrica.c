#include <stdio.h>
#include <math.h>

int main() {

	// 3.4
	printf("-----------------------------------------------\n");
	printf("| Prueba |        Entradas        |   Salida  |\n");
	printf("----------------------------------------------|\n");
	printf("|   #    |  opcion  |   angulo    |   resul   |\n");
	printf("-----------------------------------------------\n");
	
	double angulo_grados, angulo_radianes, resultado;
	int opcion;

	for (int i=1; i<9; i++) {

		printf("Ingrese el valor de un angulo expresado en grados: \n");
		if (scanf("%lf", &angulo_grados) != 1) {
			printf("Error: Entrada invalida.\n");
			return 1;
		}
		
		if (angulo_grados < 0 || angulo_grados > 360) {
			printf("Error: El angulo no puede ser menor a cero ni superar 360.\n");
			return 1;
		}
	
		// conversión a radianes
		angulo_radianes = angulo_grados * M_PI / 180.0;
	
		printf("Ingresa la opcion correspondiente a la funcion deseada:\n");
		scanf("%d", &opcion);
	
		switch (opcion) {
		case 1:
			resultado = sin(angulo_radianes);
			break;
		case 2:
			resultado = cos(angulo_radianes);
			break;
		case 3:
			if (angulo_grados == 90) {
				printf("No es posible obtener este resultado.");
				printf("Ingresa otro valor para el angulo.");
				if (scanf("%lf", &angulo_grados) != 1) {
					printf("Error: Entrada invalida.\n");
					return 1;
				}
				resultado = tan(angulo_grados * M_PI / 180.0);
			}
			resultado = tan(angulo_radianes);
			break;
		default:
			printf("Error: Opcion invalida.\n");
			break;
		}
	
		printf("|   %d    |    %d     |   %.4f   |  %.4f   |\n", i, opcion, angulo_grados, resultado);
		printf("-----------------------------------------------\n");

	}

	return 0;
}
