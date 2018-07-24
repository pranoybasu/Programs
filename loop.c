#include <stdio.h>
int main()
{
	int n,i=0,j;
	printf("Enter the limit : \n");
	scanf("%d",&n);
	printf("Table of three:\n");
	while(i<=n)
	{
		j=i*3;
		printf("3 * %d =",i);
		printf("%d \n",j);
		i++;
	}
	getch();
}
