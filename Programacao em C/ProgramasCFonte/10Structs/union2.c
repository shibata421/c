#include <stdio.h>
#include <string.h>

//A union separa e utiliza apenas o espa�o da maior vari�vel.
union numero{
	int num1, num2, num3, num4, num5;
}n;

int main() {
	n.num1 = 1;
	printf("O valor de num1 � %d\n", n.num1);
	n.num2 = 3;
	printf("O valor de num2 � %d\n", n.num2);
	n.num3 = 5;
	printf("O valor de num3 � %d\n", n.num3);
	n.num4 = 7;
	printf("O valor de num4 � %d\n", n.num4);
	n.num5 = 9;
	printf("O valor de num5 � %d\n", n.num5);

	printf("O valor de num1 � %d\n", n.num1);
	printf("O valor de num2 � %d\n", n.num2);
	printf("O valor de num3 � %d\n", n.num3);
	printf("O valor de num4 � %d\n", n.num4);
	printf("O valor de num5 � %d\n", n.num5);

	printf("'n' est� ocupando %u bytes de mem�ria", sizeof(n));
	return 0;
}
