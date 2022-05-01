//Тест на простоту полным перебором
#include<iostream>
#include"iso646.h"

using namespace std;

int main(){
  int d = 2; int x = 0;
  cin >> x;
  while (x not_eq 1){
	  if (x % d == 0){
		  cout << d << '\n';
		  x/=d;
	  } else d++;
  }
  return 0;
}
