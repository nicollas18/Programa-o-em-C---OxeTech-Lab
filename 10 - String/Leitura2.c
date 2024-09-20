#include <stdio.h>
#include <string.h>

int main() {

  char nome[50];

  fgets(nome, 50, stdin);
  nome[strcspn(nome, "\n")] = '\0';

  printf("Olá, %s\n", nome);

  return 0;
}