#include <stdio.h>

int main() {
    int numero = 10;

    if (numero > 0) {
        printf("O número é positivo.\n");
        if (numero % 2 == 0) {
            printf("O número também é par.\n");
        }
    }

    return 0;
}