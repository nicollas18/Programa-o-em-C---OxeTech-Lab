#include <stdio.h>

void subir_escada(int n) {

  if (n == 1) {
    printf("Subi o degrau %d\n", n);
    
  }
  else {
    subir_escada(n-1);
    printf("Subi o degrau %d\n", n);
  }
}

int main() {
  subir_escada(5);
  printf("Subi a escada!!!\n");
}