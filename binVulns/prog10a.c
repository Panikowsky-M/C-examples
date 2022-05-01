#include<stdio.h>
#include<stdlib.h>


void main(int argc, char* argv[])
{
	int a;
	a = atoi(argv[1]);
	printf("a: %d (0x%08X)\n",a, a);
}
