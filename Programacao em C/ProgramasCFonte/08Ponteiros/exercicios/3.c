#include <stdio.h>

int main() {
	int var1, var2;

	printf("Digite o valor da primeira variável: ");
	fflush(stdout);
	scanf("%d", &var1);

	printf("Digite o valor da segunda variável: ");
	fflush(stdout);
	scanf("%d", &var2);

	if(&var1 > &var2) {
		printf("A variável com maior endereço armazena o valor %d", var1);
	} else {
		printf("A variável com maior endereço armazena o valor %d", var2);
	}

	return 0;
}
