#include <stdio.h>

int dobro(int num) {
	return num * 2;
}
int main() {
	int num;

	printf("Insira um n�mero: ");
	fflush(stdout);
	scanf("%d", &num);

	printf("O dobro desse n�mero � %d", dobro(num));
	return 0;
}
