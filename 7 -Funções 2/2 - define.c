#include <stdio.h>
#define PI 3.14159
#define TAM 10

int main() {

  float area;

  for (int i = 0; i < TAM; i++) {
    int raio;
    scanf("%d", &raio);

    area = PI * raio * raio;
    printf("%.2f\n", area);
  }

  return 0;
}