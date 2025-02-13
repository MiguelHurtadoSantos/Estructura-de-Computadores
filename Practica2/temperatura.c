#include <stdio.h>
int main() {
	float celsius, farenheit;
	printf("Dame un nº \n");
	scanf("%f", &celsius);
	farenheit = ( celsius * 9 / 5 ) + 32;
	printf("(%.2f * 9 / 5) + 32 = %.2f \n", celsius, farenheit);
	return 0;
}
