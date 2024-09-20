#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("arquivo.txt", "a"); 
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char caractere = 'A';
    fputc(caractere, file);
    fputc('\n', file);

    fclose(file);

    return 0;

}