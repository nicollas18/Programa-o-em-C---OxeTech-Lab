#include <stdio.h>

int main() {
    int idade;

    // Solicita ao usuário a idade
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        if (idade >= 65) {
            printf("Você é um idoso.\n");
        } else {
            printf("Você é um adulto.\n");
        }
    } else {
        if (idade >= 13) {
            printf("Você é um adolescente.\n");
        } else {
            printf("Você é uma criança.\n");
        }
    }

    return 0;
}