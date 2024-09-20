#include <stdio.h>

int main() {

  int numero = 10;
  int *p = &numero;

  printf("Endereço da variável numero: %p\n", &numero);
  printf("Endereço que p armazena: %18p\n", p);

  printf("O valor de numero é: %d\n", *p);

  return 0;
  
}
