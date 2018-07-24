#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include<float.h>
main()
{
	printf("int %d to %d",INT_MIN,INT_MAX);
	printf("\nchar %d to %d",CHAR_MIN,CHAR_MAX);
	printf("\nlong %d to %d",LONG_MIN,LONG_MAX);
	printf("\nshort int %d to %d",SHRT_MIN,SHRT_MAX);
	printf("\nfloat %e to %e",FLT_MIN,FLT_MAX);
	printf("\ndouble %e to %e",DBL_MIN,DBL_MAX);
	getch();
	return 0;
}
