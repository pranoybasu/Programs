#include<stdio.h>
#include<math.h>
int main()
{
	int choice;
    printf("\n 1: To check the number is prime or not."); 
    printf("\n 2: To find the max and second max number among three numbers.");
    printf("\n 3: To find the roots of quadratic equations.");
    printf("\n Enter your choice (1, 2, 3): ");
    scanf("%d",&choice);
    fflush(stdin);
    if(choice==1)
    {
    int n, i, flag = 0;
    printf(" \n Enter a positive integer: ");
    scanf("%d",&n);
    for(i=2; i<=n/2; ++i)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        printf("%d is a prime number.",n);
    }
    else
    {
        printf("%d is not a prime number.",n);
    }
    
	getch();
    
    return 0;
	}
	else if(choice == 2)
	{
		int a,b,c,lar,sec;
		
		printf("\n Enter the first number:");
		scanf("%d",&a);
		fflush(stdin);
		printf("\n Enter the second number:");
		scanf("%d",&b);
		fflush(stdin);
		printf("\n Enter the third number:");
		scanf("%d",&c);
		fflush(stdin);

    if(a>b)
    {
        if(a>c)
            lar=a;
        else
            sec=a;
    }

    if(b>c)
    {
        if(b>a)
            lar=a;
        else
            sec=b;
    }
    if(c>a)
    {
        if(c>b)
            lar=c;
        else
            sec=c;
    }
    printf("\n The largest number is:%d \n",lar);
    
    int second_max;
    
    if ( a < b )
    {
        if ( b < c )
		{ 
			second_max = b;
		}
        else
        {
			 second_max = ( a < c ? c : a );
		}
    }
    else
    {
        if ( a < c )
        {
		 	second_max = a;
		}
        else
		{ 
			second_max = ( b < c ? c : b );
		}
    }

    printf( "\n second maximum value is %d\n ", second_max );
	
	getch();
    
	return 0;
	
	}
	else if(choice == 3)
	{
		 float a,b,c;
  		float d,root1,root2;  
  		printf("\n From the quadratic equation \n");
		printf("\n Enter the value of 'a' \n");
		scanf("%f",&a);
		printf("\n Enter the value of 'b' \n");
		scanf("%f",&b);
		printf("\n Enter the value of 'c' \n");
		scanf("%f",&c);
		printf("\n Checking the roots are real or not.... \n");
		d=((b*b)-(4*a*c));
		  if(d < 0)
		  {
		    printf("\n Roots are complex number.\n");
		    printf("\n Roots of quadratic equation are: ");
		    printf("%.3f%+.3fi",-b/(2*a),sqrt(-d)/(2*a));
		    printf(", %.3f%+.3fi",-b/(2*a),-sqrt(-d)/(2*a));
		    return 0; 
		  }
		  else if(d==0)
		  {
		   printf("\n Both roots are equal.\n");
		   root1 = -b /(2* a);
		   printf("Root of quadratic equation is: %.3f ",root1);
		   return 0;
	 	 }
	  	else
	 	{
		   printf("\n Roots are real numbers.\n");
		   root1 = (( -b + sqrt(d)) / (2* a));
		   root2 = (( -b - sqrt(d)) / (2* a));
		   printf("Roots of quadratic equation are: %.3f , %.3f",root1,root2);
		}
		
		getch();
		
		return 0;
	}
	else
	{
	printf("\n Wrong Input! \n");
	
	getch();
		
	return 0;
	}
}
