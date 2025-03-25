#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicia(int matriz[9][9]);

void main() {
  int matriz[9][9];
  inicia(matriz);
  for (int i = 0; i < 9; i++) {
    printf("\n");
    for (int j = 0; j < 9; j++) {
      printf("%d ", matriz[i][j]);
    }
  }
  printf("\n");
}

void inicia(int matriz[9][9]) {
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      matriz[i][j] = 0;
    }
  }
  for (int i = 0; i < 9; i++) {
    matriz[i][i] = 1;
  }
}
