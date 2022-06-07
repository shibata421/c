#include <stdio.h>

int main() {
	double salario, valor;

	printf("Digite o valor do salário: ");
	fflush(stdout);
	scanf("%lf", &salario);

	printf("Digite o valor da prestação do empréstimo: ");
	fflush(stdout);
	scanf("%lf", &valor);

	if (valor > salario * 0.2) {
		printf("Empréstimo não concedido");
	} else {
		printf("Empréstimo concedido");
	}
}
