#ifndef structio
#define structio

#include<iostream>
using namespace std;

template<typename T>
void print(T array, int r)
{
	for (int i = 0; i < r; i++) 
	{
		cout << array[i] ;
	}
	cout << endl;
}

template<typename T>
void in(T array, int length)
{
	cout << "Введите значения элементов массива:\n";
	for (int i = 0; i < length; i++) 
	{
		cin >> array[i];
	}
}

template<typename T>
void Chin(T array, int length)
{
	cout << "Введите значения элементов массива:\n";
	for (int i = 0; i < length; i++)                  
	{
		cin >> array[i];
	}
	array[length] = '\0';
}

template<typename T>
void ref(T * elemStack, T * firstElemQ)
{
	int i = 0;
	char * str = new char[255];
					
	while (firstElemQ != NULL)
	{
		str[i] = firstElemQ->key;
		firstElemQ = firstElemQ->next;
		i++;
	}

	while (elemStack != NULL)
	{
		str[i] = elemStack->key;
		elemStack = elemStack->prev;
		i++;
	}
	
	for (i--; i >= 0; i--)
	{
		cout << str[i];
	}
	delete str;
}
#endif
