#include<stdio.h>

 const int M = 10;


	class Ar {
	  int arr[M];
	  int size;
	  int movloc, delloc;
 	 public:
	   Ar(int len){
	     if(len > M) len = M;
	     else if(len <= 0) len = 1;
	     size = len;
	     movloc = delloc = 0;
	    }
	void _scan(int el) {
	      if(movloc == size) {
	         //printf("Достигнута граница массива.\n");
	        return;
	       }
	      movloc++;
	     arr[movloc] = el;
	   }
         int _print() {
	     for(int j = 0; j < size; ++j){
	       delloc++;
	       printf("%d",arr[delloc]);
	      }printf("\n");
	    }
   };

int main()
{
   int x_input;
   int s;
   scanf("%d",&s);
   Ar test(s);
    printf("Вводите элементы массива: \n");

    for(int i = 0 ; i < s; ++i ){
        scanf("%d",&x_input);
	test._scan(x_input);
      }
      
     test._print();

return 0;
}
