#include <stdio.h>
int factorial(int num);

void main() {
  int num, output;
  printf("\n\nEscriba un número: ");
  scanf("%d", &num);
  output = factorial(num);
  printf("\n\nFactorial de %d es: %d \n\n", num, output);
}

int factorial(int num) {
  int result = 1;
  for (int i = 1; i <= num; i++) {
    result = result * i;
  }
  return result;
}
