#include<iostream>
using namespace std;

double a = 100.0; 

double &f();

int main()
{
  double x;
cout<< f() << '\n'; 
x = f();
cout<< x << '\n';
f() = 99.9;
cout<< f() << '\n'; 
return 0;
}

double &f()
{
   return a;
}
