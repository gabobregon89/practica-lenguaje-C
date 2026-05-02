#include <stdio.h>
#define MAX 5

// declaramos el procedimiento que queremos usar
void mostrar(int a[]);

// declaramos la funcion que queremos usar
int pares(int a[]);

// 1º definimos las funciones
int main() {

    int vec[MAX], p;
    int i ;

    for(i = 0; i < MAX; i++) {
        printf("Ingresa un valor: ");
        scanf("%d", &vec[i]);
    }

    // llamamos al procedimiento
    mostrar(vec);
    
    // llamamos a la funcion
    p = pares(vec);
    printf("La cantidad de elemntos pares es: %d\n", p);

    return 0;
}

// definimos otra funcion
int pares(int a[]) {
    int cantidad = 0;
    for(int i = 0; i < MAX; i++) {
        if(a[i] % 2 == 0) {
            cantidad++;
        }
    }
    return cantidad;
}

//2º definimos el procedimiento
void mostrar(int a[]) {
    for(int k = 0; k < MAX; k++) {
        printf("Digito nuevo %d:%d\n", k+1, a[k]);
    }
}

