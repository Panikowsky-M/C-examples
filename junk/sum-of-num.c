#include<stdio.h>

int digSummer(int digit)
{
     int sum = 0;
     for(int i = digit; i > 1; i--)
	{
	 sum+=digit;
	printf("%d\n",sum);
} 		
return sum;
}
int main()
{
  int n = 0;
  //int s;
scanf("%d",&n);

printf("%d",digSummer(n));
return 0;
}
