#include <stdio.h>

int main() {
    FILE *file = fopen("dados.txt", "r");  // Abre o arquivo para leitura
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int idade;
    float altura;
    char nome[50];

    while (fscanf(file, "%s %d %f", nome, &idade, &altura) != EOF) {  // Lê dados formatados
        printf("Nome: %s, Idade: %d, Altura: %.2f\n", nome, idade, altura);
    }

    fclose(file);  // Fecha o arquivo
    return 0;
}