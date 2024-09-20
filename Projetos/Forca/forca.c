#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define MAX_PALAVRAS 100
#define TAMANHO_MAX_PALAVRA 100

void carregarPalavras(char palavras[MAX_PALAVRAS][TAMANHO_MAX_PALAVRA], int *qtdPalavras) {
    FILE *arquivo = fopen("palavras.txt", "r");
    if (!arquivo) {
        printf("Não foi possível abrir o arquivo de palavras!\n");
        exit(1);
    }

    *qtdPalavras = 0;
    while (fscanf(arquivo, "%s", palavras[*qtdPalavras]) != EOF && *qtdPalavras < MAX_PALAVRAS) {
        (*qtdPalavras)++;
    }

    fclose(arquivo);
}

void escolherPalavra(char *palavraEscolhida, char palavras[MAX_PALAVRAS][TAMANHO_MAX_PALAVRA], int qtdPalavras) {
    srand(time(NULL));
    int indice = rand() % qtdPalavras;
    strcpy(palavraEscolhida, palavras[indice]);
}

void exibirPalavra(char *palavra, int *adivinhadas) {
    for (int i = 0; i < strlen(palavra); i++) {
        if (adivinhadas[i]) {
            printf("%c ", palavra[i]);
        } else {
            printf("_ ");
        }
    }
    printf("\n");
}

int todasAdivinhadas(int *adivinhadas, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (!adivinhadas[i]) {
            return 0;
        }
    }
    return 1;
}

int letraJaTentada(char *letrasErradas, char palpite, int tentativas) {
    for (int i = 0; i < tentativas; i++) {
        if (letrasErradas[i] == palpite) {
            return 1;
        }
    }
    return 0;
}

void jogar(char palavras[MAX_PALAVRAS][TAMANHO_MAX_PALAVRA], int qtdPalavras) {
    char palavraEscolhida[TAMANHO_MAX_PALAVRA];
    escolherPalavra(palavraEscolhida, palavras, qtdPalavras);
    int tamanho = strlen(palavraEscolhida);
    int adivinhadas[tamanho];
    for (int i = 0; i < tamanho; i++) adivinhadas[i] = 0;  // Inicializa com zeros

    int tentativas = 0;
    int maxTentativas = 6;
    char palpite;
    char letrasErradas[maxTentativas];
    int totalErradas = 0;

    while (tentativas < maxTentativas && !todasAdivinhadas(adivinhadas, tamanho)) {
        printf("\nPalavra: ");
        exibirPalavra(palavraEscolhida, adivinhadas);
        printf("Tentativas restantes: %d\n", maxTentativas - tentativas);
        printf("Letras erradas: ");
        for (int i = 0; i < totalErradas; i++) {
            printf("%c ", letrasErradas[i]);
        }
        printf("\nDigite uma letra: ");
        scanf(" %c", &palpite);
        palpite = tolower(palpite); // Converte para minúscula

        if (!isalpha(palpite)) {
            printf("Digite apenas letras!\n");
            continue;
        }

        if (letraJaTentada(letrasErradas, palpite, totalErradas)) {
            printf("Você já tentou a letra '%c' antes.\n", palpite);
            continue;
        }

        int achou = 0;
        for (int i = 0; i < tamanho; i++) {
            if (palavraEscolhida[i] == palpite) {
                adivinhadas[i] = 1;
                achou = 1;
            }
        }

        if (!achou) {
            letrasErradas[totalErradas++] = palpite;
            tentativas++;
        }
    }

    if (todasAdivinhadas(adivinhadas, tamanho)) {
        printf("\nParabéns! Você adivinhou a palavra: %s\n", palavraEscolhida);
    } else {
        printf("\nVocê perdeu! A palavra era: %s\n", palavraEscolhida);
    }
}

int main() {
    char palavras[MAX_PALAVRAS][TAMANHO_MAX_PALAVRA];
    int qtdPalavras;

    carregarPalavras(palavras, &qtdPalavras);
    jogar(palavras, qtdPalavras);

    return 0;
}
