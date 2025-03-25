#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicia(char letras[26]);

void main() {
  srand(time(NULL));
  char letras[26], password[9];
  int random;
  inicia(letras);
  for (int i = 0; i < 8; i++) {
    random = rand() % 26;
    password[i] = letras[random];
  }
  password[8] = '\0';
  printf("\n\n%s\n", password);
}

void inicia(char letras[26]) {
  for (int i = 0; i < 26; i++) {
    letras[i] = 'a' + i;
  }
}
