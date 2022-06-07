#include <stdio.h>

int main(){
	float kmh, ms;

	printf("Digite uma velocidade em km/h ");
	fflush(stdout);
	scanf("%f", &kmh);

	ms = kmh * 1000 / 3600;
	printf("O equivalente em m/s é %f", ms);
	return 0;
}
