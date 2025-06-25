#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>

void inicializamatriz(int **p, int n, int m);
int calculaminimo(int **p, int n, int m);
void main() {
	int n, m;
	int **matriz;
	srand(time(NULL));
	printf("\n\nBienvenido!\nEscriba los datos que se le piden y el programa los leerá mostrando al final\nel menor de todos los números de la matriz generada.\n\n");
	printf("Escriba un número de filas: ");
	scanf("%d", &n);
	printf("Escriba un número de columnas: ");
	scanf("%d", &m);
	
	matriz = (int**) malloc (n * sizeof(int *));
	for(int i = 0; i < n; i++) {
        matriz[i] = (int*) malloc (m * sizeof(int));
    }
	inicializamatriz(matriz, n, m);
	
	printf("\n\nLa matriz aleatoria es:\n");
	for (int i = 0; i < n; i++){
	    for (int j = 0; j < n; j++){
	        printf("%d\t", matriz[i][j]);
	    }
	    printf("\n");
	}
	
	printf("\n\nValor mínimo: %d\n\n", calculaminimo(matriz, n, m));
	
	for(int i = 0; i < n; i++) {
        free(matriz[i]);
    }
	free(matriz);
}

void inicializamatriz(int **matriz, int n, int m) {
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0; j < m ; j++) {
            matriz[i][j] = rand() % 10 + 1;
        }
    }
}

int calculaminimo(int **matriz, int n, int m) {
	int min = matriz[0][0];
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < m; j++) {
	        if (matriz[i][j] < min) {
	            min = matriz[i][j];
	        }
	    }
	}
	return min;
}
