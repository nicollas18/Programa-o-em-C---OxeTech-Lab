#include <stdio.h>

int soma(int x, int y); // Protótipo da função

int main() {
  int resultado;

  resultado = soma(4, 9); // Chamada da função
  printf("%d\n", resultado);

  return 0;
}

int soma(int x, int y) { // Definição da função
  return x + y;
}