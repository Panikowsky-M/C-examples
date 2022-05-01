#include "stdio.h"
#include "string.h"

void vulnFunc(char* data)
{
	char buf[16];
	strcpy(buf,data);
}


void main(int argc, char* argv[])
{
	vulnFunc(argv[1]);
}
