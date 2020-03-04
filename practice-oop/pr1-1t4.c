#include<stdio.h>
#include<iso646.h>
#include<string.h>

int main()
{
   char vowel_ck[]  = "aeiouAEIOU";
   char test;
   scanf("%c",&test);
   if(test >= 65 and test <=122 ) 
    {
	if(strrchr(vowel_ck,test)) printf("vowel\n");
	else printf("consonant\n");
     }
   else printf("Not letter\n");
return 0;
}
