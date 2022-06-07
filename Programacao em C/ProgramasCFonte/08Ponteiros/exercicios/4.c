#include <stdio.h>

void inverter_valores(int* a, int* b){
	int aux = *a;
	*a = *b;
	*b = aux;
}

int main() {
	int var1, var2;

	printf("Digite o um n�mero: ");
	fflush(stdout);
	scanf("%d", &var1);

	printf("Digite outro n�mero: ");
	fflush(stdout);
	scanf("%d", &var2);

	printf("Antes de trocar, var1 = %d, var2 = %d\n", var1, var2);

	inverter_valores(&var1, &var2);
	printf("Depois de trocar, var1 = %d, var2 = %d", var1, var2);

	return 0;
}
