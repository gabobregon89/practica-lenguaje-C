#include <stdio.h>

int main() {

	printf("/********************************************************/\n");
	printf("/* Obejtivo: Leer dos numeros enteros y luego realizar  */\n");
	printf("/* una de las operaciones aritmeticas, las              */\n");
	printf("/* cuales se presentaran en un menu de                  */\n");
	printf("/* seleccion.                                           */\n");
	printf("/* Entrada: Dos numeros enteros                         */\n");
	printf("/* Salida: La correspondiente operacion aritmetica.     */\n");
	printf("/********************************************************/\n");

	int a, b, opcion;

	// verifico que se ingresen 2 numeros
	printf("Ingrese dos numeros enteros separados por un espacio: ");
	if (scanf("%d %d", &a, &b) != 2) {
		printf("Entrada invalida.\n");
		return 1;
	}
	printf("Menu de operaciones:\n");
	printf("1) Suma\n");
	printf("2) Resta\n");
	printf("3) Multiplicacion\n");
	printf("4) Division\n");
	printf("Seleccione una opcion: ");
	scanf("%d", &opcion);

	switch (opcion) {
	case 1:
		printf("%d + %d = %d\n", a, b, a + b);
		break;
	case 2:
		printf("%d - %d = %d\n", a, b, a - b);
		break;
	case 3:
		printf("%d * %d = %d\n", a, b, a * b);
		break;
	case 4:
		if (b == 0) {
			printf("Error: division por cero.\n");
		} else {
			printf("%d / %d = %.2f\n", a, b, (double)a / b);
		}
		break;
	default:
		printf("Opcion invalida.\n");
		break;
	}
	return 0;
}
