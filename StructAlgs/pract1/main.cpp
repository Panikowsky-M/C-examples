#include <iostream>
#include "heads/structio.h"
#include "heads/qiface.h"
#include "heads/rpn.h"
using namespace std;

int main()
{
	int i = 6;    //¿¿¿¿¿¿¿¿¿¿ ¿¿¿ ¿¿¿¿¿¿ ¿¿¿¿ ¿¿¿¿¿¿
	
	/*¿¿¿¿¿ ¿¿¿¿¿¿¿¿, ¿¿¿¿¿¿¿ ¿¿¿¿¿ ¿¿¿¿¿¿¿¿¿¿¿ ¿¿¿ ¿¿¿¿¿¿¿¿.
	(¿¿¿¿¿, ¿¿¿¿¿¿¿¿¿¿)*/
	while (i != 3)
	{
		cout << "\nВведите действие над массивом";
		cout << "\n1 - Польская запись\n2 - Очередь\n";
		cout << "\n3 - Выход.\n";
		cin >> i;
		switch (i)
		{
			//¿¿¿¿¿¿¿¿¿¿.
		case 1:
		{
			PolishNotMenu();
			break;
		}
		//¿¿¿¿¿
		case 2:
		{
			Queue();
			break;
		}
		//¿¿¿¿, ¿¿¿¿¿¿¿
		case 3:
			break;
		default:
		{
			cout << "Повторите ввод.";
		}
		}
	}

return 0;
}
