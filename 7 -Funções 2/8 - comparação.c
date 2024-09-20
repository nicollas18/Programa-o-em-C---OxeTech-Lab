#include <stdio.h>
#include <time.h>

// Função recursiva para calcular o n-ésimo número de Fibonacci
int fibonacciRecursivo(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
}

// Função iterativa para calcular o n-ésimo número de Fibonacci
int fibonacciIterativo(int n) {
    int a = 0, b = 1, temp;

    if (n == 0)
        return a;

    for (int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}

int main() {
    int n = 50;  // Altere esse valor para testar com outros números
    clock_t start, end;
    double cpu_time_used;

    // Medir o tempo de execução da função recursiva
    start = clock();
    int resultRecursivo = fibonacciRecursivo(n);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Fibonacci Recursivo (%d) = %d\n", n, resultRecursivo);
    printf("Tempo de execução recursivo: %f segundos\n", cpu_time_used);

    // Medir o tempo de execução da função iterativa
    start = clock();
    int resultIterativo = fibonacciIterativo(n);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Fibonacci Iterativo (%d) = %d\n", n, resultIterativo);
    printf("Tempo de execução iterativo: %f segundos\n", cpu_time_used);

    return 0;
}
