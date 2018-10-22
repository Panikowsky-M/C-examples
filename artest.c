#include<stdio.h>

int main()
{
  int A[5];
  int s = 1;
  for(int n = 1 ; n < 5 ; ++n)
  {   
      A[n] = n;
      printf("%d\b\n", A[n]);
      s*= A[n];
  }
      printf("%d", s);
return 0;
}
