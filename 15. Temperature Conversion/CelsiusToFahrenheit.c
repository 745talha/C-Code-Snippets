#include<stdio.h>
int main()
{
	float c,f;
	printf("Enter temperature in Celsius : ");
	scanf("%f",&c);
	f=(c*9/5)+32;
	printf("%.4f C = %.4f F",c,f);
	return 0;
}
