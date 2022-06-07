#include <stdio.h>

int main(){
	int n;

	printf("Escreva um número inteiro: ");
	fflush(stdout);
	scanf("%d", &n);
	printf("O número é %d", n);
	return 0;
}
