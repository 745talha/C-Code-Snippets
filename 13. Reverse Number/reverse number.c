#include<stdio.h>
int main()
{
	int num,revnum=0,rem;
	printf("Enter an Integer : ");
	scanf("%d",&num);
	while(num !=0)
	{
		rem=num%10;
		revnum=revnum*10 + rem;
		num/=10;
	}
	printf("Reverse number : %d",revnum);
	return 0;
}
