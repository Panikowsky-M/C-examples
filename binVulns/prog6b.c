#include "stdio.h"
#include "string.h"

void main(int argc, char* argv[])
{
   char str[512];
   strcpy(str, argv[1]);
   printf("%s\n", str);
   printf(str);
   printf("\n");

}
