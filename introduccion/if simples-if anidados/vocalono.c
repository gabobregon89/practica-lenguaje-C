#include <stdio.h>
#include <ctype.h>

int main() {
    
    /* 2.2 Indicar si un carácter ingresado por teclado es una vocal. */
    char letra;
    
    printf("Ingresa una letra: ");
    scanf(" %c", &letra);

    // verifico si el dato ingresado es una letra
    if (!isalpha(letra)) {
        printf("Error: el caracter no es una letra\n");
        return 1;
    }

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        printf("La letra ingresada es una vocal\n");
    }
    else {
        printf("La letra ingresada no es una vocal\n");
    }
        
    return 0;
}