# include <stdlib.h>
#include <stdio.h>

int main()
{
	//referencing and dereferencing ın pointers
	
	int age = 30;
	int *pAge = &age;
	
	printf("\n %d is being stored in %p adress",*pAge,pAge);//First variable is deferencing smaple the second one is referencing
	
	return 0;
}
