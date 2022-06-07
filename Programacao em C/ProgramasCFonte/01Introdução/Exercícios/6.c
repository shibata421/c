#include <stdio.h>

int main(){
	float celcius, fahrenheit;

	printf("Digite uma temperatura em Celcius ");
	fflush(stdout);
	scanf("%f", &celcius);

	fahrenheit = celcius * (9.0 / 5.0) + 32.0;
	printf("O equivalente em Fahrenheit é %f", fahrenheit);

	return 0;
}
