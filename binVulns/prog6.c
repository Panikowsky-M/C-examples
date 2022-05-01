#include "stdio.h"

void main(int argc, char* argv[])
{
    unsigned int a;
    unsigned int b = 0x4;
    unsigned int c = 0x8;

  printf("TestingString%n", &a);
  printf("b = 0x%.2x (0x%.8x). c =  0x%.2x (0x%.8x).\
Lenght of  TestingString%d\n", &b, (unsigned int)&b, c, (unsigned int)&c,a);

}
