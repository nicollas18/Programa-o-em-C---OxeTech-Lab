#include <stdio.h>

int main() {

  int i = 6;

  do {
    printf("Programação em C\n");
    printf("Entrou no do-while\n");
    i++;

  } while (i <= 5);
  printf("%d\n", i);



  while (i <= 5) {
    printf("Programação em C\n");
    i++;
  }

  return 0;
}