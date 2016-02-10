#include <stdio.h>
int main()
{
	int i = 3;
	int *j;
	int **k;
	
	j = &i;
	k = &j;
	
	printf("\n");
	printf("%u %u %d",k,*k, **k);
	printf("\n");

	return 0;
}

