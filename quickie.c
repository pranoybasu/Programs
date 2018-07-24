#include<stdio.h>
main()
{
	int nn = 0, fn, r, i, cn = 0, fh = 0;
	printf("Enter the number (below 10000):");
	scanf("%d", &fn);
	if(fn == 10)
	{
		printf(" ten");
		exit(0);
	}
	for(i = 1; fn>0; i++)
	{
		
		r  = fn % 10;
		nn = (nn*10) + r;
		fn = fn / 10;
		cn++;
				
	}	
	for(i = 1; nn>0; i++)
	{	
		r = nn % 10;		
		printf("%d",r);
		if(cn == 4)
		{
			switch(r)
			{
					case 1:
						printf(" one");
						break;
					case 2:
						printf(" two");
						break;
					case 3:
						printf(" three");
						break;
					case 4:
						printf(" four");
						break;
					case 5:
						printf(" five");
						break;
					case 6:
						printf(" six");
						break;
					case 7:
						printf(" seven");
						break;
					case 8:
						printf(" eight");
						break;
					case 9:
						printf(" nine");
						break;				
					}
			printf(" thousand");
		}
		if(cn == 3)
		{
			switch(r)
			{
					case 0:
						printf(" and");
						fh++;
						break;
					case 1:
						printf(" one");
						break;
					case 2:
						printf(" two");
						break;
					case 3:
						printf(" three");
						break;
					case 4:
						printf(" four");
						break;
					case 5:
						printf(" five");
						break;
					case 6:
						printf(" six");
						break;
					case 7:
						printf(" seven");
						break;
					case 8:
						printf(" eight");
						break;
					case 9:
						printf(" nine");
						break;				
					}
			if(fh != 1)
			{
				printf(" hundred and");
			}
			}
		if(cn == 2)
		{
			if(r>=2 && r<=9)
			{
				switch(r)
				{
					case 2:
						printf(" twenty");
						break;
					case 3:
						printf(" thirty");
						break;
					case 4:
						printf(" forty");
						break;
					case 5:
						printf(" fifty");
						break;
					case 6:
						printf(" sixty");
						break;
					case 7:
						printf(" seventy");
						break;
					case 8:
						printf(" eighty");
						break;
					case 9:
						printf(" ninety");
						break;
				}
			}
				if(r == 1)
				{
					nn = nn / 10;
					r = nn % 10;
					switch(r)
					{
					case 1:
						printf(" and eleven");
						break;
					case 2:
						printf(" and twelve");
						break;
					case 3:
						printf(" and thirteen");
						break;
					case 4:
						printf(" and fourteen");
						break;
					case 5:
						printf(" and fifteen");
						break;
					case 6:
						printf(" and sixteen");
						break;
					case 7:
						printf(" and seventeen");
						break;
					case 8:
						printf(" and eighteen");
						break;
					case 9:
						printf(" and nineteen");
						break;						
					}
				exit(0);
				}
				if(cn == 0)
				{
					printf(" and");
				}
			}
			if(cn == 1)
			{
				switch(r)
				{
					case 1:
						printf(" one");
						break;
					case 2:
						printf(" two");
						break;
					case 3:
						printf(" three");
						break;
					case 4:
						printf(" four");
						break;
					case 5:
						printf(" five");
						break;
					case 6:
						printf(" six");
						break;
					case 7:
						printf(" seven");
						break;
					case 8:
						printf(" eight");
						break;
					case 9:
						printf(" nine");
						break;				
					}
		}
		nn = nn / 10; 
		cn--;
	}
}
