#include <stdio.h>

int main() {
	int idade;
	printf("Qual � a sua idade? ");
	fflush(stdout);
	scanf("%d", &idade);

	if (idade < 18) {
		printf("Menor de idade");
	} else if (idade < 60) {
		printf("Maior de idade");
	} else {
		printf("Idoso");
	}

	printf("\nSua idade � %d", idade);
	return 0;
}
