#include <stdio.h>

void imprimir(int n) {

  if (n == 0) {
    printf("%d\n", n);

  } 
  else {              
    imprimir(n - 1);
    printf("%d ", n);   
   
  }
}

int main() {

  imprimir(5);

  return 0;
}