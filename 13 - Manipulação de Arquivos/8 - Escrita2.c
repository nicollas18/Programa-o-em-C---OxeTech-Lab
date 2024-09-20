#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("arquivo.txt", "a");  // Abre o arquivo para escrita
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fputs("Esta é uma linha de texto.\n", file);  // Escreve uma string no arquivo

    fclose(file);  // Fecha o arquivo
    return 0;
}