#include<stdio.h>
int main()
{
	int n1,n2;
	float quot;
	printf("Enter dividend = ");
	scanf("%d",&n1);
	printf("Enter divisor = ");
	scanf("%d",&n2);
	quot = n1/n2;
	printf("Quotient = %.4f ",quot);
	return 0;
}
