#include <stdio.h>
int main() {
	float km, millas, pies, yardas;
	printf("Escribe un número: \n");
	scanf("%f", &km);
	millas = km / 1.60;
	pies = km * 100000 / 30.48;
	yardas = km * 100000 / 91.44;
	printf("Las millas son: %f \nLas yardas son: %f \nLos pies son: %f \nFin de algoritmo\n", millas, yardas, pies);
	return 0;
}
