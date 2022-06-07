#include <stdio.h>

int main() {
	char nome[3][50];
	for (int i = 0; i < 3; i++) {
		printf("Qual é o seu nome? ");
		fflush(stdout);
		gets(nome[i]);
		printf("Olá, %s\n", nome[i]);
	}

	char letras[26];
	for (int i = 97; i <= 122; i++) {
		letras[i - 97] = i;
		printf("%c == %d\n", letras[i - 97], letras[i - 97]);
	}
	return 0;
}
