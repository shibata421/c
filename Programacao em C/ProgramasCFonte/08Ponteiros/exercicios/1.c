#include <stdio.h>

int main() {
	int inteiro = 1;
	float real = 5.5;
	char caractere = 'H';

	int *p_inteiro = &inteiro;
	float *p_real = &real;
	char *p_caractere = &caractere;

	printf("Valores da vari�veis antes de trocar: %d, %.2f, %c\n", inteiro, real, caractere);

	*(p_inteiro) = 2;
	*(p_real) = 2.2;
	*(p_caractere) = 'M';
	printf("Valores da vari�veis depois de trocar: %d, %.2f, %c", inteiro, real, caractere);
	return 0;
}
