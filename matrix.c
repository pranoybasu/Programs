#include<stdio.h>

main()
{
	int arr1[10][10];
	int arr2[10][10];
	int transpose[10][10];
	int i, j, k;
	
	int c1, c2, r1, r2;
	int sum;
		
	
	sum = 0;
	
	printf("\n Enter the number of rows    : ");
	scanf("%d", &r1);
	
	printf("\n Enter the number of columns : ");
	scanf("%d", &c1);
	
	printf("\n Enter the number of rows    : ");
	scanf("%d", &r2);
	
	printf("\n Enter the number of columns : ");
	scanf("%d", &c2);
	
	if((r1==r2==c1==c2)<0)
	{
		printf("\n Invalid Input.");
	}
	else
	{
	
	printf("\n Array 1");
	printf("\n");
	for(i = 0; i<r1; i++)
	{
		for(j = 0; j<c1; j++)
		{
			printf("\n Enter for arr1[%d][%d]:",i,j);
			scanf("%d", &arr1[i][j]);
		}		
	}
	
	printf("\n Array 2");
	printf("\n");
	
	for(i = 0; i<r2; i++)
	{
		for(j = 0; j<c2; j++)
		{
			printf("\n Enter for arr2[%d][%d]:",i,j);
			scanf("%d", &arr2[i][j]);
		}		
	}
	
	int choice;
	
	printf("\n Enter 1 for matrix multiplication:");
	printf("\n Enter 2 for transpose of matrix: \n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		
		case 1:
	
	if(c1 == r2)
	{
		for(i = 0; i<r1; i++)
		{
			for(j = 0; j<c2; j++)
			{
				for(k = 0; k<c2; k++)
				{
					sum = sum + arr1[j][k]*arr2[k][j]; 
				}
				printf(" %d", sum);
				sum = 0;
			}
			printf("\n");
		}
	}
	
	else
	{
		printf("\n Matrix mulitplication not possible");
	}
	
	getch();
	
	break;
	
	//Finding the transpose via first array.(arr1[10][10])
	
	case 2:
		
		if(c1>0)
		{
	
			for(i=0; i<r1; i++)
			{
		        for(j=0; j<c1; j++)
		        {
		            transpose[j][i] = arr1[i][j];
		        }
		    }
		        //printing the transpose
		    printf("\nTranspose of Matrix:\n");
		    for(i=0; i<c1; i++)
			{
		        for(j=0; j<r1; j++)
		        {
		            printf("%d  ",transpose[i][j]);
		            }
		            printf("\n");
		        }
		        getch();
		    }
		    else
		    {
		    	printf("\n Transpose of matrix not possible");
		    	getch();
			}
			 break;
        
        default:
		{
        	printf("\n Wrong choice!");
			break;
		}
	}
	}
}
