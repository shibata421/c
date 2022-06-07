#include <stdio.h>

int main()
{
	int array[] = { 11, 13, 17, 19 };
	int x, *p;

	p = array;

	for(x=0;x<4;x++)
	{
		printf("Element %d: %d\n",x+1,*(p+x));
	}

	return(0);
}

