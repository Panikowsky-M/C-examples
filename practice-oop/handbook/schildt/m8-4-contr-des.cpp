//В данной задаче рассматривается исспользование
//конструкторов и деструкторов
#include<stdio.h>

class MyClass {
public:
	int x;

	MyClass();
	~MyClass(); //Это деструктор
	};

MyClass::MyClass() {
x = 10;
}

MyClass::~MyClass() {
printf("Класс был уничтожен !\n");
}

int main()
{
   MyClass ob1;
   MyClass ob2;
  
  printf("%d %d\n",ob1.x,ob2.x);
return 0;
}

