#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("arquivo.txt", "w");

    if (file == NULL){
      printf("ERROR\n");
      return 1;
    }

    fprintf(file, "Estou alterando o conteúdo desse arquivo.");

    fclose(file);

    return 0;
}
