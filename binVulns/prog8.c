#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int MAXBSIZE = 200;

void SecurCpy(char* data, int size) {

char mybuf[MAXBSIZE];
unsigned short int checkSize = size;

	if (checkSize > MAXBSIZE) { 
	   printf("E: input bufer is too long !\n"); 
	   return;
	}
   printf("copying started ... \n");
  strncpy(mybuf,data,size); 
 printf("N: %s\n",mybuf); 
}

void main(int argc, char* argv[])
{
    if(argc > 2) { SecurCpy(argv[1], atoi(argv[2]) ); }
}
