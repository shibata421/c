#include <stdio.h>
void incrementa(int* valor){
	printf("Antes de incrementar. \n");
	printf("O contador vale %d\n", (*valor)++);
	printf("O endere�o de mem�ria � %p\n", valor);

	printf("Depois de incrementar. \n");
	printf("O contador vale %d\n", (*valor));
	printf("O endere�o de mem�ria � %p\n", valor);
}

int main () {
	int contador = 10;

	printf("O contador vale %d\n", contador);
	printf("O endere�o de mem�ria � %p\n", &contador);

	incrementa(&contador);

	printf("Depois de incrementar.\n");
	printf("O contador vale %d\n", contador);
	printf("O endere�o de mem�ria � %p\n", &contador);
	return 0;
}
