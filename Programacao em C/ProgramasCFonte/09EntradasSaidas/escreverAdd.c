#include <stdio.h>

int main() {
	FILE *arq;
	char fruta[10];

	arq = fopen("frutas.txt", "a");

	if (arq) {
		do {
			printf("Informe uma fruta ou 0 para sair: \n");
			fflush(stdout);
			fgets(fruta, 10, stdin);
			if(fruta[0] != '0'){
				fputs(fruta, arq);
			}
		} while (fruta[0] != '0');
	} else {
		printf("Não foi possível criar o arquivo");
	}

	fclose(arq);
	return 0;
}
