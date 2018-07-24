#include<stdio.h>
#include<math.h>
int main()
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
	  return 0;
}
