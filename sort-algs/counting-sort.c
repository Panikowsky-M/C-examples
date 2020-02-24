#include <stdio.h>
#include <stdbool.h>
#include <iso646.h>

//void print_Ar()
//{
   


int main()
{
    int Cs[10] = {0};
    int x;
    
    while (true)
   	{
	  scanf("%d",&x);
	  if (x == 10) break;//Число терминатор = 10
          if(x < 0 or x > 9)continue;
	  Cs[x] +=1;
}for(x = 0; x < 10; ++x)
	for(int i = 0; i < Cs[x]; ++i)
	printf("%3d\n",x);

return 0;
}
