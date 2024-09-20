#include <stdio.h>

void ehPar(int x);

int main() {

  int numero = 10;

  ehPar(numero);

  return 0;
}

void ehPar(int x) {
  if (x % 2 == 0) {
    printf("eh par\n");
  }
}

