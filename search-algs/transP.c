#include <stdio.h>
#include <stdlib.h>

int transPosSrch(int *x_input, int si, int desi)
{
   int tmp;
    for(int i = 0; i < si; i++)
	{
          if(x_input[i] == desi)
	     tmp = x_input[i];
	     x_input[i] = x_input[i -1];
	     x_input[i -1] = tmp;
	     return i;
	 }
	return -1;
}

int main()
{
    int tArr[4];
    int DigForSing, inp_el;
    DigForSing = scanf("%d", &inp_el);
    for(int s = 0; s < 4; s++)
	{
          printf("Enter an element: \n");
	  scanf(" %d", &tArr[s] );
         }
	  
    for(int SitrP = 0; SitrP < inp_el*2 ; SitrP++)
	{
    	  int d; d =  transPosSrch(tArr,4,inp_el);
 	  if(d == -1) printf("Element not found !");
	   else printf("Founded an element idxed w/ %d which is %d\n", SitrP,inp_el);
	 }
return 0;
}
