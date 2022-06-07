#include <stdio.h>

int dobro(int num) {
	return num * 2;
}
int main() {
	int num;

	printf("Insira um número: ");
	fflush(stdout);
	scanf("%d", &num);

	printf("O dobro desse número é %d", dobro(num));
	return 0;
}
