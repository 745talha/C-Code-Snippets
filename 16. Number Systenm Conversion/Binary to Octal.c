#include<stdio.h>
int BinaryToOctal(long int binnum);
int main()
{
	long int binnum;
	printf("Enter Binary number : ");
	scanf("%ld",&binnum);
	BinaryToOctal(binnum);
}
int BinaryToOctal(long int binnum)
{
	int octnum =0,decimalnum=0, i=1;
	while(binnum !=0)
	{
		decimalnum +=(binnum%10) * i;
		i=i*2;
		binnum/=10;
	}
	i=1;
	while(decimalnum !=0)
	{
		octnum +=(decimalnum %8) * i;
		decimalnum /= 8;
		i *=10;
	}
	printf("The Octal Value : %d",octnum);
	return 0;
}
