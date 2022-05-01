//Тест на простоту
#include<iostream>
#include"iso646.h"

using namespace std;

int main(){
  bool flag = true;
  int x = 0; cin >> x;
  for(int d = 2; d < x; ++d)
	  if(x%d == 0) {
		  flag = false;
   		  cout << "Составное\n";
		  break;
	  }
  return 0;
}
