#include <stdio.h>

int main() {
	int var1, var2;
	printf("O endereço de var1 é %p\n", &var1);
	printf("O endereço de var2 é %p\n", &var2);

	if(&var1 > &var2){
		printf("O maior endereço é o de var1");
	} else {
		printf("O maior endereço é o de var2");

	}
	return 0;
}
