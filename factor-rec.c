 #include <stdio.h>
int factor(int n)
{
    if(0 == n) /*Так как if(n = 0) - это арифметика, то значит 
                  // n будет 0 и неправдой 0 == n работает только в С*/
    return 1;
        return factor(n-1)*n;/*Можно не писать иначе т.к крайний случай и так
                               //и так правда т.е иначе сработает самом*/ 
}

int main()
{
   int x;
   scanf("%d",&x);
   printf("factor(%d) = %d\n", x, factor(x));
return 0;
}
