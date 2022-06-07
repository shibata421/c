#include <stdio.h>

int main() {
	char nome[50];
	printf("Qual é o seu nome? ");
	fflush(stdout);
	gets(nome);
	printf("Olá, %s\n", nome);

	char letras[26];
	for (int i = 97; i <= 122; i++) {
		letras[i - 97] = i;
		printf("%c == %d\n", letras[i - 97], letras[i - 97]);
	}

	int numeros[10];
	numeros[0] = 1;
	numeros[1] = 3;
	numeros[2] = 5;
	numeros[3] = 7;
	numeros[4] = 9;

	float valores[5];
	for (int i = 0; i < 5; i++) {
		valores[i] = numeros[i]/ 2.0;
		printf("%f\n", valores[i]);
	}

	return 0;
}
