#include <stdio.h>
int calcula_si_es_primo(int num);
int calcula_divisores(int num);
void main() {
	int a, retry, primo;
	for (retry = 1; retry >= 1; retry++) {
		printf("Escriba un número =< 0:");
		scanf("%d", &a);
		if (a >= 0) {
			primo = calcula_si_es_primo(a);
			if (primo == 1) {
			printf("\nEl número %d es primo. \n", a);
			}
			else {
			printf("\nEl número %d no es primo. \n", a);
			}
			retry = -1;
		}
		else {
			printf("\nError: El valor del número no puede ser negativo.\nUsted ha introducido el %d\n", a);
		}
	}
}

int calcula_si_es_primo(int num) {
	int output = 0;
	int condicion = calcula_divisores(num);
	if (condicion == 2) {
		output = 1;
	} else {
		output = 0;
	}
	return output;
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
