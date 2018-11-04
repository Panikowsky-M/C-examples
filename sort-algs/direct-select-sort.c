  #include <stdio.h>
  #include <stdlib.h>

void dirSelSort(int *num, int s)
{
  int min, tmp;
 for(int i = 0; i < s -1; ++i)
         { 
  	    min = i; //printf("%d %d", min,i);
            for(int j = s; j > 1; --j)
               {
                  if(num[j] < num[min] )  min =j; 
 	 	}
                 tmp = num[i];
 		 num[i] = num[min];
 	         num[min] = tmp;
		}
}     	     

int main()
{

    int tArr[6];
    
        for(int s1 = 0; s1 < 6; ++s1)
              {
                 rand()%100;
                  }
             printf("\n");
         dirSelSort(tArr,6);
        for(int i = 0; i < 6; ++i)
              {
                   printf("%d:  ",tArr[i]);
               }
return 0;
}
