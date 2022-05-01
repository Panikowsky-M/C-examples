#include<iostream>
#include"iso646.h"

using namespace std;
 
int main(){
  bool flag = false;
  int x;
  cin >> x;
  while (x !=0 ){
	  flag = (x%10 == 7) or flag; /*Накапливание значения флага в булевой
	                                может привести к уходу от ифа */  
          x/=10;
  }
  cout << flag;
  return 0;
}
