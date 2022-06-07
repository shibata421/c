#include <stdio.h>

int main() {
	int a, b;

	printf("Digite o primeiro número: ");
	fflush(stdout);
	scanf("%d", &a);

	printf("Digite o segundo número: ");
	fflush(stdout);
	scanf("%d", &b);

	if (a > b) {
		printf("O maior número é %d", a);
	} else if (b > a) {
		printf("O maior número é %d", b);
	} else {
		printf("Os números são iguais");
	}

	return 0;
}
