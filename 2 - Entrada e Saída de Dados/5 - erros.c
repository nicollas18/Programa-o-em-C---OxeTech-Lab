#include <stdio.h>

int main() {
    /*
    Uso Incorreto de Especificadores de Formato:
    Falta de Argumentos Correspondentes:
    Argumentos Demais:
    Falha ao Escapar Caracteres Especiais:
    */

   int num = 42;
   printf("O número é: %f\n", num);
   printf("O número é: %d\n");
   printf("O número é: %d\n", num, 44);
   printf("O desconto é de %d%%\n", num);

    return 0;
}