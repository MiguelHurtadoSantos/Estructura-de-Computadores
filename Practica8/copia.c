#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int length;
	char *cadena;
	char *concat = "añadida";
	
	cadena = (char *)malloc(sizeof(char) * 100);
	printf("\n\nBienvenido!\nIntroduzca una cadena de caracteres y se analizará su\nlongitud, si es igual a la cadena 'compara', si se le concatena una\ncadena y la letra que ocupa en la posición 4.\n\nIntroduce la cadena: ");
	fgets(cadena, 100, stdin);
	
	//Medida de la cadena
	length = strlen(cadena) - 1;
	cadena[length] = '\0';
	printf("Longitud de la cadena: %d\n", length);
	
	//Comparación de la cadena
	if (strcmp(cadena, "compara\0") != 0) {
		printf("La cadena no es igual a 'compara'.\n");
	} 
	else {
		printf("La cadena es igual a 'compara'.\n");
	}
	
	//Concatenación con "añadida"
	printf("Con 'añadida' concatenada: ");
	printf(strcat(cadena, concat));
	printf("\n");
	
	//Letra en posición 4 (3 en el puntero)
	if (length > 3) {
		printf("La letra en la posición 4 es: %c\n\n", cadena[3]);
	} else {
		printf("La cadena es demasiado corta para mostrar la letra en la posición 4.\n\n");
	}
	
	return 0;
}
