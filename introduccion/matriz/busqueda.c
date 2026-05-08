#include <stdio.h>

int busqueda(int a[], int b);

int main() {

    /* arreglo desordenado sin elementos repetidos
    arreglo desordenado con elementos repetidos
    arreglo ordenado sin elementos repetidos: BUSQUEDA BINARIA
    arreglo ordenado con elementos repetidos */
    
    int lista[] = {1,2,3,3,5,6,77,8};

    int b, i, enc = 0, z;

    printf("Ingrese elemento a buscar\n");
    scanf("%d", &b);
    i = 0;
    
    z = busqueda(lista, b);
    // printf("--> %d\n", z);

    if(z != -1) {
        while(b == lista[i]) {
            enc += 1;
            i += 1;
        }
    } else {
        printf("Elemento no encontrado\n");
    }
    
    printf("%d encontrado %d veces\n", b, enc);

    return 0;
}

int busqueda(int lista[], int num) {
    int pos, inicio, final, medio; 

    inicio = 0;
	final = 8 - 1; /*n-1, n es la cantidad de elementos del arreglo*/
	
	medio = 0;
	while ((inicio <= final) && num!=lista[medio]) {
		medio = (inicio + final) / 2;
		if (num > lista[medio]) {
			inicio = medio + 1;
        } else {
			final = medio - 1;
        }
	}
	
	if (num == lista[medio]) {
        pos = medio;
		// printf(" %d encontrado en la posicion %d\n",num,medio);
        final=9;
		
		while(medio < final) {
			lista[medio]=lista[medio+1];
	        medio++;	
		}	   
	} else {
        pos = -1;
		// printf(" %d no esta en el arreglo\n",num);
    }

    return pos;
}