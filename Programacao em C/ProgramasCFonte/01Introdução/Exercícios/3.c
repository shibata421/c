#include <stdio.h>

int main(){
	int a, b, c;

	printf("Digite o primeiro valor:");
	fflush(stdout);
	scanf("%d", &a);

	printf("Digite o segundo valor:");
	fflush(stdout);
	scanf("%d", &b);

	printf("Digite o terceiro valor:");
	fflush(stdout);
	scanf("%d", &c);

	int sum = a + b + c;
	printf("A soma dos valores é %d", sum);
	return 0;
}
