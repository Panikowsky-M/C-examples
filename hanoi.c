  #include<stdio.h>

void hanoi(int n, int i, int k) { //n - высота, i k столбики на кот переклад
    if ( n == 1 )
         printf("Move disk 1 from collumn  %d to %d. \n", i, k );
    else
     {
      int tmp = 6 - k - i;
      hanoi(n -1, i, tmp);
      printf("Move disk %d from collumn %d to %d.\n", n, i, k);
      hanoi(n -1, tmp, k);
     }
}

int main()
{
   hanoi(3, 1, 2);

return 0;
}
