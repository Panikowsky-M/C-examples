       #include<stdbool.h>
       #include<stdio.h>
       //#include<iso646>
#define Alloc_s 1024

int inp_array(int A[], int max_size) {
    int top = 0;
    
    while (true) {
         int x;
         scanf("%d", &x);
         if(x == 0 || top == max_size) 
         { printf("Terminal sym entered.\n"); break;}
         A[top] = x;
         ++top;
    } 

}

int printar(int A[] , int N) {
    for(int i = 0 ; i < N ; ++i)
       printf("%3d", A[i]);

}

int ins_sort(int A[], int N) {
    int t;
    for(int i = 1 ; i < N; ++i){
        int k = i;
        while(k > 0 && A[k -1] > A[k]) {
             A[k] = t;
             A[k] = A[k -1];
             A[k -1] = t;
             k-= 1;
        }
    }
}

int main()
{
    int A[Alloc_s];
    int N;
    printf("Enter nums: ");

    N = inp_array(A , Alloc_s);
    ins_sort(A, N);
    printar(A, N);
return 0;
}
