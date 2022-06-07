#include <stdio.h>

// Protótipo de função
/*
 * útil para quando há necessidade de importar funções de outros
 * arquivos
 * ou
 * quando uma função interna necessita de outra função que só
 * aparece depois
 * */

int soma(int x, int y);
void mensagem();

int main() {
	int n1, n2;

	mensagem();

	printf("Informe o primeiro número: ");
	fflush(stdout);
	scanf("%d", &n1);

	printf("Informe o segundo número: ");
	fflush(stdout);
	scanf("%d", &n2);

	printf("A soma de %d com %d é %d", n1, n2, soma(n1, n2));

	return 0;
}

int soma(int x, int y) {
	return x + y;
}

void mensagem() {
	printf("Oi\n");
}
