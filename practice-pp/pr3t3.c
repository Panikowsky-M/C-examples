	#include "stdio.h"
	#include "ctype.h"

int main()
{
   int i,a,sym = 0;
   char str[] = "I like to code on C/C++";
   printf("%s\n", str);
   while(str[i])
    {
      if(isalpha(str[i])) a++;
      else sym++;
      i++;
    }
    printf("In this sentence ive found %d alphas and %d syms.\n", a,sym);
return 0;
}
