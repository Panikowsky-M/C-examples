#include<iostream>
#include<ciso646>

using namespace std;
const int MAXSIZE = 100;

int main()
{
  int N = MAXSIZE;  
  int A[N];
  int top = 0;
  int x;

  cin >> x;
  while (x not_eq -100500){
    A[top++] = x;
    cin >> x;
  }

  while(top > 0) cout << A[--top] << '\t';
  cout << '\n';
return 0;
}
