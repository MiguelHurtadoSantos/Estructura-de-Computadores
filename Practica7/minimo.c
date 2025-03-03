#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int calculaminimo(int **p, int n);
void main() {
	int nData, **p;
	printf("\n\nBienvenido!\nEscriba números enteros y el programa los leerá mostrando al final\nel menor de todos los números proporcionados.\n\n");
	printf("Primero escriba un número de datos que quiere introducir: ");
	scanf("%d", &nData);
	p = (int **) malloc (nData * sizeof(int *));
	for(int i = 0; i < nData; i++) {
		printf("\nEscriba un número: ");
		scanf("%d", &**(p + i));
	}
	printf("\n\nLos valores introducidos son:");
	for (int j = 0; j < nData; j++) {
		printf("\nValor en posición %d: %d", j, **(p + j));
	}
	printf("\n\nValor mínimo: %d\n\n", calculaminimo(p, nData));
}

void inicializamatriz() {
}

int calculaminimo(int **p, int n) {
	int min = **(p + 0);
	for (int i = 1; i < n; i++) {
		if (**(p + i) < min) {
			min = **(p + i);
		}
	}
	return min;
}
