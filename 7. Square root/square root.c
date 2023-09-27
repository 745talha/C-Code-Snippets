#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	double sroot;
	printf("Enter a positive number : ");
	scanf("%d",&num);
	sroot = sqrt(num);
	printf("Square root of %d is : %.4lf",num,sroot);
	return 0;
}
