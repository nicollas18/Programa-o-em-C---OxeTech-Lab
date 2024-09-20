#include <stdio.h>
#include <string.h>

int main() {

  char frase[] = "Olá, tudo bem ?";

  int tamanho = strlen(frase);
  printf("%d\n", tamanho);

  char copia[20];

  strcpy(copia, frase);
  printf("%s\n", copia);

  strcat(frase, "Como vai ?");
  printf("%s\n", frase);

  char string1[] = "abc", string2[] = "abc";

  int resultado = strcmp(string1, string2);
  printf("%d\n", resultado);

  return 0;
}