#include<stdio.h>

int main()
{
  
    float fh,cl;
    int choice;
 	char ch;
    printf("\n1: Convert temperature from Fahrenheit to Celsius."); 
    printf("\n2: Convert temperature from Celsius to Fahrenheit.");
    printf("\nEnter your choice (1, 2): ");
    printf("\n Or Enter c for celsius and f for fahrenheit :");
    scanf("%d",&choice);
    scanf("%f",&ch);
    fflush(stdin);
    if((choice >=1 && choice <2) || (ch!='c' && ch=='f')||(ch!='C' && ch=='F'))
	{
        printf("\nEnter temperature in Fahrenheit: ");
        scanf("%f",&fh);
        cl= (fh - 32) / 1.8;
        printf("Temperature in Celsius: %.2f",cl);
    }
    else if((choice >=2 && choice<3) || (ch!='c' && ch=='f')||(ch!='C' && ch=='F'))
	{
        printf("\nEnter temperature in Celsius: ");
        scanf("%f",&cl);
        fh= (cl*1.8)+32;
        printf("Temperature in Fahrenheit: %.2f",fh);
    }
    else
	{
        printf("\nInvalid Choice !!!");
    }
    fflush(stdin);
    printf("\n Demonstartion of bitwise operator :");
    int a,b;
    printf("\n Enter the first number:");
    scanf("%d",&a);
    printf("\n Enter the second number:");
    scanf("%d",&b);
    printf("\n Executing the AND Logic!");
    int c = 0;           
   	c = a & b;
   	printf("\n Value of c is %d\n", c );
 	c = a | b;
 	printf("\n Executing the OR Logic!");
   	printf("\n Value of c is %d\n", c );
   	c = a ^ b;
   	printf("\n Executing the XOR Logic!");
   	printf("\n Value of c is %d\n", c );
   	c = ~a;
	printf("\n Executing the NOT Logic!");         
   	printf("\n Value of c is %d\n", c );
   	printf("\n Executing the Left shift Logic!");
   	c = a << 2;     
   	printf("\n Value of c is %d\n", c );
   	printf("\n Executing the Right shift Logic!");
   	c = a >> 2;
   	printf("\n Value of c is %d\n", c );
}
