#include <stdio.h>
#include <string.h>

struct Aluno {
  char nome[50];
  int idade;
  float nota;
};

void atualizarNotaValor(struct Aluno aluno, float novaNota) {
  aluno.nota = novaNota;
  printf("%.2f\n", aluno.nota);
}

void atualizarNotaRef(struct Aluno *aluno, float novaNota) {
  aluno->nota = novaNota;
  printf("%.2f\n", aluno->nota);
}

int main() {

  struct Aluno aluno1 = {"Carlos", 20, 7.6};

  atualizarNotaValor(aluno1, 7.9);

  printf("%.2f\n", aluno1.nota);

  atualizarNotaRef(&aluno1, 7.9);

  printf("%.2f\n", aluno1.nota);

 return 0;
}