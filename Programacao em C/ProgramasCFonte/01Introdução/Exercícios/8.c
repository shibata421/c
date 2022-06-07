#include <stdio.h>

int main(){
	float celcius, kelvin;

	printf("Digite uma temperatura em Kelvin ");
	fflush(stdout);
	scanf("%f", &kelvin);

	celcius = kelvin - 273.15;
	printf("O equivalente em Celcius é %f", celcius);

	return 0;
}
