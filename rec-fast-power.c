   #include<stdio.h>

int fast_power(int a, int b){
       if(0 == b)return 1;
        return a*fast_power(a, b-1);
}

int main()
{
   int m,n;
   scanf("%d%d", &m, &n);
   printf("power(%d,%d) = %d", m,n, fast_power(m,n));

return 0;
}
