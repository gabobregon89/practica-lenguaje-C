#include <stdio.h>

int main()
{

	/* Busqueda Binaria (o Dicotomica): es un algoritmo de busqueda que se utiliza para encontrar la posicion de un elemento en un arreglo ORDENADO..
    El algoritmo divide el arreglo en dos partes iguales y compara el elemento buscado con el elemento del medio.
    Si el elemento buscado es igual al elemento del medio, se ha encontrado el elemento.
    Si el elemento buscado es menor que el elemento del medio, se busca en la mitad inferior del arreglo.
    Si el elemento buscado es mayor que el elemento del medio, se busca en la mitad superior del arreglo.
    Este proceso se repite hasta que se encuentra el elemento o se determina que no esta presente en el arreglo. */


	int lista[9]= {0, 4, 5 ,7, 32, 40, 77, 100, 123};
	int i,inicio,final,medio,num; 
	
	for(i = 0; i < 9; i++)
     		printf("Digito %d:%d\n",i,lista[i]);
	/*busqueda binaria*/
	printf("Ingresar el numero a buscar:\n");
	scanf("%d",&num);
	inicio = 0;
	final = 9 - 1; /*n-1, n es la cantidad de elementos del arreglo*/
	
	medio=0;
	while ((inicio <= final) && num!=lista[medio])
	{
		medio = (inicio + final) / 2;
		if (num > lista[medio])
			inicio = medio + 1;
		else
			final = medio - 1;
	}
	
	if (num == lista[medio])
	   {
		printf(" %d encontrado en la posicion %d\n",num,medio);
        final=9;
		
		while(medio < final)
		{
			lista[medio]=lista[medio+1];
	        medio++;	
		}
		
		   
	   }
	
	else
		printf(" %d no esta en el arreglo\n",num);



	
return 0;
}