#include <stdio.h>
#include<string.h>
main()
{
	char str1[10];
	char str2[10];
	int i;
	int j;
	j=0;
	printf("Enter a string: \n");
	scanf("%s",&str1);
	for(i=10;i>0;i++)
	{
		arr2[j++]=arr1[i];
	}
	for(i=0;i<10;i++)
	{
		if(arr1[i]==arr2[i])
		{
			printf("\n Pallindrome!");
		}
	}
}
