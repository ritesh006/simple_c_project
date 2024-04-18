#include <stdio.h>


int main()
{

	int r=0, fact=1, n;



	printf("enter number: ");
	scanf("%d", &n);

	
	while(n)
	{
		fact = fact * n;
	       n--;	
	}

	printf("factorial is %d \n ",fact);

}
