#include  <stdio.h>

void swap(int *cur, int *next){
	int t = *cur;
	*cur = *next;
        *next = t;
}

void Bubble(int Arr[], int s){
	
             for(int i = 0; i < s; i++){
		for(int j = 0; j < s-i-1; j++ ){
			if(Arr[j] > Arr[j+1])
				swap(&Arr[j], &Arr[j+1]);
		}
	}
}

int main()
{

   int a[] = {12,23,56,1,1,50,80};
  int n = sizeof(a)/sizeof(a[0]);
	Bubble(a,n);
       for(int q = 0; q < n; q++){
 		printf("%d\n",a[q]);
	}

return 0;
}
