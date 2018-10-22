    #include<stdio.h>
int gcd(int a, int b){
    if(0 == b) return a;
    return gcd(b, a%b);
    }

int main()
{
   int x,y;
   scanf("%d%d", &x, &y);
   printf("gcd(%d, %d) = %d", x,y, gcd(x,y));
return 0;
}
