#include <stdio.h>

int main() {
	int var1, var2;

	printf("Digite o valor da primeira vari�vel: ");
	fflush(stdout);
	scanf("%d", &var1);

	printf("Digite o valor da segunda vari�vel: ");
	fflush(stdout);
	scanf("%d", &var2);

	if(&var1 > &var2) {
		printf("A vari�vel com maior endere�o armazena o valor %d", var1);
	} else {
		printf("A vari�vel com maior endere�o armazena o valor %d", var2);
	}

	return 0;
}
