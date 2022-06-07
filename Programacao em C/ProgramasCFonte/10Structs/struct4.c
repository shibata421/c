#include <stdio.h>
#include <string.h>

struct st_contato {
	char nome[100];
	int ano_nascimento;
	char telefone[20];
	char email[100];
};

struct st_agenda {
	struct st_contato contatos[100];
}agenda;

int main() {
	for (int i = 0; i < 1; i++) {
		printf("Informe o nome: ");
		fflush(stdout);
		fgets(agenda.contatos[i].nome, 100, stdin);

		printf("Informe o ano de nascimento: ");
		fflush(stdout);
		scanf("%d", &agenda.contatos[i].ano_nascimento);
		getchar();

		printf("Informe o telefone: ");
		fflush(stdout);
		fgets(agenda.contatos[i].telefone, 20, stdin);

		printf("Informe o e-mail: ");
		fflush(stdout);
		fgets(agenda.contatos[i].email, 100, stdin);
	}

	for (int i = 0; i < 1; i++) {
		printf("------Dados do contato-----------\n");
		printf("Nome: %s\n", strtok(agenda.contatos[i].nome, "\n"));
		printf("Ano de Nascimento: %d\n", agenda.contatos[i].ano_nascimento);
		printf("Telefone: %s\n", strtok(agenda.contatos[i].telefone, "\n"));
		printf("E-mail: %s\n", strtok(agenda.contatos[i].email, "\n"));
	}

	return 0;
}
