#include <stdio.h>
#include <stdlib.h>
#include <iso646.h>

void ShellSort(int *num, int s)
{
	int inc = 3;
	while (inc > 0)
	{
	  for(int i = 0; i < s; i++)
	  {
	   int j = i;
	   int tmp = num[i];
	   while ((j >= inc) and (num[j-inc] > tmp))
	   {
	   	num[j] = num[j - inc];
		j-= inc;
		}num[j] = tmp;
		}if(inc > 1)
		 inc = inc/2;
		else if(inc == 1)
break;
 }
} 
int main()
{
    int m[10];
for(int i = 0; i < 10; i++)
{
	m[i] = rand()%10;
	printf("Исходный массив: %d\n",m[i]);
}ShellSort(m,10);
for(int i = 0; i<10; i++)
    printf("%d\n",m[i]);
return 0;
}
