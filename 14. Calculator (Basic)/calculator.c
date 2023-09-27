#include<stdio.h>
int main()
{
	float n1,n2,res;
	char op;
	printf("Enter first number : ");
	scanf("%f",&n1);
	printf("Enter operation : ");
	scanf(" %c",&op);
	printf("Enter second number : ");
	scanf("%f",&n2);
	switch(op)
	{
		case '+':
			res=n1+n2;
			printf("Result  : %.4f",res);
			break;
		case '-':
			res=n1-n2;
			printf("Result : %.4f",res);
			break;
		case '*':
			res=n1*n2;
			printf("Result : %.4f",res);
			break;
		case '/':
			res=n1/n2;
			printf("Result : %.4f",res);
	}
	return 0;
}
