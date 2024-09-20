#include <stdio.h>
#include <string.h>

int main() {

  FILE *file = fopen("arquivo.txt", "r");
  if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
  }

  char caractere;

  while ((caractere = fgetc(file)) != EOF) {
    printf("%c", caractere);
    /*putchar(caractere)*/
  }

  fclose(file);
}