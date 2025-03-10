#include <stdio.h>
int menu();
int media();
int desviacion();
void main() {
	int imput, resultado, retry;
	for (retry = 1; retry >= 1; retry++) {
		imput = menu();
		if (imput == 1) {
			printf("La media es: %d", media());
		} else if (imput == 2) {
			printf("La desviación es: %d", desviacion());
		} else if (imput == 3) {
			printf("\nFinalizando programa.\n");
			retry = -1;
		}
	}
}

int menu() {
	int imput, retry;
	printf("\nEscoja una de las siguientes opciones:\n\n1. - Media\n2. - Desviación\n3. - Salir\n");
	scanf("%d", &imput);
	for (retry = 1; retry >= 1; retry++) {
		if ((imput <= 3) && (imput >= 0)) {
			retry = -1;
			return imput;
		}
	}
}

int media() {
	int a, b, c, d, e, output;
	printf("\nEscriba un primer valor: ");
	scanf("%d",&a);
	printf("\nEscriba un segundo valor: ");
	scanf("%d",&b);
	printf("\nEscriba un tercer valor: ");
	scanf("%d",&c);
	printf("\nEscriba un cuarto valor: ");
	scanf("%d",&d);
	printf("\nEscriba un quinto valor: ");
	scanf("%d",&e);
	output = a + b + c + d + e;
	output = output / 5;
	return output;
}

int desviacion() {
	int a, b, c, d, e, output;
	printf("\nEscriba un primer valor: ");
	scanf("%d",&a);
	printf("\nEscriba un segundo valor: ");
	scanf("%d",&b);
	printf("\nEscriba un tercer valor: ");
	scanf("%d",&c);
	printf("\nEscriba un cuarto valor: ");
	scanf("%d",&d);
	printf("\nEscriba un quinto valor: ");
	scanf("%d",&e);
	output = ;
	return output;
}
