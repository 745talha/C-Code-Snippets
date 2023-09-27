#include<stdio.h>
int main()
{
	int num,fact;
	printf("Enter number : ");
	scanf("%d",&num);
	for(fact=1;num>1;num--)
	{
		fact=fact*num;
	}
	printf("Factorial of number is : %d",fact);
	return 0;
}
