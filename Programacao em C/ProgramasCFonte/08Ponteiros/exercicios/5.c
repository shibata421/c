#include <stdio.h>

void colocar_o_maior_na_primeira_variavel(int *var1, int *var2){
	if(*var2 > *var1){
		int aux = *var1;
		*var1 = *var2;
		*var2 = aux;
	}
}

int main() {
	int var1, var2;

	printf("Digite o valor da primeira variável: ");
	fflush(stdout);
	scanf("%d", &var1);

	printf("Digite o valor da segunda variável: ");
	fflush(stdout);
	scanf("%d", &var2);

	printf("Antes de mudar, var1 = %d, var2 = %d\n", var1, var2);

	colocar_o_maior_na_primeira_variavel(&var1, &var2);
	printf("Depois de mudar, var1 = %d, var2 = %d", var1, var2);

	return 0;
}
