#include <stdio.h>

int main(int argc, char *argv[]) {
	
	printf("/************************************************/\n");
	printf("/* Obejtivo: Leer un carácter, un entero,       */\n");
	printf("/*           un real y un real en doble         */\n");
	printf("/*           precisión desde la                 */\n");
	printf("/*           Entrada Estandar y mostrarlos por  */\n");
	printf("/*           la Salida Estandar                 */\n");
	printf("/* Entrada:  Un carácter, un entero, un real    */\n");
	printf("/*           un real doble.                     */\n");
	printf("/* Salida:   Mostrarlos por pantalla            */\n");
	printf("/************************************************/\n");
	
	char c;
	int numero;
	float num_real;
	double num_doble;
	
	printf("Ingresa un carácter:\n");
	scanf(" %c", &c);
	printf("Ingresa un número entero:\n");
	scanf("%d", &numero);
	printf("Ingresa un número real:\n");
	scanf("%f", &num_real);
	printf("Ingresa un número para calculo cientifico de mayor precision:\n");
	scanf("%lf", &num_doble);
	
	printf("Los datos ingresados son: caracter -> %c, entero -> %d,\n", c, numero);
	printf("real -> %.2f, real doble precision -> %lf\n", num_real, num_doble);
	
	return 0;
}

