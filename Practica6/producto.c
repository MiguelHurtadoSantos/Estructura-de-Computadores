#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicializa(int matriz[3][3]);
void producto(int matriz1[3][3], int matriz2[3][3], int resultado[3][3]);
void imprime(int matriz[3][3]);

void main() {
    int matriz1[3][3], matriz2[3][3], resultado[3][3];
    inicializa(matriz1);
    inicializa(matriz2);
    producto(matriz1, matriz2, resultado);
    imprime(resultado);
}

void inicializa(int matriz[3][3]) {
    srand(time(NULL));
    int random;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            random = (rand() % 5) + 1;
            matriz[i][j] = random;
        }
    }
}

void producto(int matriz1[3][3], int matriz2[3][3], int resultado[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                resultado[i][j] = resultado[i][j] + (matriz1[i][k] * matriz2[k][j]);
            }
        }
    }
}

void imprime(int matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
        printf("\n");
        for (int j = 0; j < 3; j++) {
        printf("[ %d ]", matriz[i][j]);
        }
    }
}
