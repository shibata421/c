#include <stdio.h>
#include "pi.h"

/* ifdef - Diretiva de compila��o
 * "if defined": procura a defini��o da constante
 * se existir, fa�a o procedimento
 */

int main() {

	int valor = 5;

	printf("O valor � %d\n", valor);

#ifdef PI
	printf("O valor de PI � %.2f\n", PI);
#endif

	return 0;
}
