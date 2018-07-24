#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include<float.h>
main()
{	
	printf(".................................\n");
	printf("     DATATYPE   :     SIZE       :\n");
	printf(".................................:\n");
	printf(".    short int  :  %2d bytes     :\n", sizeof(short int),"short int %d to %d",SHRT_MIN,SHRT_MAX);
	printf(".          int  :  %2d bytes     :\n", sizeof(int),"int %d to %d",INT_MIN,INT_MAX);
	printf(".     long int  :  %2d bytes     :\n", sizeof(long int),"long %d to %d",LONG_MIN,LONG_MAX);
	printf(".   signed int  :  %2d bytes     :\n", sizeof(signed int));
	printf(". unsigned int  :  %2d bytes     :\n", sizeof(unsigned int));
	printf(".................................:\n");
	printf(".        float  :  %2d bytes     :\n", sizeof(float),"float %e to %e",FLT_MIN,FLT_MAX);
	printf(".       double  :  %2d bytes     :\n", sizeof(double),"double %e to %e",DBL_MIN,DBL_MAX);
	printf(".  Long double  :  %2d bytes     :\n", sizeof(long double));
	printf(".................................:\n");
	printf(".  signed char  :  %2d bytes     :\n", sizeof(signed char));
	printf(".         char  :  %2d bytes     :\n", sizeof(char),"char %d to %d",CHAR_MIN,CHAR_MAX);
	printf(". unsigned char :  %2d bytes     :\n", sizeof(unsigned char));
	printf(".................................:\n");
}
