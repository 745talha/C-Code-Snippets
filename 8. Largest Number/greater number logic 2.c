#include<stdio.h>
#include<math.h>
int main()
{
	int n1,n2;
	printf("Enter first number : ");
	scanf("%d",&n1);
	printf("Enter second number : ");
	scanf("%d",&n2);
	int res = ((n1+n2) + abs(n1-n2))/2;
	printf("Greater number is : %d",res);
	return 0;
}
