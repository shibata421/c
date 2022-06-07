#include <stdio.h>

int main() {
	FILE *arq;
	char nome[10], *resultado;

	arq = fopen("arquivo.txt", "r");

	if(arq){
		while(!feof(arq)){
			resultado = fgets(nome, 10, arq);
			printf("Resultado: %p\n", resultado);
			if(resultado){
				printf("%s", nome);
			}
		}
	} else {
		printf("Não achei o arquivo");
	}

	fclose(arq);

	return 0;
}
