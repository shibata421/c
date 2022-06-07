#include <stdio.h>

int main(){
	float n;

	printf("Escreva um número real: ");
	fflush(stdout);
	scanf("%f", &n);
	printf("O número é %.2f", n);
	return 0;
}
