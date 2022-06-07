#include <stdio.h>
#include <math.h>

int main() {
	double num, result;

	printf("Digite um número: ");
	fflush(stdout);
	scanf("%lf", &num);

	if (num >= 0) {
		result = pow(num, 2);
		printf("O quadrado de %lf é %lf\n", num, result);

		result = sqrt(num);
		printf("A raiz quadrada de %lf é %lf", num, result);
	}
	return 0;
}
