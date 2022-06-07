#include <stdio.h>

int main()
{
	char name[15];		/* room for 14 characters */

	printf("Your name? ");
	scanf("%s",name); // don't use it for strings
	printf("You are %s.\n",name);

	return(0);
}

