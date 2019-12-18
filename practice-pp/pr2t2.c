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
    int tArr[10];
   
    for(int i = 0; i < 10; ++i)
      {
    
    scanf("%d",&tArr[i]);
    printf("Original tArr[%d]: %d\n", i ,tArr[i]);
   
        }

    directInsSort(tArr,10);
   
   for(int i = 0; i < 10; ++i)
     {
      
       printf("tArr[%d]: %d\n", i ,tArr[i]);
     }

return 0;
}
