#include "stdio.h"
#include "stdlib.h"
#include "string.h"

struct block {

int number;
char* buf;
};

void vF(char* data1, char* data2){

struct block *a = malloc(sizeof(struct block));
a->number = 0x01;
a->buf = malloc(0x08);


struct block *b = malloc(sizeof(struct block));
b->number = 0x02;
b->buf = malloc(0x08);

printf("a->buf - %p, data1 - %p\n", a->buf, data1);
strcpy(a->buf, data1);

printf("b->buf - %p, data2 - %p\n", b->buf, data2);
strcpy(b->buf, data2);

printf("Hello !\n");

free(a->buf);
free(b->buf);

free(a);
free(b);
}

void main(int argc, char* argv[])
{
    vF(argv[1],argv[2]);
}
