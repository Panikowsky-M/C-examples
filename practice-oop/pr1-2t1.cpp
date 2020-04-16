#include<iostream>
#include "task_headers/__triangle.h" 

using namespace std;

int main()
{
int x0_in,x1_in,x2_in = 0;
cin>> x0_in >> x1_in >> x2_in;
triang obj(x0_in,x1_in,x2_in);
obj.P();
obj.S();

return 0;
}
