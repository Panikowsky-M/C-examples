//Решето Эратосфена

#include<iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  bool s[n+1];

  for(int i = 2; i < n+1; i++)
  {s[i] = true;}

  int x = 2;
  while(x*x <= n){
    if(s[x]) {
      for(int y = x*x; y <= n; y+=x){
        s[y] = false;
      }
    }
    x++;
  }
  for (int i = 2; i < n+1; i++){
    if (s[i]) cout << i <<'\t';
  }
  cout<<'\n';
return 0;
}
