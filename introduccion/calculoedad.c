#include <stdio.h>
int main() {
	// 1.2	Calcular la edad de una persona de acuerdo al algoritmo elaborado en el TP1.	int edad, anioCump, mesCump, diaCump;	int anioAct, mesAct, diaAct;		printf("Ingrese los datos\n");		printf("Año de nacimiento: ");	scanf("%d", &anioCump);		printf("Mes de nacimiento: ");	scanf("%d", &mesCump);		printf("Dia de nacimiento: ");	scanf("%d", &diaCump);		printf("Año actual: ");	scanf("%d", &anioAct);		printf("Mes actual: ");	scanf("%d", &mesAct);		printf("Dia actual: ");	scanf("%d", &diaAct);	
	// calculo de la edad	edad = anioAct - anioCump;	
	// verificacion si ya cumplio o no segun la fecha en curso	if (mesAct < mesCump || (mesAct == mesCump && diaAct < diaCump)) {		edad = edad - 1;	}		printf("La edad es: %d\n", edad);		return 0;}

