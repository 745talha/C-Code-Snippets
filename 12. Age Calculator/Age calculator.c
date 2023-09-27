#include<stdio.h>
int main()
{
	int curDate,curMonth,curYear,birDate,birMonth,birYear;
	printf("Enter Current Date : ");
	scanf("%d",&curDate);
	printf("Enter Current Month : ");
	scanf("%d",&curMonth);
	printf("Enter Current Year : ");
	scanf("%d",&curYear);
	printf("Enter Birth date : ");
	scanf("%d",&birDate);
	printf("Enter Birth month : ");
	scanf("%d",&birMonth);
	printf("Enter Birth year : ");
	scanf("%d",&birYear);
	int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(birDate>curDate)
	{
		curDate =curDate +month[birMonth-1];
		curMonth = curMonth-1;
	}
	if(birMonth>curMonth)
	{
		curYear =curYear-1;
		curMonth =curMonth+12;
	}
	int calDate= curDate-birDate;
	int calMonth= curMonth-birMonth;
	int calYear = curYear-birYear;
	printf("Present Age\n");
	printf("Year : %d\nMonth : %d\nDays : %d\n",calYear,calMonth,calDate);
	return 0;
}
