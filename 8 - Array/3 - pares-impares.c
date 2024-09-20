#include <stdio.h>

// Você vai receber um conjunto de 50 inteiros, sua missão é dizer quantos são pares e quantos são ímpares.

int main() {
  int numeros[50], pares = 0, impares = 0;

  for (int i = 0; i < 50; i++) {
    scanf("%d", &numeros[i]);

    if (numeros[i] % 2 == 0) {
      pares++;
    } else {
      impares++;
    }
  }

  printf("O cojunto de inteiros tem: %d pares e %d ímpares\n", pares, impares);

}