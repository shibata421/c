#include <stdio.h>

int main() {
	double altura, pesoIdeal;
	char genero;

	printf("Digite a altura da pessoa: ");
	fflush(stdout);
	scanf("%lf", &altura);
	getchar();

	printf("Digite o g�nero da pessoa (H/M): ");
	fflush(stdout);
	scanf("%c", &genero);

	if (genero == 'M') {
		pesoIdeal = 62.1 * altura - 44.7;
	} else if (genero == 'H') {
		pesoIdeal = 72.7 * altura - 58.0;
	} else {
		printf("G�nero inv�lido");
		return 0;
	}

	printf("O peso ideal da pessoa � %lf", pesoIdeal);
	return 0;
}
