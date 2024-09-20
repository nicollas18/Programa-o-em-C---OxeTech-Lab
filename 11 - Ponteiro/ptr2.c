#include <stdio.h>

int main() {

  int numeros[4] = {1, 2, 3, 4};
  int *ptr = numeros;

  for (int i = 0; i < 4; i++) {
    printf("ptr + %d = %p\n", i, (ptr + i));
  }

  printf("\n");

  char letras[] = {'a', 'b', 'c', 'd'};
  char *ptr2 = letras;

  for (int i = 0; i < 4; i++) {
    printf("ptr + %d = %p\n", i, (ptr2 + i));
  }

  return 0;

}