#include <stdio.h>

int main(){
	float n;

	printf("Escreva um n�mero real: ");
	fflush(stdout);
	scanf("%f", &n);
	printf("O n�mero � %.2f", n);
	return 0;
}
