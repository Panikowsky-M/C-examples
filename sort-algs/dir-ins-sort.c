//define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void directInsSort(int *num, int s)
   {
      
      for(int i = 0; i < s; ++i)
        {
  	   int cur = num[i]; int idx = i;
	     while((idx > 0) && (num[idx -1] > cur))
 	         {
                   num[idx] = num[idx -1];
                   idx--;
 	          }
             num[idx] = cur;
          }
     }

int main()
 {
    int tArr[] = {4,6,2,3,1,5};
   
    for(int i = 0; i < 6; ++i)
      {

    printf("Original tArr[%d]: %d\n", i ,tArr[i]);
   
        }

    directInsSort(tArr,6);
   
   for(int i = 0; i < 6; ++i)
     {
      
       printf("tArr[%d]: %d\n", i ,tArr[i]);
     }

return 0;
}
