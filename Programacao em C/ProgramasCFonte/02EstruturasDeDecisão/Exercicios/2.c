#include <stdio.h>
#include <math.h>

int main() {
	double num, result;

	printf("Digite um n�mero: ");
	fflush(stdout);
	scanf("%lf", &num);

	if(num >= 0 ){
		result = sqrt(num);
		printf("A raiz quadrada de %lf � %lf", num, result);
	} else {
		printf("N�mero negativo...");
	}

	return 0;
}
