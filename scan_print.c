#include <stdio.h>
main()
{
	char choice , Gender;
	int regno;
	float mark;
	printf("Enter the Registration Number:");	
	Scanf("%d",&regno);
	printf("Enter the Gender(only the first letter):");
	Scanf("%c",&Gender);
	printf("Enter your class 12 marks:");
	Scanf("%f",&mark);
	printf("Enter your choice (A/B):");
	Scanf("%c",&choice);
	printf("REGNO:%d");
	printf("\t GENDER:%c");
	printf("\n SECTION:%c");
	printf("\n MARKS:%f %%");
	getch();
}
