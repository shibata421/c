#include <stdio.h>

// Prot�tipo de fun��o
/*
 * �til para quando h� necessidade de importar fun��es de outros
 * arquivos
 * ou
 * quando uma fun��o interna necessita de outra fun��o que s�
 * aparece depois
 * */

int soma(int x, int y);
void mensagem();

int main() {
	int n1, n2;

	mensagem();

	printf("Informe o primeiro n�mero: ");
	fflush(stdout);
	scanf("%d", &n1);

	printf("Informe o segundo n�mero: ");
	fflush(stdout);
	scanf("%d", &n2);

	printf("A soma de %d com %d � %d", n1, n2, soma(n1, n2));

	return 0;
}

int soma(int x, int y) {
	return x + y;
}

void mensagem() {
	printf("Oi\n");
}
