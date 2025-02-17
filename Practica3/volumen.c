#include <stdio.h>
int main() {
	int option;
	float volumen, radio, altura, lado1, lado2;;
	printf("Escribe el número de la figura de la que quieres calcular el volumen:\n1 - Cono\n2 - Ortoedro\n");
	scanf("%d", &option);
	switch (option){
		case 1:
			printf("Has seleccionado Cono (1)\n");
			printf("Escribe su radio: \n");
			scanf("%f", &radio);
			printf("Escribe su altura: \n");
			scanf("%f", &altura);
			if (radio > 0 && altura > 0) {
				volumen = (1.0/3) * 3.1416 * radio * radio * altura;
				printf("El volumen es: %.2f \n", volumen);
			}
			else {
				printf("Error: No pueden usarse valores negativos.\n");
			}
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
				volumen = (lado1 * lado2 * altura);
				printf("El volumen es: %.2f", volumen);
			}
			else {
				printf("Error: No pueden usarse valores negativos.\n");
			}
			break;
		default:
			printf("El valor %.2d no es una opción válida.\n", option);
	}
	return 0;
}
