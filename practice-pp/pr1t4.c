	#include "stdio.h"
int di(double,double,double);
//int rootfinder(); Функция вычисления корней
int main()
{
  double a,b,c,res;   a = 0.0; b = 0.0; c = 0.0;
  printf("Enter Ax^2+Bx+C values: \n");
  scanf("%lf",&a);
  scanf("%lf",&b);
  scanf("%lf",&c);
  res = di(a,b,c);
  if(res < 0)
  {printf("D < 0. There is 2 complex roots!\n");}
  else printf("D = %lf\n 2 roots of Real.\n",res);
  return 0;
}

int di(double a,double b,double c)
{
    double result; 
    result = b*b- 4*a*c;
    if (result <= 0)
     {if (result < 0) return -2;
       else return 0;}
    else return result;
      
}
