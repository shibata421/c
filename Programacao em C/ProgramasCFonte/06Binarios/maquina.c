#include <stdio.h>

int main() {
	int valor = 2;
	printf("Valor vale %d\n", valor);

	//deslocamento de bits para a esquerda
	valor = valor << 2;
	printf("Valor vale %d\n", valor);

	//deslocamento de bits para a direita
	valor = 2;
	valor = valor >> 1;
	printf("Valor vale %d\n", valor);

	// nega��o de valor
	valor = 2;
	valor = ~valor;
	printf("Valor vale %d\n", valor);
	return 0;
}
