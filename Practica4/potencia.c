#include <stdio.h>
int potencia(int base, int exponente);

int main () {
	int base, exponente, pot, retry;
	for (retry = 1; retry >= 1; retry++) {
		printf("Escribe un número (base): ");
		scanf(" %d", &base);
		printf("Escribe un número (exponente): ");
		scanf(" %d", &exponente);
		if ((base >= 1) && (exponente >= 1)){
			pot = potencia(base, exponente);
			printf("La potencia es: %d\n", pot);
			retry = -1;
		}
		else{
			printf("Error, la base y el exponente han de ser mayores o iguales a 1\n");
		}
	}
	return 0;
}

int potencia(int base, int exponente) {
	int  i, pot;
	pot = 1;
	i = 1;
	while (exponente >= 1){
		pot = pot * base;
		exponente = exponente - 1;
	}
	return pot;
}
