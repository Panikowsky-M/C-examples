#include <stdio.h>

int main()
{
    int sum,tw,ten,five,one,sum20,sum10,sum5,sum1;
    tw = 0;ten = 0;five = 0;one = 0;sum20 = 0;sum10 = 0;sum5 = 0;sum1 = 0;
    scanf("%d",&sum);
    sum20 = sum;
    if(sum20 >= 20)
	while(sum20 >= 20)
	{
	   sum20-=20;
	   tw+=1;
	}
        sum10=sum-(tw*20);
   
    if(sum10 >= 10)
	while(sum10 >= 10)
	{
	   sum10-=10;
	   ten+=1;
	}
	sum5 = sum-((tw*20) + (ten*10));

    if(sum5 >= 5)
	while(sum5 >= 5)
	{
	   sum5-=5;
	   five+=1;
	}
	sum1 = sum-((tw*20)+(ten*10)+(five*5));
    
    if(sum1 >= 1)
	while(sum1 >= 1)
	{
	   sum1-=1;
	   one+=1;
	}
    
	printf("%d, %d, %d, %d\n",tw,ten,five,one);
return 0;
}
