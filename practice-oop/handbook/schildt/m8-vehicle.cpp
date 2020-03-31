#include<stdio.h>

class Vehicle {
public:
	int passengers;
	int fuelcap;
	int mpg;
	Vehicle(int p, int f, int m);
	int range();
	};

    Vehicle::Vehicle(int p, int f, int m) {
    	passengers = p;
	fuelcap = f;
	mpg = m;
	}

int Vehicle::range()
{
 return mpg * fuelcap;
}

int main()
{
   Vehicle minivan(7,6,15);
   Vehicle sportcar(2,14,12);
int range1, range2;

range1 = minivan.range();
range2 = sportcar.range();

printf("Фургон может вести %d пассажиров на расстояние %d миль\n",minivan.passengers,range1);
printf("Фургон может вести %d пассажиров на расстояние %d миль\n",sportcar.passengers,range2);
return 0;
}
