#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>

void minimoFilas(int **matriz, int *vector, int n, int m);

int main() {
  int **matriz;
  int *vector;
  int n, m;
  srand(time(NULL));
  
  printf("\nEscriba número de filas: ");
  scanf("%d", &n);
  printf("\nEscriba número de columnas: ");
  scanf("%d", &m);
  
  vector = (int*) malloc (n * sizeof(int));
  matriz = (int**) malloc (n * sizeof(int*));
  for (int i = 0; i < n; i++) {
      matriz[i] = (int*) malloc (m * sizeof(int));
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      matriz[i][j] = rand() % 21 - 10;
    }
  }

  minimoFilas(matriz, vector, n, m);
  //Imprimir vector
    
    for (int i = 0; i < n; i++){
	    for (int j = 0; j < m; j++){
	        printf("%d\t", matriz[i][j]);
	    }
	    printf("\n");
	}
	printf("\n");
    for(int i = 0; i < n; i++) {
        printf("%d\t", vector[i]);
    }
  //Liberar vector y matriz
  
    for(int i = 0; i < n; i++) {
        free(matriz[i]);
    }
    free(matriz);
    free(vector);
}

void minimoFilas(int **matriz, int *vector, int n, int m) {
	for (int i = 0; i < n; i++) {
	    int min = matriz[i][0];
	    for (int j = 0; j < m; j++) {
	        if (matriz[i][j] < min) {
	            min = matriz[i][j];
	        }
	    }
	    vector[i] = min;
	}
}
