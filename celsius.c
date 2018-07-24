#include <stdio.h>
#include <conio.h>
#include<float.h>
main()
{
	int choice;
	printf("Enter 1 for fahrenheit to celsius:\n");
	printf("Enter 2 for celsius to fahrenheit:\n");
	scanf("%d",choice);
	float celsius, fahrenheit;
	switch(choice)
	{
		case 1:
			{
    		
    		printf("Please Enter the temperature in Fahrenheit: \n");
    		scanf("%f", &fahrenheit);
    		celsius = (fahrenheit - 32) * 5 / 9;
    		printf("\n %.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);
    	}
    	case 2:
    		{
				printf("\n Enter temperature in celsius:");
				scanf("%f",&celsius);
				fahrenheit= 1.8*celsius+32;
				printf("Temperature in fahrenheit is .2%f :",fahrenheit);
				
			}
		}
		getch( );	
	}
