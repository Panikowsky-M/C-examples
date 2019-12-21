	#include<iostream>
using namespace std;

int costCounter(int a_in, int b_in, int c_in){
    if(a_in <= c_in)
      {	
       int res;
       res = (c_in - a_in)/b_in;
      return res;
       }
    else return -1;
}

int main()
{
  int osn,lop, maxcost;
  cout << "Введите стоимость основания спиннера: \n";
  cin >> osn;
  cout<<"Введите стоимость одной лопасти: \n";
  cin >> lop;
  cout<<"Введите максимальную стоимость спиннера: \n";
  cin>>maxcost;
  cout<<costCounter(osn,lop,maxcost);

return 0;
}
