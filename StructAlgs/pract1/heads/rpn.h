#ifndef rpn
#define rpn

#include<iostream>
#include <cstring>
#include"_list.h"
#include"structio.h"
using namespace std;






//Определяем приоритет
int prior(char symbol)
{
	int import = 0;			//Степень приоритета
	switch (symbol)
	{
	case'(':
	case')':
	{
		import = 1;
		break;
	}
	case'+':
	case'-':
	{
		import = 2;
		break;
	}
	case'*':
	case'/':
	{
		import = 3;
		break;
	}
	case'^':
	{
		import = 4;
		break;
	}
	default:
	{
		import = 0;
		break;
	}
	}
	return import;
}

//Прямая польская запись
void PolishNot(char * expr)
{
	int len = strlen(expr); //Длина выражения
	List<char> * elemStack = NULL; //Последний элемент стека
	List<char> * firstElemQ = NULL; //первый в очереди
	List<char> * elemQ = NULL; //последний в очереди
	for (int i = len - 1; i >= 0; i--)
	{
		//Добавляем следующий, если очередь не пуста
		if ((expr[i] != '+') && (expr[i] != '-') && (expr[i] != '*') && (expr[i] != '/') && (expr[i] != '^') && (expr[i] != '(') && (expr[i] != ')'))
		{
			if (firstElemQ == NULL)
			{
				firstElemQ = _push(firstElemQ, expr[i]); 
				elemQ = firstElemQ;			
			}
			
			else
			{
				elemQ = _push(elemQ, expr[i]);				
			}
		}
		//Если это оператор
		else
		{
			//Ставим разделитель
			if (elemQ != NULL && elemQ->key != ' ')
			{
				elemQ = _push(elemQ, ' ');
			}
			//Если стек пуст, то добавляем оператор
			if (elemStack == NULL)
			{
				elemStack = _push(elemStack, expr[i]);
			}
			else if (prior(expr[i]) >= prior(elemStack->key) || (expr[i] == ')'))
			{
				elemStack = _push(elemStack, expr[i]);
			}
			else if (prior(expr[i]) < prior(elemStack->key) && expr[i] != ')')
			{
				while (elemStack != NULL  && prior(expr[i]) < prior(elemStack->key))
				{
					elemQ = _push(elemQ, elemStack->key);
					elemStack = _pop(elemStack);	
				}
				if (expr[i] == '(')
				{
					elemStack = _pop(elemStack);
				}
				else
				{
					elemStack = _push(elemStack, expr[i]);
				}
			}
		}
	}
	ref(elemStack, firstElemQ);
	del(firstElemQ);	

}


//Проверка верности выражения
bool ck(char * str)
{
	int len = strlen(str); //Длина строки
	bool correct = true; //Выражение корректно
	int L_b = 0; 
	int R_b = 0;     //Закрывающиеся скобки
			
	for (int i = 0; i < len; i++)
	{
		//Операторы идут подряд ? False
		if (prior(str[i]) > 1 && prior(str[i + 1]) > 1)
		{
			correct = false;
			i = len;
		}
		//else if (Priority(str[i]) == 1 && Priority(str[i + 1]) == 1)
		else if ((str[i] == '(' && str[i + 1] == ')') || (str[i] == ')' && str[i + 1] == '('))
		{
			correct = false;
			i = len;
		}
		else if ((prior(str[i]) == 0 && str[i + 1] == '(') || (str[i] == ')' && prior(str[i + 1]) == 0 && i + 1 != len))
		{
			correct = false;
			i = len;
		}
		
		else if (prior(str[0]) > 1 || prior(str[i]) > 1 && i == len - 1)
		{
			correct = false;
			i = len;
		}
	
		else if (str[i] == '(')
		{
			L_b++;
		}


		else if (str[i] == ')' && L_b > R_b)
		{
			R_b++;
		}
	}
	if ((L_b + R_b) % 2 != 0)
	{
		correct = false;
	}
	return correct;
}


void PolishNotMenu()
{

	char* expr = new char[255]; //Выделяем память под строку
	int choice = -1; //Выбор
	while (choice != 0)
	{
		cout << "1 - Введите выражение\n0 - Выход\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			cout << "Выражение должно быть 255 символов длиной, унарный минус - <<!>>: ";

			cin >> expr;
			while (strlen(expr) == 0 || ck(expr) == false)
			{
				cout << "Структура пуста или неверна: ";
				cin >> expr;
			}
			cout << "\nПрямая польская запись: ";
			PolishNot(expr);
		}
		}
		cout << endl;
	}
}
#endif
