#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>

void multiplica(int **A, int **B, int **C, int n);
void main() {
	int **A, **B, **C;
	int n;
	srand(time(NULL));
	
	printf("\nEscriba un Valor n: \n");
	scanf("%d", &n);
	
	A = (int**) malloc (n * sizeof(int*));
	for(int i = 0; i < n; i++) {
	    A[i] = (int*) malloc (n * sizeof(int));
	}
	B = (int**) malloc (n * sizeof(int*));
	for(int i = 0; i < n; i++) {
	    B[i] = (int*) malloc (n * sizeof(int));
	}
	C = (int**) malloc (n * sizeof(int*));
	for(int i = 0; i < n; i++) {
	    C[i] = (int*) malloc (n * sizeof(int));
	}
	
	for(int i = 0; i < n; i++) {
	    for(int j = 0; j < n; j++) {
	        A[i][j] = rand() % 10 + 1;
	    }
	}
	for(int i = 0; i < n; i++) {
	    for(int j = 0; j < n; j++) {
	        B[i][j] = rand() % 10 + 1;
	    }
	}
	
	multiplica(A, B, C, n);
	
	printf("\n\nMatriz A:\n\n");
	for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\nMatriz B:\n\n");
	for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\nMatriz C:\n\n");
	for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    
	for(int i = 0; i < n; i++) {
	    free(A[i]);
	}
	free(A);
	for(int i = 0; i < n; i++) {
	    free(B[i]);
	}
	free(B);
	for(int i = 0; i < n; i++) {
	    free(C[i]);
	}
	free(C);
}

void multiplica(int **A, int **B, int **C, int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++){
                C[i][j] = C[i][j] +  A[i][k] * B[k][j];
            }
        }
    }
}
