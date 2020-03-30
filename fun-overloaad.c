#include <stdio.h>
#include<iso646.h>

int neg(int x)
{
	return -x;
}

double neg(double y)
{
	return -y;
}

char neg(char z)
{
   (int) z;
   z = -z; 
   (char) z;
	return z;
}

int main()
{

 int i = 4;
 double j = 5.656;
 char k = 'a';
 printf("%d\n",neg(i));
 printf("%f\n",neg(j));
 printf("%c\n",neg(k));

return 0;
}
