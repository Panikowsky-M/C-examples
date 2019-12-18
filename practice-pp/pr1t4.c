	#include "stdio.h"
	#include "stdlib.h"
 	#include "math.h"

	
int di(double,double,double);
//int rootfinder(double,double,double);
int main()
{
  double res;  
  double a,b,c; a = 0.0; b = 0.0; c = 0.0;
  double root1, root2;
  printf("Enter Ax^2+Bx+C values: \n");
  scanf("%lf",&a);
  scanf("%lf",&b);
  scanf("%lf",&c);
  res = di(a,b,c);
  if(res < 0)
  {printf("D < 0. There is 2 complex roots!\n");}
  else printf("D = %lf\n 2 roots of Real.\n",res);
  root1 = (-1*b + sqrt(res))/2*a; 
  root2 = (-1*b - sqrt(res))/2*a;
  printf("Ive got 2 roots of Real: %lf,%lf\n", root1,root2);
  
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
/*int rootfinder(double a_in0,double b_in0, double c_in0)
{
  double root1, root2;
  int di_check;
  di_check = di(a_in0,b_in0,c_in0);
  if(di_check > 0) {
        root1 = (-1*b_in0 + sqrt(di_check) ) / 2*a_in0;
        root2 = (-1*b_in0 - sqrt(di_check) ) / 2*a_in0;
        return root1;
        return root2;
       }else return -255;
  if(di_check == 0) { 
        root1 = (float)(-1*b_in0 + sqrt(di_check) ) / 2*a_in0;
        root2 = root1;
        return root2;
    }
}*/
