	#include "stdio.h"
	//#include "stdlib.h"       
void binF(int d_dig)
{
    int r = 0,h = 1;
    while(d_dig)
         {
            r += (d_dig % 2)*h;
      	    d_dig/=2;
            h*=10;
            }
	    printf("%d",r);
}

int main()
{
   int x_input;
   scanf("%d",&x_input);
   binF(x_input);

return 0;
}
