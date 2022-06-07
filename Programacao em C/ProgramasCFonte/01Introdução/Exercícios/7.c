#include <stdio.h>

int main(){
	float celcius, fahrenheit;

	printf("Digite uma temperatura em Fahrenheit ");
	fflush(stdout);
	scanf("%f", &fahrenheit);

	celcius = (fahrenheit - 32.0) * (5.0 / 9.0);
	printf("O equivalente em Celcius é %f", celcius);

	return 0;
}
