#include<stdio.h>
int main()
{
	int i=1,decnum;
	long int binnum=0;
	printf("Enter decimal number : ");
	scanf("%d",&decnum);
	while(decnum>0)
	{
		binnum+=(decnum%2) * i;
		decnum/=2;
		i*=10;
	}
	printf("Binary number : %ld",binnum);
	return 0;
}
