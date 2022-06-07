#include <stdio.h>

int testarNota(double nota){
	if(nota < 0.0 || nota > 10.0){
		printf("Nota inválida");
		return 0;
	} else {
		return 1;
	}
}

int main() {
	double nota1, nota2;

	printf("Digite a primeira nota: ");
	fflush(stdout);
	scanf("%lf", &nota1);

	if(testarNota(nota1) == 0){
		return 0;
	}

	printf("Digite a segunda nota: ");
	fflush(stdout);
	scanf("%lf", &nota2);

	if(testarNota(nota2) == 0){
		return 0;
	}

	double media = (nota1 + nota2) / 2.0;
	printf("A média das notas é %lf", media);

	return 0;
}

