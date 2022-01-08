# include <stdlib.h>
#include <stdio.h>

int main()
{
	//referencing and dereferencing ýn pointers
	
	int age = 30;
	int *pAge = &age;
	
	printf("\n %d is being stored in %p adress",*pAge,pAge);//First variable is deferencing sample the second one is redeferencing
	
	return 0;
}
