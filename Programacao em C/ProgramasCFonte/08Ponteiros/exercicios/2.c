#include <stdio.h>

int main() {
	int var1, var2;
	printf("O endere�o de var1 � %p\n", &var1);
	printf("O endere�o de var2 � %p\n", &var2);

	if(&var1 > &var2){
		printf("O maior endere�o � o de var1");
	} else {
		printf("O maior endere�o � o de var2");

	}
	return 0;
}
