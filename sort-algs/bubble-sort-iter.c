  #include<stdio.h>
  #include<stdlib.h>

int main()
{
    int Ar[5];
    int s = 5;
    int st,end, tmp;
    for(tmp = 0 ; tmp < 5 ; ++tmp) 
      Ar[tmp] =   rand()%100; 
     for(tmp = 0 ; tmp < s; ++tmp) printf("Filled array Ar[%d]: %d\n", tmp ,                                                                   Ar[tmp]);
      
      for(st = 1; st < s; ++s) 
        {
      for( end = s-1 ; end >= st ; --end )
        {
        if( Ar[tmp] < Ar[tmp -1] ) {
         tmp = Ar[tmp -1];
         Ar[tmp -1] = Ar[tmp];
         Ar[tmp] = tmp;
         } 
      }
     }
       for(tmp =0 ; tmp < s; ++tmp){ printf("Sorted array Ar[%d]: %d\n"
                                                        , tmp ,Ar[tmp]); }
return 0;
}
