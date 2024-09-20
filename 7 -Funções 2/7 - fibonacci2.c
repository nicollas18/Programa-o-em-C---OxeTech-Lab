#include <stdio.h>

// Função recursiva para calcular o n-ésimo número de Fibonacci
int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

// Função recursiva para imprimir a sequência de Fibonacci até o n-ésimo termo
void printFibonacciSequence(int current, int n) {
    if (current > n) // Caso base: se o índice atual for maior que n, termina a recursão
        return;

    printf("%d ", fibonacci(current)); // Imprime o número de Fibonacci atual

    printFibonacciSequence(current + 1, n); // Chama recursivamente para o próximo termo
}

int main() {
    int n;

    // Solicita o número ao usuário
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    // Imprime a sequência de Fibonacci até o n-ésimo termo
    printf("Sequência de Fibonacci até o %dº termo:\n", n);
    printFibonacciSequence(0, n);

    printf("\n");
    return 0;
}
