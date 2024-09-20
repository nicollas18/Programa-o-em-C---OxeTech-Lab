#include <stdio.h>
#include <string.h>

int main() {

  char nome[10];
  
  scanf("%s", nome);

  scanf("%[^\n]", nome);

  scanf("%9[^\n]", nome);

  printf("Olá, %s!\n", nome);


  return 0;
}