#include<stdio.h>
int main()
{
	long int binnum;
	int i=1,j=0,rem,decnum =0;
	printf("Enter Binary number : ");
	scanf("%ld",&binnum);
	while(binnum>0)
	{
		rem = binnum%2;
		decnum = decnum + rem*i;
		i = i*2;
		binnum = binnum/10;
	}
	printf("Binary to decimal : %d",decnum);
	return 0;
}
