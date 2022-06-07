#include <stdio.h>

int main() {
	FILE *arq;
	int num, resultado, soma = 0;

	arq = fopen("arquivo.txt", "r");

	if (arq) {
		while (!feof(arq)) {
			resultado = fscanf(arq, "%d", &num);
			printf("num = %d, resultado = %d\n", num, resultado);
			if (resultado == 1) {
				soma += num;
			}
		}
	} else {
		printf("Não achei o arquivo");
	}

	printf("A soma dos números é %d", soma);
	fclose(arq);
	return 0;
}
