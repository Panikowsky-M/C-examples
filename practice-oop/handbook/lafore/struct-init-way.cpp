#include<iostream>

using namespace std;

struct part
{
  int modelnum;
  int partnum;
  float cost;
};

int main()
{
    part engine1 = {7822,152,78.32F};
    part engine2;
    engine2 = engine1;

   cout<<"Модель: "<<engine2.modelnum;
   cout<<"\nДеталь: "<<engine2.partnum;
   cout<<"\nСтоимость: "<<engine2.cost;

return 0;
}
