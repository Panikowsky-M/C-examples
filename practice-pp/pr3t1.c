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
    char str0[] = "This string contains many a and b letters: aaaababbabbabababbabaaaaabbabababaa";
    printf("When getLn() was called, I got %d\n", getLn(str0));
}
