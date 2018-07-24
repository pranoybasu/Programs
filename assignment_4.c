#include<stdio.h>
#include<math.h>
void main()
{
int ch;
float a,b,res;
printf("Enter two numbers:");
scanf("%f%f",&a,&b);
printf("\n Menu \n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n 5.Remainder");
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
res=a+b;
break;
case 2: 
res=a-b;
break;
case 3: 
res=a*b;
break;
case 4: 
res=a/b;
break;
case 5:
res=(int)a%(int)b;
break;
default: 
printf("Wrong choice!! \nPress any key…");
getch();
exit(0);
}
printf("\nresult=%f",res);
getch();
}
