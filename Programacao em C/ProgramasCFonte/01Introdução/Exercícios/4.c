#include <stdio.h>

int main(){
	int a;

	printf("Digite um número e você receberá o quadrado dele ");
	fflush(stdout);
	scanf("%d", &a);

	int result = a * a;
	printf("O quadrado de %d é %d", a, result);
	return 0;
}
