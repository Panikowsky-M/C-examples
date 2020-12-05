#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>
#include <errno.h>

void main()
{
  char *data = malloc(0x100);
  sleep(1);
  
  printf("\nPID: %d",getpid());
  printf("\nPress any key to exit:\n");
 getchar();
free(data);
}
