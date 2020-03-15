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
  int input_value = 0;
  scanf("%d",&input_value);
  int a[input_value];
  int n = input_value;
       for(int i = 0; i < n; i++){
	       a[i] = rand()%10000;
	}
	Bubble(a,input_value);

return 0;
}
