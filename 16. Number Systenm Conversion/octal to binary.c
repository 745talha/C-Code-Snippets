#include<stdio.h>
int OctalToBinary(int octalnum);
int main()
{
	int octalnum;
	printf("Enter Octal number : ");
	scanf("%d",&octalnum);
	printf("Binary number : %d",OctalToBinary(octalnum));
}
int OctalToBinary(int octalnum)
{
	int decimalnum=0,binarynum=0,i=1;
	while(octalnum != 0)
	{
		decimalnum +=(octalnum % 10) * i;
		i=i*8;
		octalnum /= 10;
	}
	i=1;
	while(decimalnum != 0)
	{
		binarynum +=(decimalnum % 2) * i;
		decimalnum /=2;
		i *= 10;
	}
	return binarynum;
}
