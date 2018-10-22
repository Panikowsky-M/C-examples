#include<stdio.h>

void swapL(int *x , int *y)
{

     int tmp;
     tmp = *x;
     *x = *y;
     *y = tmp;
}


int main()
{
  int a,b;
  a = 15 ; b = 5;
  printf("Before calling the swapL a is %d and b is %d\n"
                                                  , a,b);
 swapL(&a, &b);
 printf("After calling the swapL a is %d and b is %d\n"
                                            , a, b);
return 0;
}
