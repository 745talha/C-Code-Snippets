#include<stdio.h>
int main()
{
	int dividend,divisor,remainder;
	printf("Enter dividend = ");
	scanf("%d",&dividend);
	printf("Enter divisor = ");
	scanf("%d",&divisor);
	remainder = dividend % divisor;
	printf("Remainder is %d",remainder);
	return 0;
}
