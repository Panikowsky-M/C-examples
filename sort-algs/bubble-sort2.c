#include<stdio.h>

void bubbleS(int *inpA, int size)
{ 
     int it,ed = size,sw = 1,t;
     while(sw) {
         sw = 0;
         for(it = 1; it < ed; ++it) {
           if(inpA[it] < inpA[it -1]) {
                 inpA[it]= t ;
                 inpA[it -1] = inpA[it];
                 t= inpA[it -1];
                 sw = 1;
            }
           }
           ed--;
     }    
}
 
int main()
{ 
  int x[] = {4, 65, 2, 31};
  int s = sizeof x / sizeof x[0];
  int i;
    for(i = 0 ; i < s; ++i)
        printf("%d%s\n", x[i], i == s-1 ? "\n" : " " );
   bubbleS(x,s);
   
    for(i = 0 ; i < s; ++i) printf("%d%s\n", x[i], i == s-1 ? "\n" : " " );
return 0;
}  
