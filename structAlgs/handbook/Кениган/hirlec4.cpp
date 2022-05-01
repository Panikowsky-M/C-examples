#include<iostream>

using namespace std;

struct t_Pair {
  int a;
  int b;
};

t_Pair retp(int x)
{
  t_Pair result;
  result.a = x*x; 
  result.b = x*x*x; 
  return result;
}

int main()
{
  int x;
  cin >> x;

  t_Pair y = retp(x);
  cout << y.a <<' '<<y.b <<'\n';

  return 0;
}
