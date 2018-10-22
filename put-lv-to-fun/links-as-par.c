#include<stdio.h>

void f(int &i);

int main()
{

  int a = 20;
  printf("Original a: %d\n", a);
  f(a);
  printf("Modified a: %d\n", a); 

return 0;
}

void f(int &i)
{
  i = 15;
}
