#include <stdio.h>

int main() {
	double salario, valor;

	printf("Digite o valor do sal�rio: ");
	fflush(stdout);
	scanf("%lf", &salario);

	printf("Digite o valor da presta��o do empr�stimo: ");
	fflush(stdout);
	scanf("%lf", &valor);

	if (valor > salario * 0.2) {
		printf("Empr�stimo n�o concedido");
	} else {
		printf("Empr�stimo concedido");
	}
}
