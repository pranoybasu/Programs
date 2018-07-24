#include<stdio.h>
#include<math.h>
main()
{
    int c;
    int n1, num, r, result = 0, n = 0, ch;
    int choice;
    int i, j, nr = 0, x;
    char chr;
    char y = 'y';
    chr = 55;
    do
	{
            system("cls");
            printf("\n +------------------+");
            printf("\n |    Assignment    |");
            printf("\n +------------------+");

            printf("\n");

            printf("\n 1.Armstrong Number");
            printf("\n 2.Patterns");

            printf("\n");

            printf("\n Enter your choice : ");
            scanf("%d", &c);

            switch(c)
			{
                case 1:
                        printf("\n +-----------------------+");
                        printf("\n |    Armstrong Number   |");
                        printf("\n +-----------------------+");
                        printf("\n");
                        printf("\n\n Check whether an n digits number is armstrong or not :\n");
                        printf("\n ------------------------------------------------------\n");
                        printf(" Input  an integer : ");
                        scanf("%d", &n1);
                        num = n1;
                        while(num!=0)
						{
                            num/= 10;
                            ++n;
                        }
                        num=n1;
                        while (num!= 0)
						{
                            r=num%10;
                            result+=pow(r, n);
                            num/=10;
                        }
                        if(result==n1)
						{
                            printf(" %d is an Armstrong number.\n\n", n1);
                        }
                        else
						{
                            printf(" %d is not an Armstrong number.\n\n", n1);
                        }
                        break;
                case 2:
                		fflush(stdin);
                        printf("\n +---------------+");
                        printf("\n |    Patterns   |");
                        printf("\n +---------------+");
                        printf("\n");
                        printf("\nPyramids");
                        int i, j, rows,space,k=0,count=0,count1=0;
                        char input, alphabet = 'A';
					    printf("\n Enter number of rows: ");
					    scanf("%d",&rows);
						printf("\n Enter the uppercase character you want to print in last row(For the third pattern): ");
					    scanf(" %c",&input);
					    printf("(1)");
					    printf("\n");
					    //first
					    for(i=1; i<=rows; ++i)
					    {
					        for(j=1; j<=i; ++j)
					        {
					            printf("* ");
					        }
					        printf("\n");
					    }
					    printf("(2)");
					    printf("\n");
					    //second
					    for(i=1; i<=rows; ++i)
					    {
					        for(j=1; j<=i; ++j)
					        {
					            printf("%d ",j);
					        }
					        printf("\n");
					    }
					    printf("(3)");
					    printf("\n");
					    //third											
						for(i=1; i <= (input-'A'+1); ++i)
						{
						    for(j=1;j<=i;++j)
							    {
							       printf("%c", alphabet);
							    }
							    ++alphabet;
							    printf("\n");
						}
						printf("(4)");
						printf("\n");
						//fourth
						for(i=rows; i>=1; --i)
					    {
					        for(j=1; j<=i; ++j)
					        {
					            printf("* ");
					        }
					        printf("\n");
					    }
					    printf("(5)");
					    printf("\n");
						//fifth					    
					    for(i=rows; i>=1; --i)
					    {
					        for(j=1; j<=i; ++j)
					        {
					            printf("%d ",j);
					        }
					        printf("\n");
					    }
					    printf("(6)");
					    printf("\n");
					    //sixth
					    for(i=1; i<=rows; ++i, k=0)
					    {
					        for(space=1; space<=rows-i; ++space)
					        {
					            printf("  ");
					        }
					        while(k != 2*i-1)
					        {
					            printf("* ");
					            ++k;
					        }
					        printf("\n");
					    }
					    printf("(7)");
					    printf("\n");
					    //seventh
					    for(i=1; i<=rows; ++i)
					    {
					        for(space=1; space <= rows-i; ++space)
					        {
					            printf("  ");
					            ++count;
					        }
					
					        while(k != 2*i-1)
					        {
					            if (count <= rows-1)
					            {
					                printf("%d ", i+k);
					                ++count;
					            }
					            else
					            {
					                ++count1;
					                printf("%d ", (i+k-2*count1));
					            }
					            ++k;
					        }
					        count1 = count = k = 0;
			
					        printf("\n");
					    }
					    printf("(8)");
					    printf("\n");
					    //eighth
					    for(i=rows; i>=1; --i)
					    {
					        for(space=0; space < rows-i; ++space)
					            printf("  ");
					        for(j=i; j <= 2*i-1; ++j)
					            printf("* ");
					        for(j=0; j < i-1; ++j)
					            printf("* ");
					        printf("\n");
					    }									     		
                      		break;
                		
						default:
                        printf("Wrong choice!!!");
            }
            printf("\n");
            printf("\n Do you wish to continue (y/n)? : ");
            scanf(" %c", &y);
    }while( y == 'y');
}
