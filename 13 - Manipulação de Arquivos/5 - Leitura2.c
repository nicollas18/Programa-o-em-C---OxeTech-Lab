#include <stdio.h>

int main() {
    FILE *file = fopen("arquivo.txt", "r");  // Abre o arquivo para leitura
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char linha[100];
    while (fgets(linha, sizeof(linha), file) != NULL) {  // Lê linha por linha
        printf("%s", linha);  // Exibe a linha lida
    }

    fclose(file);  // Fecha o arquivo
    return 0;
}