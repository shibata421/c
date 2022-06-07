#include <stdio.h>

int main() {
	int a;

	printf("Digite um valor para a: ");
	fflush(stdout);
	scanf("%d", &a);

	switch(a){
	case 1:
		printf("oi");
		break;
	case 2:
		printf("tchau");
		break;
	default:
		printf("default");
		break;
	}

	return 0;
}
