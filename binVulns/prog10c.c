#include "stdio.h"
#include "stdlib.h"
#include "limits.h"

void main(int argc, char* argv[])
{
     int a = INT_MAX;
     int b = atoi(argv[1]);
     int c = a+b;
  printf("N: result is %d\n",c);
}
