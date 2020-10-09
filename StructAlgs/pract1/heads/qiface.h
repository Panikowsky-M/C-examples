#ifndef qiface
#define qiface

#include<iostream>
#include "_list.h"
using namespace std;
void Queue()
{
	char element;
	List<char>*c = NULL;
	int i = 5;

	//Программа удаляет и добавляет элемент в очередь
	while (i != 0)
	{
		cout << "\nВводите действия";
		cout << "\n1 - Добавляет элемент\n";
		cout << "\n2 - Удаляет элемент\n0 - Выход\n";
		cin.ignore(1000, '\n'); //Защита от переполнения при использовании char
		cin >> i;
		switch (i)
		{
		case 1:
		{
			cout << " Введите элемент:\n";
			cin >> element;
			c = Push(c, element);
			print(c);
			break;
		}
		case 2:
		{
			c = _find(c);    //Поиск элемента
			c = _pop(c);    
			c = Find(c);
			cout << endl;
			print(c);
			break;
		}
		case 0:
			break;
		default:
		{
			cout << "Повторите ввод.";
		}
		}
	}
}
#endif
