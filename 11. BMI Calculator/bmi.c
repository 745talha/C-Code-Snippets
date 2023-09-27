#include<stdio.h>
int main()
{
	float m,h,bmi;
	printf("Enter mass in kg : ");
	scanf("%f",&m);
	printf("Enter height in meter : ");
	scanf("%f",&h);
	bmi=m/(h*h);
	printf("Bmi = %.4f",bmi);
	return 0;
}
