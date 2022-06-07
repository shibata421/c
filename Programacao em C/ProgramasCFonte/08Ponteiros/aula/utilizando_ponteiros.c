#include <stdio.h>

int main(){
	int n;
	int* p;

	printf("Informe um número: ");
	fflush(stdout);
	scanf("%d", &n);

	p = &n;

	printf("O número informado foi %d\n", n);

	printf("O endereço de memória é %p\n", &n);

	printf("O endereço do ponteiro é %p", p);
	return 0;
}
