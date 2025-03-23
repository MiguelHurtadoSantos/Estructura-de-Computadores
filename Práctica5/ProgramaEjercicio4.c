#include <stdio.h>

int calcula_multiplos_intervalo(int a, int b, int c);

void main() {
  int a, b, c, output;
  for (int retry = 1; retry >= 1; retry++) {
    printf("\n\nEscriba un primer valor pequeño: ");
    scanf("%d", &a);
    printf("\n\nEscriba un segundo valor mayor: ");
    scanf("%d", &b);
    printf("\n\nEscriba un tercer valor mayor que 0: ");
    scanf("%d", &c);
    if ((a < b) & (c >= 0)) {
      retry = -1;
    } else {
      printf("\n\nError: alguno/s de los valores ha/n sido introducido/s incorrectamente.");
    }
  }
  output = calcula_multiplos_intervalo(a, b, c);
  printf("\n\nEl número de multiplos entre %d y %d es: %d", a, b, output);
}

int calcula_multiplos_intervalo(int a, int b, int c) {
  int output;
  for (int i = a; i <= b; i++) {
    if (i % c == 0) {
      output++;
    }
  }
  return output;
}
