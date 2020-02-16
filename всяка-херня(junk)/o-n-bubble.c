#include  <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *cur, int *next){ //Ф-ия реализующия непосредственно обмен
	int t = *cur;
	*cur = *next;
        *next = t;
}

void Bubble(int Arr[], int s){ //Непосредственно функция сортировки
	     int c = 0; //Счетчик сравнений
	     int m = 0;//Счетчик обмена

             for(int i = 0; i < s; i++){
		for(int j = 0; j < s-i-1; j++ ){
			if(Arr[j] > Arr[j+1]) c++;
				swap(&Arr[j], &Arr[j+1]);
				m++;
		}             
	}
 printf("C = %d\n M = %d\n",c,m);
}

int main()
{

  int a[6000];
  int n = 6000;
  int b[7];
       for(int q = 0; q < 7; q++){
	  scanf("%d", &b[q]);
}
      /* for(int q = 0; q < n; q++){
	       a[q] = rand()%10000;
	}*/
	Bubble(b,7);

return 0;
}
