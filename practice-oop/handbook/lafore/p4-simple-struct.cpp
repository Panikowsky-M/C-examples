#include<iostream>

using namespace std;

struct part
{
   int modelnumber;
   int partnumber;
   float cost;
};

int main()
{
    part part1;
    part1.modelnumber = 6244;
    part1.partnumber = 373;
    part1.cost = 217.55F;

   cout<< "Модель: " << part1.modelnumber <<endl;
   cout<< "Деталь: " << part1.partnumber  <<endl;
   cout<< "Стоимость: " << part1.cost <<endl;


return 0;
}
