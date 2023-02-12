#include <stdio.h>
#include <stdio.h>
#include <math.h>
void main()
{
     float a,b,c,r1,r2,d;
     printf("to find the root of a quadratic equation\n");
     printf("enter values of a: ");
     scanf("%f",&a);
     printf("enter values of b: ");
     scanf("%f",&b);
     printf("enter values of c: ");
     scanf("%f",&c);

     d=b*b-(4*a*c);

     if(d==0)
     {
     printf("the root are real and equal\n");

     r1=-b/(2*a);
     r2=-b/(2*a);

      printf("root 1 is %f \n ",r1);
      printf("root 2 is %f ",r2);
     }

     else if(d>0)
     {
     printf("roots are real and different\n");

     r1=(-b+sqrt(d))/(2*a);
     r2=(-b-sqrt(d))/(2*a);

     printf("root 1 is %f \n",r1);
     printf("root 2 is %f ",r2);
     }
     else
     {
     printf("roots are real and imaginary\n");

     }
return 0;
}
