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
	printf("Уничтожаем класс со занчением: %d\n",x);
	}
int main()
{
   MyClass t1(5);
   MyClass t2(19);

  printf("%d %d\n",t1.x,t2.x);
return 0;
}
