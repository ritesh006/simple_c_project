#include<stdio.h>


int main()
{

	int r, s=0, n;

	printf("Enter number: ");
	scanf("%d",&n);


	while(n)
	{
		r = n % 10;
		s = s + r;
		n = n / 10;

	}
	
	printf("Your sum is %d ",s);


	return 0;

}
