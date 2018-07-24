#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,z;
	printf("1.Logical And:");
	printf("2.Lgical OR:");
	printf("3.Bitwsie XOR:");
	printf("4.Bitwise OR:");
	sacnf("%d",&z);
	if(z==1)
	{
		printf("\n enter the numbers:");
		scanf("%d",&a);
		fflush(stdin);
		scanf("%d",&b);
		fflush(stdin);
		if(a>=0 && a<=10 && b>=0 && b<=10)
		{
			printf("The integers are between 0-10");
		}
		else if(a>=11 && a<=20 && b>=11 && b<=20)
		{
			printf("The integers are between 11-20");
		}
		else if(a>=21 && a<=30 && b>=21 && b<=30)
		{
			printf("The integers are between 21-30");
		}
		else
		{
			printf("Out of Scope");
		}
		getch();
	}
	if(z==2)
	{
		printf("\n enter the numbers:");
		scanf("%d",&a);
		fflush(stdin);
		scanf("%d",&b);
		fflush(stdin);
		if(a>=0 || a<=10 || b>=0 || b<=10)
		{
			printf("The integers are between 0-10");
		}
		else if(a>=11 || a<=20 || b>=11 || b<=20)
		{
			printf("The integers are between 11-20");
		}
		else if(a>=21 || a<=30 || b>=21 || b<=30)
		{
			printf("The integers are between 21-30");
		}
		else
		{
			printf("Out of Scope");
		}
		getch();
	}
	if(z==3)
	{
	}
}
