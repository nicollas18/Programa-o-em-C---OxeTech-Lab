#include <stdio.h>

int main() {
    int numero = 10;

    if (numero != 0) {
        printf("O número não é zero.\n");
        if (numero > 0) {
            printf("O número é positivo.\n");
        } else {
            printf("O número é negativo.\n");
        }
    } else {
        printf("O número é zero.\n");
    }

    return 0;
}