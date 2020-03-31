#include<stdio.h>

class Vehicle {
public:
	int passengers;
	int fuelcap;
	int mpg;
	int range();
	};

int Vehicle::range()
{
 return mpg * fuelcap;
}

int main()
{
   Vehicle minivan;
   Vehicle sportcar;
int range1, range2;

minivan.passengers = 7;
minivan.fuelcap = 16;
minivan.mpg = 21;

sportcar.passengers = 2;
sportcar.fuelcap = 14;
sportcar.mpg = 21;

range1 = minivan.range();
range2 = sportcar.range();

printf("Фургон может вести %d пассажиров на расстояние %d миль\n",minivan.passengers,range1);
printf("Фургон может вести %d пассажиров на расстояние %d миль\n",sportcar.passengers,range2);
return 0;
}
