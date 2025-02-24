#include <stdio.h>
int calcula_divisores(int num);
void main() {
	int a, retry, divisores;
	for (retry = 1; retry >= 1; retry++) {
		printf("Escriba un número =< 0:");
		scanf("%d", &a);
		if (a >= 0) {
			divisores = calcula_divisores(a);
			printf("\nEl número %d, tiene %d divisores.\n", a, divisores);
			retry = -1;
		}
		else {
			printf("\nError: El valor del número no puede ser negativo.\nUsted ha introducido el %d\n", a);
		}
	}
}

int calcula_divisores(int num) {
	int output = 0;
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			output++;
		}
	}
	return output;
}
