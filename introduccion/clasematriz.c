#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int matriz1[3][3];
	int matriz2[3][3];
	int matrizFinal[3][3];
	
	printf("Vamos a completar las 2 matrices en principio:\n");
	printf("Vamos por la primera\n");
	
	int numero = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) 
		{
			printf("Ingresa un valor: ");
			scanf("%d", &numero);
			matriz1[i][j] = numero;
		}
	}
	
	printf("Vamos por la segunda\n");
	int numero1 = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) 
		{
			printf("Ingresa un valor: ");
			scanf("%d", &numero1);
			matriz2[i][j] = numero1;
		}
	}
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) 
		{
			matrizFinal[i][j] = matriz1[i][j] + matriz2[i][j];
			printf("\t %d", matrizFinal[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}

