#include <stdio.h>

int main() {
	int num;

	printf("Digite um n�mero inteiro: ");
	fflush(stdout);
	scanf("%d", &num);

	if (num % 2 == 0) {
		printf("O n�mero � par");
	} else {
		printf("O n�mero � �mpar");
	}

	return 0;
}
