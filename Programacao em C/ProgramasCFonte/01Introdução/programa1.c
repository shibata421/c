//Aula sobre variáveis

#include <stdio.h>

int main() {
	int idade;
//	int idade2 = 1;

	printf("Qual é a sua idade? ");
	fflush(stdout);
	scanf("%d", &idade);
	printf("A sua idade é %d\n", idade);
//	printf("%d", idade2);
	return 0;
}
