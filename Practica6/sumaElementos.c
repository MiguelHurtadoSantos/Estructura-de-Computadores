#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicia(int vector[10]);
int suma(int vector[10]);

void main() {
  srand(time(NULL));
  int vector[10];
  inicia(vector);
  for (int i = 0; i < 10; i++) {
    printf("%d", vector[i]);
  }
  int output = suma(vector);
  printf("\n\nLa suma de los valores del vector es = %d\n\n", output);
}

void inicia(int vector[10]) {
  for (int i = 0; i < 10; i++) {
    vector[i] = (rand() % 10) + 1;
  }
}

int suma(int vector[10]) {
  int output = 0;
  for (int i = 0; i < 10; i++) {
    output = output + vector[i];
  }
  return output;
}
