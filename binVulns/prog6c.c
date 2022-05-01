#include "stdio.h"
#include "string.h"

void main(int argc, char* argv[])
{
    char str[512];
     unsigned int test = 0x00424242;
      strcpy(str,argv[1]);
       printf("%s\n", str);
        printf(str);
       printf("\n");
      printf("test = %d (0x%0.8x)\n",test, &test);
}
