#include <stdio.h>
#include <math.h>

int main() {

	// 3.3
	printf("* CALCULADORA FUNCIONES TRIGONOMETRICAS BASICAS *\n");
	printf("*************************************************\n");
	printf(" Lista de funciones trigonometricas             *\n");
	printf("    1- Seno                                     *\n");
	printf("    2- Coseno                                   *\n");
	printf("    3- Tangente                                 *\n");
	printf("*************************************************\n");

	double angulo_grados, angulo_radianes;
	int opcion;

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
		printf("Seno: %.4f\n", sin(angulo_radianes));
		break;
	case 2:
		printf("Coseno: %.4f\n", cos(angulo_radianes));
		break;
	case 3:
		printf("Tangente: %.4f\n", tan(angulo_radianes));
		break;
	default:
		printf("Error: Opcion invalida.\n");
		break;
	}
	return 0;
}
