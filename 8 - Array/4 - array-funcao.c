#include <stdio.h>

void ler_array(int array[], int tamanho) {
  
  for (int i = 0; i < tamanho; i++) {
    scanf("%d", &array[i]);
  }

  tamanho = 15;
}

void imprimir_array(int array[], int tamanho) {

  for (int i = 0; i < tamanho; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

int main() {
  int tam = 10;
  int numeros[10];

  ler_array(numeros, tam);
  imprimir_array(numeros, tam);

  return 0;
}