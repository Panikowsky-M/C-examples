	#include "stdio.h"

void callCount(int x) {
     if(x > 0)
     { 
        callCount(x-1);
      }printf("Inside the callCount(%d)\n",x);
}

int main()
{
   int n = 0;
   scanf("%d",&n);
   if(n < 10) printf("callCounter() starts at n = [10 ...]!\n");
   else callCount(n); 

return 0;
}
