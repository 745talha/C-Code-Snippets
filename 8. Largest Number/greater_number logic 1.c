#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter first number : ");
	scanf("%d",&n1);
	printf("Enter second number : ");
	scanf("%d",&n2);
	int res = n1*((n1/n2)>0 ? 1:0) + n2*((n2/n1)>0 ? 1:0);
	printf("Greater number is : %d",res);
	return 0;
}
