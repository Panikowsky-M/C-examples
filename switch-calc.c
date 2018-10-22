#include<stdio.h>


int main()
{
  //int stack[64];
  int a,b,r;
  //int s1;
  char act;
  scanf("%c", &act);
  scanf("%d %d", &a,&b);
  //printf("%d %d",a,b);
  switch(act) {
  case '+':
       r= 0;
       r= a+b;
       printf("%d", r);
  break;
  case '-':
       r= 0;
       r= a-b;
       printf("%d", r);
  break;
  case '*':
       r= 0;
       r= a*b;
        printf("%d", r);
  break;
  case '/':
        r= 0;
        r= a/b;
        printf("%d", r);
 break;
default:
        printf("Operator is not correct!");
}
return 0;
}
