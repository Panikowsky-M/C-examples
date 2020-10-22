#include<iostream>
#include"headers/structio.h"
#include"headers/list.h"
#include"headers/stackq.h"
#include"headers/arrq.h"
#include"headers/rpn.h"
using namespace std;

int main()
{
	int i = 6;
	
	while (i != 4)
	{
		cout << "\nВызовите функцию из списка.";
		cout << "\n1 - Очередь на односвязном списке";
		cout <<"\n2 - То же только на массиве\n";
		cout << "\n3 - Польский калькулятор.\n4 - Выход\n";
		cin >> i;
		switch (i)

		{

		case 1:
		{
			StackQueue();
			break;
		}
		
		case 2:
		{
			QueueMenu();
			break;
		}
	
		case 3:
		{

			rpn_calc();
			break;
		}

		case 4:
			break;
		default:
		{
			cout << "Такой фуекции не предусмотрено.";
			cout << "\nПовторите ввод\n";
		}
		}
	}

return 0;
}
