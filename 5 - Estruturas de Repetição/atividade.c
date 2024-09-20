#include <stdio.h>

int main() {

    while (1) {
        int numero;
        scanf("%d", &numero);

        if (numero == - 1) {
            break;
            
        } 

        if (numero % 2 == 0) {
            printf("O número %d é par.\n", numero);
        } else {
            printf("O número %d é impar.\n", numero);
        }
    }

    return 0;

}