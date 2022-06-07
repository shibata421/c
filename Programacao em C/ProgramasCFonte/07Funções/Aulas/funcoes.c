#include <stdio.h>

void mensagem() {
	printf("Bem-vindo!");
}

int soma(int num1, int num2){
	return num1 + num2;
}

char retorna_char(char caractere){
	return caractere+1;
}

int main() {
	mensagem();
	int result = soma(1, 1);
	printf("%d", result);
	printf("%c", retorna_char('a'));
	return 0;
}
