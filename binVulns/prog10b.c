#include "stdio.h"

void main(void)
{
	int res;
	int b = 0x1;
       unsigned int a = 0xffffffff;
      printf("a: %u, b: %u\n",(unsigned int)a, b);

     res = a+b;
    printf("sum a+b = %d\n",res);
}
