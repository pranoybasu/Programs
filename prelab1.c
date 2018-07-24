#include<stdio.h>
main()
{
	int n,i;
	printf("\n Enter the limit:");
	scanf("\n %d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("\n Enter the number :");
		scanf("\n %d",&arr[i]);
	}
	int a;
	a=0;
	for(i=0;i<n;i++)
	{
		a=a+arr[i];
	}
	printf("\n The sum of n numbers is: %d",a);
	getch();
}
