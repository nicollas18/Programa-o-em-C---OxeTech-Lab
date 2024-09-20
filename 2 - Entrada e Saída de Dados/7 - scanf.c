#include <stdio.h>

int main() 
{
    int inteiro;
    char caractere;
    float real;

    // Solicitação e leitura dos dados
    printf("Digite um número inteiro: ");
    scanf("%d", &inteiro);

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);  // O espaço antes de %c é importante para capturar o caractere corretamente

    printf("Digite um número real (float): ");
    scanf("%f", &real);

    // Imprime os valores lidos
    printf("\nVocê digitou:\n");
    printf("Número inteiro: %d\n", inteiro);
    printf("Caractere: %c\n", caractere);
    printf("Número real: %.2f\n", real);

    return 0;
}