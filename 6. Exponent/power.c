#include<stdio.h>
#include<math.h>
int main()
{
	int base,exp;
	double result;
	printf("Enter base : ");
	scanf("%d",&base);
	printf("Enter exponent : ");
	scanf("%d",&exp);
	result = pow(base,exp);
	printf("Result : %.2lf",result);
	return 0;
}
