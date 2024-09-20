#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float notaFinal;
};

int main() {

  struct Aluno aluno1;

  aluno1.idade = 20;
  aluno1.notaFinal = 85.5;

  return 0;
}