#include <stdio.h>
int menu();
int volumen_cono(float radio, float altura);
int volumen_ortoedro(float lado1, float lado2, float altura);

int main() {
	int option, continuar;
	float volumen, radio, altura, lado1, lado2;
	for(continuar = 1; continuar >= 1; continuar++) {
		option = menu();
		switch (option){
			case 1:
				printf("Has seleccionado Cono (1)\n");
				printf("Escribe su radio: \n");
				scanf("%f", &radio);
				printf("Escribe su altura: \n");
				scanf("%f", &altura);
				if (radio > 0 && altura > 0) {
					volumen = volumen_cono(radio, altura);
				}
				else {
					printf("Error: No pueden usarse valores negativos.\n");
				}
				printf("El volumen es: %.2f \n", volumen);
				break;
			case 2:
				printf("Has seleccionado Ortoedro (2)\n");
				printf("Escribe un lado: \n");
				scanf("%f", &lado1);
				printf("Escribe otro lado: \n");
				scanf("%f", &lado2);
				printf("Escribe su altura: \n");
				scanf("%f", &altura);
				if (lado1 > 0 && lado2 > 0 && altura > 0) {
					volumen = volumen_ortoedro(lado1, lado2, altura);
					printf("El volumen es: %.2f \n", volumen);
				}
				else {
					printf("Error: No pueden usarse valores negativos.\n");
				}
				break;
			case 3:
			        printf("\nPrograma finalizado\n");
			        continuar = -1;
			default:
				printf("El valor %.2d no es una opción válida.\n", option);
		}
	}
	return 0;
}

int menu() {
	int option, retry;
	for (retry = 1; retry >= 1; retry++) {
		printf("Escribe el número de la figura de la que quieres calcular el volumen:\n1 - Cono\n2 - Ortoedro\n3 - Salir\n");
		scanf("%d", &option);
		if (option == 1 || option == 2 || option == 3) {
			retry = -1;
		}
		else {
			printf("El valor %.2d no es una opción válida.\n", option);
		}
	}
	return option;
}

int volumen_cono(float radio, float altura) {
	float volumen;
	volumen = (1.0/3) * 3.1416 * radio * radio * altura;
	return volumen;
}

int volumen_ortoedro(float lado1, float lado2, float altura) {
	float volumen;
	volumen = (lado1 * lado2 * altura);
	return volumen;
}
