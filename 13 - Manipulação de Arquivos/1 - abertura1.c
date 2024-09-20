#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("arquivo.txt", "r");

    if (file == NULL){
      printf("ERROR\n");
      return 1;
    }

    char linha[100];

    /*fgets(linha, 100, file);
    linha[strcspn(linha, "\n")] = '\0';
    printf("%s\n", linha);*/

    while (fgets(linha, 100, file) != NULL) {
      linha[strcspn(linha, "\n")] = '\0';
      printf("%s\n", linha);
    }

   //printf("%s\n", linha);

    fclose(file);

    return 0;
}
