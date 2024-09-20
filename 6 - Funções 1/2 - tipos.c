#include <stdio.h>

int soma(int x, int y);
char maiusculo(char caractere);
float media(float nota1, float nota2);


int main() {

  int resultadoSoma;
  char resultadoMaiusculo;
  float resultadoMedia;

  int numero1, numero2;
  char letra;
  float nota1, nota2;

  scanf("%d%d %c%f%f", &numero1, &numero2, &letra, &nota1, &nota2);

  resultadoSoma = soma(numero1, numero2);
  resultadoMaiusculo = maiusculo(letra);
  resultadoMedia = media(nota1, nota2);

  printf("A soma é %d\n", resultadoSoma);
  printf("A letra maiúscula é %c\n", resultadoMaiusculo);
  printf("A média é %.2f\n", resultadoMedia);
}

int soma(int x, int y) {
  return x + y;
}

char maiusculo(char caractere) {

  if (caractere >= 'a' && caractere <= 'z') {
    return caractere - ('a' - 'A');
  }

  return caractere;
}

float media(float nota1, float nota2) {
  float resultado = (nota1 + nota2) / 2.0;

  return resultado;
}