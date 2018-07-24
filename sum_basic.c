 #include<stdio.h>
main()
{
	char a,b;
	printf("Enter the first character:");
	fflush(stdin);
	scanf("%c",&a);
	printf("Enter the second character:");
	fflush(stdin);
	scanf("%c",&b);
	printf("The sum of integer is: %d \n",(a+b));
	printf("The character value is is: %c \n",(a+b));
	getch();
}
