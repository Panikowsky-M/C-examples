  #include<stdio.h>

int main ()
{
    int s = 5;
    int A[s];
    char mystr[] = "testtesttest";
          printf("String: %s", mystr);
    for(int i = 0 ; i < s; ++i) A[i] = i;
        for(int i = 0; i < s ; ++i)
          printf("Array[%d]: %d\n", i, A[i]);
    int x,a,pow3;
    scanf("%d", &x);
     a = x;
    while(x > 1)
     {   
          if(x%3 == 0){ x/=3; pow3++; }
          else break;
     }if(pow3 > 0)
       printf("%d is %d power of 3", a,pow3 );
      else printf("Wrong number !");
return 0;
}
