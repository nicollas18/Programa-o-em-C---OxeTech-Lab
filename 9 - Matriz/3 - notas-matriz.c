#include <stdio.h>
#define ALUNOS 3
#define NOTAS 3

int main() {

  float notas[3][3];

  // As linhas serão os alunos
  // As colunas serão as notas

  float soma, media = 0.0;
  int melhorAluno = 0;
  float melhorMedia = 0.0;


  for (int i = 0; i < 3; i++) {

    soma = 0.0;

    for (int j = 0; i < 3; j++) {
      scanf("%f", &notas[i][j]);
      soma += notas[i][j];
    }

    media = soma / 3.0;
    printf("A média do aluno %d é: %.2f\n", i + 1, media);

    if (media > melhorAluno) {
      melhorAluno = media;
      melhorAluno = i;
    }
  }

  printf("O aluno %d teve a melhor média: %.2f\n", melhorAluno + 1, melhorMedia);
  

  return 0;
}