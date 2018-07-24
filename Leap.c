#include<stdio.h>
main()
{
	int a;
	printf("Enter the year:");
	scanf("%d",&a);
	if(a%4==0)
	{
		printf("Leap Year");
	}
	else
	{
		printf("Not a leap year");
	}
	getch();
}
