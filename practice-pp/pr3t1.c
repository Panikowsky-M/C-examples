	#include "stdio.h"

int getLn(char str_inp[])
{
    int strL = 0;
  for(int k = 0; str_inp[k]; ++k)
    {
      strL++;
     }
     return strL;
}


int main()
{
    char str0[] = "This string contains many a and b letters:bbbbbbbbbbababababababbbbbbbbbb" ;
    printf("When getLn() was called, I got %d!\n", getLn(str0));
   char x0 = 'a'; char x1 = 'b';
   int let0 = 0, let1 = 0;
   for(int k = 0; k < getLn(str0); k++)
     {
       if(str0[k] == x0)let0++;
       if(str0[k] == x1)let1++;
       }if(let0 > let1)printf("a letters are more than b.\n"); 
        else printf("b letters are more than a.\n");
   return 0;
}
