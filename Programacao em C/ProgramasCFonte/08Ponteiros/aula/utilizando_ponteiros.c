#include <stdio.h>

int main(){
	int n;
	int* p;

	printf("Informe um n�mero: ");
	fflush(stdout);
	scanf("%d", &n);

	p = &n;

	printf("O n�mero informado foi %d\n", n);

	printf("O endere�o de mem�ria � %p\n", &n);

	printf("O endere�o do ponteiro � %p", p);
	return 0;
}
