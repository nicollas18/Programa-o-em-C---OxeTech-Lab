#include <stdio.h>

int main() {

  int numeros[5];

  for (int i = 0; i < 5; i++) {
    scanf("%d", &numeros[i]);
  }

  for (int i = 0; i < 5; i++) {
    printf("%d ", numeros[i]);
  }
  printf("\n");

}