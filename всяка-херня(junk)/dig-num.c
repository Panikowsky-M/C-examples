#include<stdio.h>

int main()
{
    int dig,c = 0;
    scanf("%d",&dig);
    while(dig > 0){
	
	dig/=10;
	c++;
}
printf("%d\n",c);
return 0;
}
