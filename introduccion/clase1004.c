#include <stdio.h>

int main(int argc, char *argv[]) {
	
	// ARRAY
	
	// si o si declarar la cantidad de elementos que tiene que aceptar el array
	// se lo indico entre corchetes sino debo asignarle si o si el conjunto de datos
	// las estructuras en C son estaticas
	
	char palabra[4] = "auto";
	int numeros[] = {1, 2, 3};
	
	// ejemplo de matriz
	int matriz[2][3] = {
		{1, 2, 3}, 
		{7, 8, 9}
	};
	
	
	int primero[3] = {1, 2, 3};
	int segundo[3] = {4, 5, 6};
	int arrayFinal[4];
	
	int resultado;
	int sumatoria = 0;
	for (int i = 0; i < 4; i++)
	{
		if (i < 3)
		{
			resultado = primero[i] * segundo[i];
			sumatoria += resultado;
			arrayFinal[i] = resultado;
		}
		else
		{
			arrayFinal[i] = sumatoria;
		}
		
		// printf("%d x %d = %d\n", primero[i], segundo[i], resultado);
		
		
	}
	
	printf("%d, %d, %d, %d\n", arrayFinal[0], arrayFinal[1], arrayFinal[2], arrayFinal[3]);
	
	return 0;
}

