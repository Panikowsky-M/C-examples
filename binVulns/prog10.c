#include "stdio.h"
#include "stdlib.h"

void main(int argc, char* argv[])
{
	int a;
	a = atoi(argv[1]);
	while (a > 0) {
	   printf("a: %d\n", a);
	   a*=a;
	}
	   printf("a: %d\n", a);
}
