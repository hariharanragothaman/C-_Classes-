/*

	Explanation to the Program:
	Making a character pointer 'point' to an Integer 
	By tpecasting 
	2. Then actually trying to print the value of *ptr


	Thoughts: 

	Actually  *ptr will generally point to teh value of the variable/
	But here the change is due to the character pointer.


*/
#include <stdio.h>
int main()
{
	int a=320;     // Stores 2 bytes of Memory 
	char *ptr;
	ptr = (char*)&a;	// Bit Manipulation - Consideration of only first 8
	printf("\n%d\n",*ptr);
	return 0;
}

