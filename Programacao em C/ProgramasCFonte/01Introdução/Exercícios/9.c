#include <stdio.h>

int main(){
	float celcius, kelvin;

	printf("Digite uma temperatura em Celcius ");
	fflush(stdout);
	scanf("%f", &celcius);

	kelvin = celcius + 273.15;
	printf("O equivalente em Kelvin é %f", kelvin);

	return 0;
}
