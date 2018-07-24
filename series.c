#include<stdio.h>
#include<math.h>
main()
{
	int i,j,n,x,fact=1;
	float power=0.0,sum=0.0;
	printf("Enter the Limit:");
	scanf("%d",&n);
	printf("Enter the value of x:");
	scanf("%d",&x);
	//printf("%f",x);
	printf("\n The series is ((x^0)/0!)+((x^2)/2!)+((x^4)/4!)+........");
	fflush(stdin);
	for(i=2;i<=n;i+=2)
	{
		printf("f1");
		for(j=i;j>=1;j--)
		{
			fact=fact*j;
			printf("\n %d",fact);
		}
		power=(float)pow(x,i);
		sum=sum+(power/(float)fact);
		printf("\n .");
	}
	printf("\n The sum of the series is: %f",sum);
	getch();
}
