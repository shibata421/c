#include <stdio.h>

void exibir_data_por_extenso(int dia, int mes, int ano) {
	switch (mes) {
	case 1:
		printf("%d de janeiro de %d", dia, ano);
		break;
	case 2:
		printf("%d de fevereiro de %d", dia, ano);
		break;
	case 3:
		printf("%d de março de %d", dia, ano);
		break;
	case 4:
		printf("%d de abril de %d", dia, ano);
		break;
	case 5:
		printf("%d de maio de %d", dia, ano);
		break;
	case 6:
		printf("%d de junho de %d", dia, ano);
		break;
	case 7:
		printf("%d de julho de %d", dia, ano);
		break;
	case 8:
		printf("%d de agosto de %d", dia, ano);
		break;
	case 9:
		printf("%d de setembro de %d", dia, ano);
		break;
	case 10:
		printf("%d de outubro de %d", dia, ano);
		break;
	case 11:
		printf("%d de novembro de %d", dia, ano);
		break;
	case 12:
		printf("%d de dezembro de %d", dia, ano);
		break;
	default:
		printf("mês inválido");
	}

}

int main() {
	exibir_data_por_extenso(1, 11, 1990);
	return 0;
}
