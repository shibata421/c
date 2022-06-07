#include <stdio.h>

int positivo_ou_negativo(int num) {
	if (num > 0) {
		return 1;
	} else if (num < 0) {
		return -1;
	} else {
		return 0;
	}
}
int main() {

	int num = 0;
	printf("%d", positivo_ou_negativo(num));
	return 0;
}
