#include <stdio.h>

int multi(int x, int y);

int main() {

  int n;
  scanf("%d\n", &n);

  for (int i = 0; i < n; i++) {
    int num1, num2;
    scanf("%d%d", &num1, &num2);

    printf("%d x %d = %3d\n\n", num1, num2, multi(num1, num2));
  }

  return 0;
  
}

int multi(int x, int y) {
  return x * y;
}