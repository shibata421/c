#include <stdio.h>

int main() {
	int a, b;

	printf("Digite o primeiro n�mero: ");
	fflush(stdout);
	scanf("%d", &a);

	printf("Digite o segundo n�mero: ");
	fflush(stdout);
	scanf("%d", &b);

	if (a > b) {
		printf("O maior n�mero � %d", a);
	} else if (b > a) {
		printf("O maior n�mero � %d", b);
	} else {
		printf("Os n�meros s�o iguais");
	}

	return 0;
}
