#include<stdio.h>
int main()
{
	float f,c;
	printf("Enter temperature in Fahrenheit : ");
	scanf("%f",&f);
	c= (f-32)*5/9;
	printf("%.4f F = %.4f C",f,c);
	return 0;
}
