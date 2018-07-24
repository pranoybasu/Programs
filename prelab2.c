#include<stdio.h>
main()
{
	int n,i;
	printf("\n Enter the Limit:");
	scanf("%d",&n);
	char item_char[n];
	int quantity[n];
	double price[n];
	double price_per_prod[n];
	printf("\n Enter the items:");
	for(i=0;i<n;i++)
	{
		printf("\n Enter the Characters:");
		scanf("\n %c",&item_char[i]);
		printf("\n Enter the quantity:");
		scanf("\n %d",&quantity[i]);
		printf("\n Enter the price:");
		scanf("\n %f",&price[i]);
		fflush(stdin);
	}
	//Finding out the price of each product
	for(i=0;i<n;i++)
	{
		price_per_prod[i]=quantity[i]*price[i];
	}
	// Finding the total price
	int a;
	a=0;
	for(i=0;i<n;i++)
	{
		a+=price_per_prod[i];
	}
	//Printing all
	for(i=0;i<n;i++)
	{
		printf("\n Characters \t\t quantity \t\t price \t\t total price");
		printf("\n %c \t\t %d \t\t %f \t\t %d",item_char[i],quantity[i],price[i],price_per_prod[i]);
	}
	printf("\n Grand Total:%d",a);
	getch();
}
