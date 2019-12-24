  #include<iostream>

using namespace std;

int main()
{
    int n,m,i,j;
    n = 0; m = 0;
    
     int arr,col; arr = 0; col = 0;
         cout <<"Введите размер N исходного прямоугольника: \n";
         cin >> n;
         cout <<"Введите размер M исходного прямоугольника: \n";
         cin>> m;

         for ( i = 0; i < n ; i++)
                    arr += n - i;
 		        for( j =0; j < m; j++)
	                  col += m - j;
 		      cout<<(arr * col);
return 0;
}
