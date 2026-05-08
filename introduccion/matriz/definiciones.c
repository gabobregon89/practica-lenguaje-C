#include <stdio.h>

int main() {

    /* Estructura de datos: es un coleccion de datos que se caracterizan por su organizacion y las operaciones que se definen en ella */
    /* Clasificacion:
    A - Estaticas (son aquellas que su tamaño no puede cambiar en tiempo de ejecucion)
    1.- Simples: boolean, char, int, float, double
    2. Compuestas: arreglos, conjuntos, strings, registros, archivos

    B - Dinamicas (su tamaño puede cambiar en tiempo de ejecucion)
    1.- Lineales: pilas, colas, listas
    2.- No lineales: arboles, grafos

    Arreglos: coleccion de variables del mismo tipo que se referencian utilizando un nombre en comun.

    ej:  int lista[5] = {1,2,3,4,,5}
    
    Para acceder a algun elemento se debe utilizar el indice.

    lista[2] = 3

    Caracteristicas: 
    -finito: deben tener definido el tamaño
    -ordenado: los elementos estan dispuestos en un orden especifico, hay un primero, luego un segundo y asi sucesivamente
    -homogeneo: todos los elementos son del mismo tipo

    La cantidad total de memoria de un arreglo depende de 2 cosas: el nº de elementos y el tamaño de arreglo (el tamaño de cada elemento)

    Operaciones: cargar, recorrer, buscar, acceder a un elemento, acceder a una posicion, insertar, eliminar, ordenar

    Carga del arreglo de 2 maneras: en tiempo de declaracion o en etapa de carga (ingresar los valores por teclado)

    ----------------------------------------------------------------------------------------------------
    | Procedimiento = subprograma que realiza una determina cantidad de acciones pero NO devuelve nada |
    | Funcion = subprograma que realiza una determina cantidad de acciones y devuelve un valor         |
    ----------------------------------------------------------------------------------------------------

    Busqueda: un algoritmo de busqueda es aquel que esta diseñado para localizar un elemento concreto dentro de un arreglo.

    Tipos de busqueda:
    -arreglo desordenado sin elementos repetidos (busqueda secuencial)
    -arreglo desordenado con elementos repetidos (busqueda secuencial)
    -arreglo ordenado sin elementos repetidos (busqueda binaria)
    -arreglo ordenado con elementos repetidos (busqueda binaria)


    Busqueda Binaria (o Dicotomica): es un algoritmo de busqueda que se utiliza para encontrar la posicion de un elemento en un arreglo ORDENADO..
    El algoritmo divide el arreglo en dos partes iguales y compara el elemento buscado con el elemento del medio.
    Si el elemento buscado es igual al elemento del medio, se ha encontrado el elemento.
    Si el elemento buscado es menor que el elemento del medio, se busca en la mitad inferior del arreglo.
    Si el elemento buscado es mayor que el elemento del medio, se busca en la mitad superior del arreglo.
    Este proceso se repite hasta que se encuentra el elemento o se determina que no esta presente en el arreglo. 


    */

    // se carga en tiempo de declaracion
    int lista[10] = {1,2,3};
    int lista2[9];

    for(int i = 0; i < 10; i++) {
        printf("%d ", lista[i]);   
    }

    // se carga arreglo por entrada de teclado
    for (int j = 0; j < 9; j++) {
        printf("Ingresa un valor: ");
        scanf("%d", &lista2[j]);
    }


    return 0;
}