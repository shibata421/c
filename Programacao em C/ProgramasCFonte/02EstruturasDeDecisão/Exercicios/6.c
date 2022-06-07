#include <stdio.h>

int main() {
	int a, b, result;

	printf("Digite o primeiro número: ");
	fflush(stdout);
	scanf("%d", &a);

	printf("Digite o segundo número: ");
	fflush(stdout);
	scanf("%d", &b);

	if (a > b) {
		printf("O maior número é %d", a);
		result = a - b;
	} else if (b > a) {
		printf("O maior número é %d", b);
		result = b - a;
	} else {
		printf("Os números são iguais");
		result = b - a;
	}

	printf("\nA diferença entres os dois números é %d", result);

	return 0;
}
