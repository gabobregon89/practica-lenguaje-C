#include <stdio.h>

int main() {
	// 1.2	Calcular la edad de una persona de acuerdo al algoritmo elaborado en el TP1.
	int edad, anioCump, mesCump, diaCump;
	int anioAct, mesAct, diaAct;
	
	printf("Ingrese los datos\n");
	
	printf("Anio de nacimiento: ");
	scanf("%d", &anioCump);
	
	printf("Mes de nacimiento: ");
	scanf("%d", &mesCump);
	
	printf("Dia de nacimiento: ");
	scanf("%d", &diaCump);
	
	printf("Anio actual: ");
	scanf("%d", &anioAct);
	
	printf("Mes actual: ");
	scanf("%d", &mesAct);
	
	printf("Dia actual: ");
	scanf("%d", &diaAct);
	
	// Validacion de la fecha de nacimiento
	if (anioCump > anioAct || (anioCump == anioAct && mesCump > mesAct) || (anioCump == anioAct && mesCump == mesAct && diaCump > diaAct)) {
		printf("Error: la fecha de nacimiento no puede ser en el futuro\n");
		return 1;
	}
	
	// calculo de la edad
	edad = anioAct - anioCump;
	
	// verificacion si ya cumplio o no segun la fecha en curso
	if (mesAct < mesCump || (mesAct == mesCump && diaAct < diaCump)) {
		edad = edad - 1;
	}
	
	printf("La edad es: %d\n", edad);
	
	return 0;
}

