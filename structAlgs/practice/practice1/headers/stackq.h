#ifndef stackq
#define stackq

#include<iostream>
#include"list.h"
using namespace std;
void Steck()
{
	char element;        
	List<char>*c = NULL;                     //Стэк.
	int i = 5;                               //Выбор типа данных
	
	while (i != 0)
	{
		cout << "\nВведите номер функции.";
		cout << "\n1 - Добавить элемент в голову стэка";
		cout << "\n2 - Удалить элемент с головы\n 0 - Выход\n";
		cin.ignore(1000, '\n');
		cin >> i;
		switch (i)
		{
			// ДОБАВЛЕНИЕ В ГОЛОВУ
		case 1:
		{
			cout << "Введите элемент\n"; 
			cin >> element;
			c = PushFront(c, element);    
			OutputList(c);
			break;
		}
		// УДАЛЕНИЕ С ГОЛОВЫ
		case 2:
		{
			c = PopFront(c);
			cout << endl; 
			OutputList(c);
			break;
		}
		case 0:
			break;
		default:
		{
			cout << "Такой функции не предусмотрено.";
			cout << "Повторите ввод.";
		}
		}
	}
}

// Функция добавляет элементы в хвост и удаляет с головы
void Queue()
{
	char element;
	List<char>*c = NULL;
	int i = 5;
	
	while (i != 3)
	{
		cout << "\nРабота с очередью";
		cout << "\n1 - Добавить в хвост\n"; 
		cout << "\n2 - Удалить с головы\n"; 
		cout << "3 - Выход\n";
		cin.ignore(1000, '\n');
		cin >> i;
		switch (i)
		{
			// Добавляем в хвост ОЧЕРЕДИ
		case 1:
		{
			cout << "Добавляйте элемент\n";
			cin >> element;
			c = PushFront(c, element);
			OutputList(c);
			break;
		}
		// Удаляем с головы
		case 2:
		{
			c = Findend(c);    // Поиск головного элемента
			c = PopBack(c);    
			c = FindHead(c);
			cout << endl;
			OutputList(c);
			break;
		}
		case 3:
			break;
		default:
		{
			cout << "Такой функции не предусмотрено.";
			cout << "Повторите ввод.";
		}
		}
	}
}


// Выбор стэка или очереди

void StackQueue()
{
	int i = 5;
	while (i != 2)
	{
		cout<<"\n-----------\nРабота с очередью:\n";
		cout << "\n1 - Start\n2 - Выход\n";
		cin.ignore(1000, '\n');
		cin >> i;
		switch (i)

		{
		case 1:
		{
			Queue();
			break;
		}
		case 2:
		{
			break;
		/*case 3:
		{
			DEK();
			break;
		}*/
		default:
		{
			cout << "Такой функции не предусмотрено.";
			cout << "Повторите ввод.";
		}
		}
	}
    }
 }
#endif
