#include <stdio.h>
#include <stdlib.h>

int serSearch(int *x_input, int si, int desi)
{
    for(int i = 0; i < si; i++)
	{
          if(x_input[i] == desi)
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
    	  int d; d =  serSearch(tArr,4,inp_el);
 	  if(d == -1) printf("Element not found !");
	   else printf("Founded an element idxed w/ %d which is %d\n", d,inp_el);

return 0;
}
