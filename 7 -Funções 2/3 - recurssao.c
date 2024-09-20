#include <stdio.h>

void recursiva() {

  printf("loop\n");
  recursiva();
  
}

int main() {
  recursiva();
  return 0;
}