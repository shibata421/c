#include <stdio.h>
#include "pi.h"

/* ifdef - Diretiva de compilação
 * "if defined": procura a definição da constante
 * se existir, faça o procedimento
 */

int main() {

	int valor = 5;

	printf("O valor é %d\n", valor);

#ifdef PI
	printf("O valor de PI é %.2f\n", PI);
#endif

	return 0;
}
