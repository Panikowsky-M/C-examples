#include <stdlib.h>
#include <stdio.h>

void quSort(int *nums, int left, int right)
{
   int piv;
   int lh = left;
   int rh = right;
   piv = nums[left];

    while(left < right) 
     {
        while((nums[right] >= piv) && (left < right))
           right--;
            if(left != right)
             {
 		nums[left] = nums[right];
                left++;
	      }
               while((nums[left] <= piv) && (left < right))
		{
 		  left++;
                  if(left != right)
 	   	   {
                     nums[right] = nums[left];
                     right--;
 		    } 
 		 }
		 nums[left] = piv;
 		 piv = left;
 		 left = lh;
		 right = rh;
		  if(left < piv)
		    quSort(nums,piv-1,left);
                   if(right > piv)
	      	   quSort(nums,piv+1,right);
                  }
}

int main()
{
   int a[3];
   for(int i =0; i < 3; i++) {a[i] = rand()%100;}
   for(int i =0; i < 3; i++) {printf("a[%d]: %d\n",i,a[i]);}
     printf("\n");
   quSort(a,0,2);
  for(int i = 0; i < 3; i++) {printf("%d",a[i]);}
  printf("\n");  

return 0;
}
