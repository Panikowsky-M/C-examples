#include<iostream>

using namespace std;

struct t_Pair {
  int a;
  int b;
};

void modp(t_Pair *p)
{
  p->a +=1;
  p->b +=10;
}

int main()
{
  t_Pair x;
  cin >> x.a >> x.b;

  t_Pair y;
  y = x;

  modp(&x);

  cout << x.a <<' '<<x.b <<'\n';
  cout << y.a <<' '<<y.b <<'\n';

  return 0;
}
