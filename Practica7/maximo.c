#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int calculamaximo(int *p, int n);
void main() {
	int nData, *p;
	printf("\n\nBienvenido!\nEscriba números enteros y el programa los leerá mostrando al final\nel mayor de todos los números proporcionados.\n\n");
	printf("Primero escriba un número de datos que quiere introducir: ");
	scanf("%d", &nData);
	p = (int *) malloc (nData * sizeof(int));
	for(int i = 0; i < nData; i++) {
		printf("\nEscriba un número: ");
		scanf("%d", &*(p + i));
	}
	printf("\n\nLos valores introducidos son:");
	for (int j = 0; j < nData; j++) {
		printf("\nValor en posición %d: %d", j, *(p + j));
	}
	printf("\n\nValor máximo: %d\n\n", calculamaximo(p, nData));
}

int calculamaximo(int *p, int n) {
	int max = *(p + 0);
	for (int i = 1; i < n; i++) {
		if (*(p + i) > max) {
			max = *(p + i);
		}
	}
	return max;
}
