#include<stdio.h>
int main()
{
	int y;
	printf("Enter year : ");
	scanf("%d",&y);
	if(y%4==0)
	{
		printf("Its a Leap year");
	}
	else
	{
		printf("Its common year");
	}
	return 0;
}
