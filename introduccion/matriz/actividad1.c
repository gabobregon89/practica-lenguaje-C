#include <stdio.h>
#define MAX 10

// declaramos procedimientos
void mostrar(int a[]);
void inverso(int a[]);
// declaramos funciones
int primos(int a[]);
int primos2(int num);
int adivinar(int a[], int num);

int main() {

    // funcion: es un subprogrma que ejecuta un bloque de codigo y retorna un valor
    int lista[MAX], pri, numero, veces;

    for (int j = 0; j < MAX; j++) {
        printf("Ingresa un valor: ");
        scanf("%d", &lista[j]);
    }
    
    mostrar(lista);
    pri = primos(lista);
    printf("La cantidad de numeros primos es: %d\n", pri);
    inverso(lista);

    // se pide un numero para saber si existe en el arreglo pero tambien se lo podria pedir en la funcion que hace la busqueda
    printf("Ingresa un numero para averiguar si existe en el arreglo o no: ");
    scanf("%d", &numero);
    veces = adivinar(lista, numero);
    
    if(veces > 0) {
        printf("El numero ingresado se repite %d veces.\n", veces);
    } else {
        printf("El numero ingresado NO existe en la lista.\n");
    }

    return 0;
}

// funcion que dada una lista, devuelve la cantidad de numeros primos que existen
int primos(int a[]) {
    int cantidad, primos = 0;
    for(int i = 0; i < MAX; i++) {
        cantidad = 0;
        for (int j = 1; j <= a[i]; j++) {
            if(a[i] % j == 0) {
                cantidad++;
            }
        }
        if(cantidad == 2) {
            primos++;
        } 
    }
    return primos;
}

int primos2(int num) {
    int cantidad, primo = 0;
    for (int j = 1; j <= num; j++) {
        if(num % j == 0) {
            cantidad++;
        }
    }
    if(cantidad == 2) {
        primo = 1;
    }
    
    return primo;
}

// funcion que dada una lista y un numero por parametros, devuelve la cantidad de veces que se repite o no el numero que se paso por parametro
int adivinar(int a[], int num) {
    // aca tambien se podria pedir el numero a buscar, cambia la cantidad de parametros que recibe 
    // la funcion porque ya no hace falta recibir el numero

    int cant = 0;
    for(int i = 0; i < MAX; i++) {
        if(num == a[i]) {
            cant++;
        } 
    }
    return cant;
}

// procedimiento que imprime por pantalla los elementos de una lista que recibe por parametro
void mostrar(int a[]) {
    int p;
    for(int k = 0; k < MAX; k++) {
        printf("Indice:%d Valor:%d\n", k+1, a[k]);
        p = primos2(a[k]);
        if(p == 1) {
            printf("El numero ingresado es primo.\n");
        } else {
            printf("El numero ingresado NO es primo.\n");
        }
    }
}

// procedimiento que imprime por pantalla los elementos de una lista que recibe por parametro, de manera inversa
void inverso(int a[]) {
    for(int k = MAX-1; k >= 0; k--) {
        printf("Indice:%d Valor:%d\n", k, a[k]);
    }
}