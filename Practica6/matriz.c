#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicia(int matriz[5][5]);

void main() {
  int matriz[5][5];
  inicia(matriz);
  for (int i = 0; i < 5; i++) {
    printf("\n");
    for (int j = 0; j < 5; j++) {
      printf("%d ", matriz[i][j]);
    }
  }
}

void inicia(int matriz[5][5]) {
  srand(time(NULL));
  int random;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      random = (rand() % 13) + 3;
      matriz[i][j] = random;
    }
  }
}
