#include <stdio.h>
#include <string.h>

struct st_sluno {
	char matricula[10];
	char nome[100];
	char curso[50];
	int ano_nascimento;
} alunos[5];

int main() {
	// struct st_aluno alunos[5]

	for (int i = 0; i < 5; i++) {
		printf("Informe a matrícula do aluno: ");
		fflush(stdout);
		fgets(alunos[i].matricula, 10, stdin);

		printf("Informe o nome do aluno: ");
		fflush(stdout);
		fgets(alunos[i].nome, 100, stdin);

		printf("Informe o curso do aluno: ");
		fflush(stdout);
		fgets(alunos[i].curso, 50, stdin);

		printf("Informe o ano de nascimento do aluno: ");
		fflush(stdout);
		scanf("%d", &alunos[i].ano_nascimento);
		getchar();
	}

	for (int i = 0; i < 5; i++) {
		printf("------Dados do aluno-----------\n");
		printf("Matrícula: %s\n", alunos[i].matricula);
		printf("Nome: %s\n", alunos[i].nome);
		printf("Curso: %s\n", alunos[i].curso);
		printf("Ano de Nascimento: %d\n", alunos[i].ano_nascimento);
	}

	return 0;
}
