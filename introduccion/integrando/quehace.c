#include <stdio.h>

int main() {

    //7.2

    int a = 0;
    int b = 0;

    while(a <= 10) {
        b = 10 - a;

        if(b % 3 == 0) {
            printf("%d\n", b);
        }

        a = a + 1;
    }

    return 0;
}