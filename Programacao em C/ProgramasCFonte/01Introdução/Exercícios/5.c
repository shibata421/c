#include <stdio.h>

int main(){
	float f;

	printf("Digite um valor real e nós te dares um quinto dele de volta ");
	fflush(stdout);
	scanf("%f", &f);

	float result = f / 5.0;
	printf("O resultado é %f", result);
	return 0;
}
