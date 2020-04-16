#include<iostream>

using namespace std;

struct Dist
{
  int feet;
  float inches;
};

int main()
{
   Dist d1,d3;
   Dist d2 = {11,12.7F};

  cout<<"Введите число футов: \n"; cin>>d1.feet;
  cout<<"Введите число дюймов: \n"; cin>>d1.inches;

 d3.inches = d1.inches+d2.inches;
 d3.feet = 0;
 if(d3.inches >= 12.0)
  {
   d3.inches -= 12.0;
   d3.feet++;
 }
  d3.feet += d1.feet + d2.feet;

 cout<< d1.feet <<"\'-"<<d1.inches<<"\"+";
 cout<< d2.feet <<"\'-"<<d2.inches<<"\"=";
 cout<< d3.feet <<"\'-"<<d3.inches<<"\"\n";
return 0;
}
