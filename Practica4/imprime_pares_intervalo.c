#include <stdio.h>

void imprime_pares_intervalo(int min, int max);

int main() {
	int a, b;
	for (int retry = 1 ; retry >= 1; retry++) {
		printf("\nEscriba un número bajo: ");
		scanf("%d", &a);
		printf("\nEscriba un número alto: ");
		scanf("%d", &b);
		if (a < b) {
			retry = -1;
		}
		else {
			printf("\n\nError: El primer número debe ser mayor que el segundo.\n\n");
		}
	}
	imprime_pares_intervalo(a, b);
	return 0;
}

void imprime_pares_intervalo(int min, int max) {
	for (int i = max; i >= min; i--) {
		if ((i % 2) == 0) {
			printf("%d\n", i);
		}
	}
}
