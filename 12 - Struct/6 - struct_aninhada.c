#include <stdio.h>

struct dataNascimento {
  int dia;
  int mes;
  int ano;
};

struct Pessoa {
  char nome[50];
  int idade;
  struct dataNascimento aniversario;
};

int main() {

  struct Pessoa p1 = {"Nícollas", 22, {9, 2, 2002}}; // 16-02/2002

  printf("Nome: %s\n", p1.nome);
  printf("Idade: %d\n", p1.idade);
  printf("Data de nascimento: %02d/%02d/%d\n", p1.aniversario.dia, p1.aniversario.mes, p1.aniversario.ano);

 return 0;
}