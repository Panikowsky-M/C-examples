//Альтернативный способ инициализации
#include<stdio.h>

class MyClass {
	public:
	int x;
    MyClass(int i);
    ~MyClass();
    };

MyClass::MyClass(int i) {
	x = i;
	}
MyClass::~MyClass() {
    printf("Уничтожение объекта значение которого: %d\n",x);
  }

int main()
{
  MyClass ob =5;
  printf("%d\n",ob.x);
return 0;
}
