#include <stdio.h>
int main()
{
    int a = 1;
    char b ='G';
    double c = 3.14;
    printf("This is a character. My value is %c and "
           "my size is %lu byte.\n", b,sizeof(char));
    printf("This is an integer. My value is %d and "
           "my size is %lu  bytes.\n", a,sizeof(int)); 
    printf("This is a double floating point variable."
           " My value is %lf and my size is %lu bytes.\n",c,sizeof(double));
    return 0;
}
