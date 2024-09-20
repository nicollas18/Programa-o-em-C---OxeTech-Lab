#include <stdio.h>

// Exemplo: 10 9 4 6 7

int main() {

  /* Exemplo sem array */
  /*
  int nota1, nota2, nota3, nota4, nota5;
  float media;

  scanf("%d%d%d%d%d", &nota1, &nota2, &nota3, &nota4, &nota5);

  media = (nota1 + nota2 + nota3 + nota4 + nota5) / 5.0;

  printf("%f\n", media);

  */

  /* Exemplo com array */

  float notas[10];

  notas[0] = 5;
  notas[1] = 7;
  notas[2] = 9;

  printf("%d\n", notas[0]);
  printf("%d\n", notas[1]);
  printf("%d\n", notas[2]);

  int numeros[5] = {1, 2, 3, 4, 5};

  int primeiro = numeros[0];
  
  numeros[2] = 7;

  return 0;

}