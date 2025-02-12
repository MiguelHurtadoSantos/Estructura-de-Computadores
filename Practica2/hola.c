#include <stdio.h>
int main() {
	int a, b, suma;
	printf("Dame un nº \n");
	scanf("%d",&a);
	printf("Dame otro nº \n");
	scanf("%d",&b);
	suma = a+b;
	printf("%d + %d = %d \n", a, b, suma);
	return 0;
}
