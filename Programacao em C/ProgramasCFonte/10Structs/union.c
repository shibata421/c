#include <stdio.h>
#include <string.h>

//A union separa e utiliza apenas o espa?o da maior vari?vel.
union pessoa{
	char nome[100];
	int idade;
};

int main() {

	int numero = 42;
	float nota = 7.9;
	char letra = 'd';
	double outraNota = 19.4;

	printf("A vari?vel 'n?mero' tem valor %d e ocupa %u bytes em mem?ria\n",
			numero, sizeof(numero));
	printf("A vari?vel 'nota' tem valor %.2f e ocupa %u bytes em mem?ria\n",
			nota, sizeof(nota));
	printf("A vari?vel 'letra' tem valor %c e ocupa %u bytes em mem?ria\n",
			letra, sizeof(letra));
	printf(
			"A vari?vel 'outraNota' tem valor %.2lf e ocupa %u bytes em mem?ria\n",
			outraNota, sizeof(outraNota));

	union pessoa pes;

	strcpy(pes.nome, "Jo?o Pessoa");
	printf("Dados de %s\n", pes.nome);

	pes.idade = 39;
	printf("Ela tem %d anos\n", pes.idade);
	printf("Dados de %s ap?s atribuir idade\n", pes.nome);

	printf("A vari?vel pes est? ocupando %u bytes em mem?ria", sizeof(pes));

	return 0;
}
