#include <stdio.h>

int main()
{
	char first[] = "I would like to go ";
	char second[] = "from here to there\n";
    char buffer[strlen(first) + strlen(second) + 1];

    strcpy(buffer, first);
    strcat(buffer, second);
	// printf("%s\n",first+second);
	puts(buffer);

	return(0);
}

