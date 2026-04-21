#include <stdio.h>
#include <math.h>

int main() {

    // se agrega la inicializacion de las 4 variables y se define un valor para N
    int N = 20;
    int x, b, s, i;

    b = 2;
    s = 0;
    i = 0;

    while(N > 0) {
        x = N % b;
        N = N / b;
        s = s + x * pow(10, i);
        i ++;
    }
    
    // se imprime el valor final de las variables, la importante es s que me indica el valor binario de N
    printf("x: %d, N: %d, s: %d, i: %d\n", x, N, s, i);
    
    return 0;
}