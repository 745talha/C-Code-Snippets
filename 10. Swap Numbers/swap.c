#include<stdio.h>
int main()
{
	int n1,n2,temp;
	printf("Enter first number : ");
	scanf("%d",&n1);
	printf("Enter second number : ");
	scanf("%d",&n2);
	temp=n1;
	n1=n2;
	n2=temp;
	printf("After swap \n");
	printf("First number : %d",n1);
	printf("\nSecond number : %d",n2);
	return 0;
}
