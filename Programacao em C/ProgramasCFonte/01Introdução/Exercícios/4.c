#include <stdio.h>

int main(){
	int a;

	printf("Digite um n�mero e voc� receber� o quadrado dele ");
	fflush(stdout);
	scanf("%d", &a);

	int result = a * a;
	printf("O quadrado de %d � %d", a, result);
	return 0;
}
