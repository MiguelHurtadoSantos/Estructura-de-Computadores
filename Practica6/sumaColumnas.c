#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicia(int matriz[3][6]);
void sumaColumnas(int matriz[3][6], int vector[6]);

void main() {
  int matriz[3][6], vector[6];
  inicia(matriz);
  for (int i = 0; i < 3; i++) {
    printf("\n");
    for (int j = 0; j < 6; j++) {
      printf("%d ", matriz[i][j]);
    }
  }
  sumaColumnas(matriz, vector);
  printf("\n\n");
  for (int j = 0; j < 6; j++) {
    printf("%d ", vector[j]);
  }
}

void inicia(int matriz[3][6]) {
  srand(time(NULL));
  int random;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 6; j++) {
      random = (rand() % 10) + 1;
      matriz[i][j] = random;
    }
  }
}

void sumaColumnas(int matriz[3][6], int vector[6]) {
  for (int i = 0; i < 6; i++) {
    vector[i] = 0;
  }
  for (int j = 0; j < 6; j++) {
    for (int i = 0; i < 3; i++) {
      vector[j] = vector[j] + matriz[i][j];
    }
  }
}
