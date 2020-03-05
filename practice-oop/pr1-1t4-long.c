#include<stdio.h>
#include<iso646.h>

int main()
{
    char test;
	scanf("%c",&test);
	if(test >= 'A' and test <= 'Z' or test >= 'a' and test <= 'z')
    	 {
	   if((test == 'A' or test == 'a') or (test == 'E' or test == 'e') or (test == 'Y' or test == 'y') or (test == 'U' or test == 'u') or (test == 'I' or test == 'i') or (test == 'O' or test == 'o'))
            printf("vowel\n");
	   else printf("consonant\n");
         }else printf("Not letter\n");
return 0;
}
