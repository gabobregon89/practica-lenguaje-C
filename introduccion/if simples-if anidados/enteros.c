#include <stdio.h>

int main() {

    /* Escribe un programa en C que:
    Lea dos números enteros ingresados por el usuario (llámalos a y b).
    Utilizando operadores matemáticos, calcule y muestre:
    La suma (a + b)
    La resta (a - b)
    La multiplicación (a * b)
    La división entera (a / b, considerando que b no es cero)
    El resto de la división entera (a % b)
    Utilizando operadores relacionales, compare a y b y muestre el resultado (1 si es verdadero, 0 si es falso) de:
    a == b
    a != b
    a > b
    a < b
    a >= b
    a <= b
    Utilizando operadores lógicos, calcule y muestre el resultado (1 o 0) de:
    (a > b) && (b != 0)
    (a > b) || (b != 0)
    Demuestre el uso de operadores de asignación combinados:
    A la variable a asígnele el valor original de a más b usando += y luego muestre el nuevo valor de a.
    A la variable b asígnele el valor original de b multiplicado por 2 usando *= y luego muestre el nuevo valor de b.
    Restricción: No uses estructuras de decisión (como if). Solo utiliza expresiones con operadores y muestra los resultados con printf. 
    Recuerda incluir #include <stdio.h> y usar scanf para la entrada. */

    int a, b, nueva_a, nueva_b;

    printf("Ingresa el primer numero entero: ");
    scanf("%d", &a);
    printf("Ingresa el segundo numero entero: ");
    scanf("%d", &b);

    printf("Operaciones matematicas:\n");
    printf("La suma (a + b) es  %d\n", a+b);
    printf("La resta (a - b) es %d \n", a-b);
    printf("La multiplicacion (a * b) es %d\n", a*b);
    printf("La division entera (a / b) es %d\n", a/b);
    printf("El resto de la division entera (a % b) es %d\n", a%b);
    
    printf("Operaciones relacionales:\n");
    printf("(a == b) es %d\n", a==b);
    printf("(a != b) es %d\n", a!=b);
    printf("(a > b) es %d\n", a>b);
    printf("(a < b) es %d\n", a<b);
    printf("(a > b) es %d\n", a>=b);
    printf("(a < b) es %d\n", a<=b);
    
    printf("Operaciones logicas:\n");
    printf("(a > b) && (b != 0) es %d\n", (a > b) && (b != 0));
    printf("(a > b) || (b != 0) es %d\n", (a > b) || (b != 0));
    
    printf("Operaciones de asignacion:\n");
    nueva_a = a += b;
    printf("El nuevo valor de a es %d\n", nueva_a);
    nueva_b = b *= 2;
    printf("El nuevo valor de b es %d\n", nueva_b);


    return 0;
}