#include <stdio.h>



void main() {
	int imput, a, b, c, d, e;
	imput = menu();
	if (imput == 1) {
		
	} else if (imput == 2) {
		
	} else if (imput == 3) {
		
	}
}

int menu() {
	int imput, retry;
	printf("\nEscoja una de las siguientes opciones:\n\n1. - Media\n2. - Desviación\n3. - Salir");
	scanf("%d", &imput);
	for (retry = 1; retry >= 1; retry++) {
		if ((imput =< 3) && (imput >= 0)) {
			retry = -1;
			return imput;
		}
	}
}

int media() {
	
}

int desviacion() {
	
}
