#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicia(int matriz[6][6]);
int suma(int matriz[6][6]);

void main() {
  int matriz[6][6], output;
  inicia(matriz);
  for (int i = 0; i < 6; i++) {
    printf("\n");
    for (int j = 0; j < 6; j++) {
      printf("%d ", matriz[i][j]);
    }
  }
  output = suma(matriz);
  printf("\n\nLa suma de todos los valores de la matriz es: %d\n", output);
}

void inicia(int matriz[6][6]) {
  srand(time(NULL));
  int random;
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      random = (rand() % 10) + 1;
      matriz[i][j] = random;
    }
  }
}

int suma(int matriz[6][6]) {
  int output = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      output = output + matriz[i][j];
    }
  }
  return output;
}
