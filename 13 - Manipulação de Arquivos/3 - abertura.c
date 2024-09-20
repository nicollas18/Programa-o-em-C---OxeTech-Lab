#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("arquivo.txt", "a");

    if (file == NULL){
      printf("ERROR\n");
      return 1;
    }

    fprintf(file, "\nEstou alterando o conteúdo desse arquivo. Sem modificar o que já existe nele.\n");

    fclose(file);

    return 0;
}
