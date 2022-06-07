#include <stdio.h>
#include "pi.h"

/* ifndef - Diretiva de compila��o
 * "if not defined": procura a defini��o em outro arquivo incluido se a constante existe
 * se n�o existir, use o que est� definido abaixo
 */
#ifndef PI
	#define PI 3.0
#endif

int main() {

	int valor = 5;

	printf("O valor � %d\n", valor);
	printf("O valor de pi � %.2f", PI);

	return 0;
}
