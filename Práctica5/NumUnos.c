#include <stdio.h>

int calcula_unos(int num);

void main() {
  int num, output;
  for (int retry = 1; retry >= 1; retry++) {
    printf("\n\nEscriba un valor positivo: ");
    scanf("%d", &num);
    if(num >= 0) {
      retry = -1;
    } else {
      printf("\n\nError: El valor debe ser mayor o igual que 0.");
    }
  }
  output = calcula_unos(num);
  printf("\n\nEl número de 1s en el número %d pasado a binario es: %d.", num, output);
}

int calcula_unos(int num) {
  int output;
  int i = num;
  while (i != 0) {
    if (i % 2 != 0) {
      output++;
    }
    i = (i / 2);
  }
  return output;
}
