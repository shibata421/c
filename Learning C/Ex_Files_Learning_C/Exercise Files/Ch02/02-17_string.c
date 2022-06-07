#include <stdio.h>

int main()
{
	char password[] = "fuzzy\t\"\nwuzzy";

	printf("The password is %s\n",password);

	return(0);
}

