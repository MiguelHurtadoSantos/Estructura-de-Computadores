#include <stdio.h>
int suma_n_primeros_nums(int number);
void main () {
	int num, retry, resultado;
	for (retry = 1; retry >= 1; retry++) {
		printf("Escribe cuantos números quieres sumar: ");
		scanf(" %d", &num);
		if (num >= 1) {
			resultado = suma_n_primeros_nums(num);
			printf("La suma es: %d\n", resultado);
			retry = -1;
		}
		else{
			printf("Error, el número ha de ser mayor o igual a 1\n");
		}
	}
}

int suma_n_primeros_nums(int number) {
	int total, i;
	total = 0;
	i = 1;
	for (i = 0 ;i <= number; i++) {
		total = total + i;
	}
	return total;
}
