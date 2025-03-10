#include <stdio.h>
int main() {
	int a, b, retry;
	for (retry = 1; retry >= 1; retry++) {
		printf("\nEscriba un número bajo: ");
		scanf("%d", &a);
		printf("\nEscriba un número alto: ");
		scanf("%d", &b);
		if (a < b) {
			retry = -1;
		}
		else {
			printf("\nError: el primer número debe ser menor que el segundo.\n");
		}
	}
	for (int i = b; i >= a; i--) {
		if (i % 2 == 0) {
			printf("%d \n", i);
		}
	}
	printf("\n");
	return 0;
}
