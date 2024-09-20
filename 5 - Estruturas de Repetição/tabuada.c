#include <stdio.h>

int main() {

    // i < n;

    int numero = 5, n;
    
    for (int i = 1; i <= 10; i++) {
        int resultado = i * numero;
        printf("%d x %-2d = %2d\n", numero, i, resultado);
        // sem resultado
    }
}