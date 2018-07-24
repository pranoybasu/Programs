#include <stdio.h>
#include <math.h> 
int main()
{
	int n1,num,r,result=0,n=0,ch;
	printf("---------------------------\n");
	printf("Enter your choice:\n");
	printf("1. Armstrong Number:\n");
	printf("2. Patterns:\n");
	scanf("%d",ch);
	printf("---------------------------\n");
	switch(ch)
	{
		case 1:
			{
				int n1, num, r, result = 0, n = 0 ;
			    printf("\n\n Check whether an n digits number is armstrong or not :\n");
				printf("-----------------------------------------------------------\n");
			    printf(" Input  an integer : ");
			    scanf("%d",&n1);
			    num=n1;
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
			    getch();
			    break;
				}
				fflush(stdin);
				case 2:
					{
						int choice;
				    int i, j, n = 0, x;
				    char ch;
				
				    ch = 55;
				
				    printf("\n 1.Half Pyramid");
				    printf("\n 2.Inverted Half");
				
				    scanf("%d", &choice);
				
				
				    switch(choice){
				
				        case 1:
			            printf("\n Half Pyramid");
			            printf("\n");
			
			            for(x = 1; x<=3; x++){
			
			                for(i = 1; i<=5; i++){
			
			                    for(j = 1; j<=i; j++){
			                        if(n == 0){
			                            printf(" %d", j);
			                        }
			                        else if(n == 1){
			                            printf(" *");
			                        }
			                        else{
			                           printf(" %c", ch);
			                        }
			
			                    }
			                    ch++;
			
			                printf("\n");
			                }
			                n++;
			            }
			
			            		break;
			
			        				default:
			            			printf("\n Invalid choice");
			
			    		}
					}
			}
		}
