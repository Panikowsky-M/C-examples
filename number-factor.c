       #include<stdio.h>
//Буфер Buf должен быть достаточным чтобы вместить все множители
int get_num_fact(int in, int Buf[]) {
     int top = 0;
     int divr = 2;
     while( in!= 1 ) {
         while( in%divr == 0 ) {
              Buf[top] = divr;
              top += 1;
              in/= divr;
         }
         divr+= 1;
        }
return top;
}

int main()
{  
   int n;
   printf("Enter num to factorize:");
   scanf("%d", &n);
   int Buf_m[100];
   int FactCount;
   FactCount = get_num_fact(n, Buf_m);
   for (int c = 0 ; c < FactCount ; ++c)
        printf("%d", Buf_m[c]);
        printf("\n");

return 0;
}
