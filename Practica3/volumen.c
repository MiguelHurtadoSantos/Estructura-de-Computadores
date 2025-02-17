#include <stdio.h>
int main() {
	int option;
	double volumen;
	printf("Escribe el número de la figura de la que quieres calcular el volumen:\n1 - Cono\n2 - Ortoedro\n");
	scanf("%d", &option);
	switch (option){
		case 1:
			double radio, altura;
			printf("Has seleccionado Cono (1)\n");
			printf("Escribe su radio: \n");
			scanf("%d", &radio);
			printf("Escribe su altura: \n");
			scanf("%d", &altura);
			if (lado1 > 0 & lado2 > 0 & altura > 0) {
				volumen = (1/3) * radio ^ (2) * altura;
				printf("El volumen es: %.2d", &volumen);
			}
			else {
				printf("Error: No pueden usarse valores negativos.");
			}
		case 2:
			double lado1, lado2, altura;
			printf("Has seleccionado Ortoedro (2)\n");
			printf("Escribe un lado: \n");
			scanf("%d", &lado1);
			printf("Escribe otro lado: \n");
			scanf("%d", &lado2);
			printf("Escribe su altura: \n");
			scanf("%d", &altura);
			if (lado1 > 0 & lado2 > 0 & altura > 0) {
				volumen = (lado1 * lado2 * altura)
				printf("El volumen es: %.2d", &volumen);
			}
			else {
				printf("Error: No pueden usarse valores negativos.");
			}
		default:
			printf("El valor %d no es una opción válida.", &option);
	return 0;
}
