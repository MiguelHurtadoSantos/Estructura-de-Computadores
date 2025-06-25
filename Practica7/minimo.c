#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>

void inicializamatriz(int **p, int n, int m);
int calculaminimo(int **p, int n, int m);
void main() {
	int **p, n, m;
	srand(time(NULL));
	printf("\n\nBienvenido!\nEscriba los datos que se le piden y el programa los leerá mostrando al final\nel menor de todos los números de la matriz generada.\n\n");
	printf("Escriba un número de filas: ");
	scanf("%d", &n);
	printf("Escriba un número de columnas: ");
	scanf("%d", &m);
	
	p = (int**) malloc (n * sizeof(int *));
	for(int i = 0; i < n; i++) {
        p[i] = (int*) malloc (m * sizeof(int));
    }
	inicializamatriz(p, n, m);
	
	printf("\n\nLa matriz aleatoria es:\n");
	for (int i = 0; i < n; i++){
	    for (int j = 0; j < n; j++){
	        printf("%d   ", &p[i][j]);
	    }
	    printf("\n");
	}
	
	printf("\n\nValor mínimo: %d\n\n", calculaminimo(p, n, m));
	
	free(p);
}

void inicializamatriz(int **p, int n, int m) {
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0; i < m ; j++) {
            p[i][j] = rand() % 10 + 1;
        }
    }
}

int calculaminimo(int **p, int n, int m) {
	int min = p[0][0];
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < m; j++) {
	        if (p[i][j] < min) {
	            min = p[i][j];
	        }
	    }
	}
	return min;
}
