#include<iostream>
#include"headers/structio.h"
#include"headers/stackq.h"
#include"headers/rpn.h"
//#include"headers/polnot-bad.h"
using namespace std;

int main()
{
	int i = 8;
	
	while (i != 5)
	{
		cout << "\nВведите функцию,для обработки структуры данных.";
		cout << "\n1 - Стек,очередь\n2 - Тоже, только на массиве\n3 - Польский калькулятор\n\
		4 - Второй Польский вариант\n";
		cout << "5 - Выход\n";
		cin >> i;
		switch (i)

		{
		case 1:
		{
			SteckQueue();
			break;
		}
		case 2:
		{
			cout<<"\n--\nЕще не готово, но скоро заработает							:(\n";
			break;
		}
		case 3:
		{
			rpn_calc();
			break;
		}
		case 4:
		{
			cout<<"\n--\nЕще не готово, но скоро заработает							:(\n";
			break;
		}
		case 5:
		{
			break;
		default:
		
			cout << "Такой функции не предусмотрено.";
			cout << "Повторите ввод.";
		}
		}
       }

return 0;
}
