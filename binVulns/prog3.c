#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
  int a = 1, b = 2, c = 3;
  
   char st_1[15];
   char *st_2 = malloc(14*sizeof(char));
    
    strcpy(st_1,"HelloFromStack");
    strcpy(st_2,"HelloFromHeap");

	printf("%s - %s, %d, %d, %d\n", st_1,st_2, a,b,c);
    free(st_2);
 return 0;
}
