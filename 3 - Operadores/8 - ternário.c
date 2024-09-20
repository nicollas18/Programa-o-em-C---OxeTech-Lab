#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    
    int maior = (a > b) ? a : b;
    
    printf("O maior número é: %d\n", maior);
    return 0;
}