#include <stdio.h>

// Função recursiva para calcular o n-ésimo número de Fibonacci
int fibonacci(int n) {

    if (n == 1){
      return 0;
    }
        
    else if (n == 2) {
      return 1;
    }
        
    else {
      return fibonacci(n - 1) + fibonacci(n - 2);
    }        
}

int fibonnaciIterativo(int n) {
  int n_1 = 0, n_2 = 1, aux;

  for (int i = 3; i <= n; i++) {
    aux = n_1 + n_2;
    n_1 = n_2;
    n_2 = aux;
  }

  return n_2;
}


int main() {
    int n;

    // Solicita o número ao usuário
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    // Calcula e exibe o n-ésimo número de Fibonacci
    printf("Fibonacci de %d = %d\n", n, fibonacci(n));
    printf("Fibonacci de %d = %d\n", n, fibonnaciIterativo(n));

    return 0;
}
