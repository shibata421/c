#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

/*
 * atof() converte string para double (ASCII to float)
 * atoi() converte string para int (ASCII to int)
 * atol() converte string para long (ASCII to long)
 *
 * rand() gera n?mero aleat?rio
 * srand() inicializa o gerador de n?meros aleat?rios
 *
 * malloc()
 * calloc()
 * free()
 * */

int main() {
	char valor_s[100];
	double valor_d;
	int valor_i;
	long int valor_l;

	strcpy(valor_s, "4.5");
	valor_d = atof(valor_s);
	printf("O valor ? %.2f\n", valor_d); // 4.50

	strcpy(valor_s, "4.a");
	valor_d = atof(valor_s);
	printf("O valor ? %.2f\n", valor_d); // 4.00 (ignora a letra)

	strcpy(valor_s, "5");
	valor_i = atoi(valor_s);
	printf("O valor ? %d\n", valor_i); // 5

	strcpy(valor_s, "a");
	valor_i = atoi(valor_s);
	printf("O valor ? %d\n", valor_i); // 0 (ignora a letra)

	strcpy(valor_s, "123456789");
	valor_l = atol(valor_s);
	printf("O valor ? %ld\n", valor_l); // 0 (ignora a letra)

	time_t t;
	srand((unsigned) time(&t));
	for(int i = 0; i < 6; i++){
		printf("%d\n", rand() % 61);
	}

//	printf("%d", RAND_MAX);

	return 0;
}
