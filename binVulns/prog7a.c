#include <stdio.h>
#include <string.h>


void main(int argc, char* argv[])
{
    char buff[32];
     if(strlen(buff) > sizeof(buff) -1){
       printf("E: bufer is too long!\n");
        return;
       }
 
   strcpy(buff,argv[1]); 
  printf(buff);
}
