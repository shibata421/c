#include <stdio.h>
#include <math.h>

int main() {
	double num, result;

	printf("Digite um n�mero: ");
	fflush(stdout);
	scanf("%lf", &num);

	if (num >= 0) {
		result = pow(num, 2);
		printf("O quadrado de %lf � %lf\n", num, result);

		result = sqrt(num);
		printf("A raiz quadrada de %lf � %lf", num, result);
	}
	return 0;
}
