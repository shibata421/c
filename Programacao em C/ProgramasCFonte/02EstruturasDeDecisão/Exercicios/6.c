#include <stdio.h>

int main() {
	int a, b, result;

	printf("Digite o primeiro n�mero: ");
	fflush(stdout);
	scanf("%d", &a);

	printf("Digite o segundo n�mero: ");
	fflush(stdout);
	scanf("%d", &b);

	if (a > b) {
		printf("O maior n�mero � %d", a);
		result = a - b;
	} else if (b > a) {
		printf("O maior n�mero � %d", b);
		result = b - a;
	} else {
		printf("Os n�meros s�o iguais");
		result = b - a;
	}

	printf("\nA diferen�a entres os dois n�meros � %d", result);

	return 0;
}
