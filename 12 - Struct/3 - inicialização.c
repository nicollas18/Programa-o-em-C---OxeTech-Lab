#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    int idade;
    float notaFinal;
};

int main() {

  struct Aluno aluno1 = {"Carlos", 20, 85.5};
  struct Aluno aluno2;

  // Inicialização dos membros individualmente
  strcpy(aluno2.nome, "Mariana");
  aluno2.idade = 19;
  aluno2.notaFinal = 90.0;

  return 0;
}