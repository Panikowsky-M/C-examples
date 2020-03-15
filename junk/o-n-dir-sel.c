  #include <stdio.h>
  #include <stdlib.h>

/*void swap(int *cur, int *next){
           int t = *cur;
           *cur = *next;
           *next = t;
   }*/


void dirSelSort(int *num, int s)
{
  int min, tmp,c,m;
  c = 0; m = 0;
 for(int i = 0; i < s -1; ++i)
         { 
  	    min = i; //printf("%d %d", min,i);
            for(int j = s; j > 1; --j)
               {
                  if(num[j] < num[min] )  min =j; c++;
 	 	}
                 tmp = num[i];
 		 num[i] = num[min];
 	         num[min] = tmp; m++;
		}printf("C = %d\n M = %d\n", c,m);
}     	     

/*void myInvSort(int *Arr, int s){
	int maxIdx;
	int i,j,c1,m1 = 0;
   	for(i; i < s-1; i++)
		{
		  maxIdx = i;
		  for(j =i+1; j < s; j++)
	   	    {  c1++;
			if(Arr[j] > Arr[maxIdx])
			 {
			   maxIdx = j;
				}swap(&Arr[maxIdx],&Arr[i]); m1++;
		    }printf("C = %d, M= %d",c1,m1);
}
}*/

int main()
{
    int x = 0;
    scanf("%d",&x);
    int tArr[x];
    
        for(int s1 = 0; s1 < x; ++s1)
              {
                 rand()%100;
                  }
             printf("\n");
            dirSelSort(tArr,x);
          /*for(int i = 0; i < 6; ++i)
              {
               printf("%d:  ",tArr[i]);
               }*/
return 0;
}
