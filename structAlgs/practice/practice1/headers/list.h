#pragma once
#include<iostream>
using namespace std;
/*Список.*/
struct stop
{
	char key;                                         //Информационная часть структуры.
	int otdal;                                        
};

template<typename T>
struct List
{
	T key;                                         
	List* next;                                    //Адрес следующего
	List* prev;                                    //Адрес предыдущего
};

//Добавление в хвост
template<typename T>
List<T> * PushBack(List<T> *lst, T t)
{
	List<T> *p;
	List<T> *Current = new List<T>;                   // Выделение памяти.

	if (lst != NULL)
	{
		p = lst->next;            // Сохранение указателя на следующий
		lst->next = Current;      // Предыдущий указывает на создаваемый
		Current->key = t;         // Сохранение поля данных добавляемого
		Current->next = p;        // Созданный указывает на следующий
		Current->prev = lst;      // Созданный указывает на предыдущий
		if (p != NULL)            // Проверка указателя
			p->prev = Current;
	}
	else // Инициализирую список
	{
		Current->key = t;
		Current->next = NULL;
		Current->prev = NULL;
	}
	return(Current);
}


template<typename T>
List<T> * PushFront(List<T> *lst, T t)
{
	List<T> *p;
	List<T> *Current = new List<T>;
	List<T>* first;
	if (lst != NULL)
	{
		first = lst;
		p = first->prev;
		first->prev = Current;
		Current->key = t;
		Current->next = first;
		Current->prev = p; 
		if (p != NULL) 
			p->next = Current;
	}
	else 
	{
		Current->key = t;
		Current->next = NULL;
		Current->prev = NULL;
	}
	return(Current);
}


// Возврат элемента на последний элемент списка
template<typename T>
List<T>* Findend(List<T>* list)
{
	List<T> *K = new List<T>;
	K = NULL;
	while (list != NULL)
	{
		K = list;            //Возвращаем указатель на следующий элемент.
		list = list->next;
	}
	return K;
}

//  Соответсвенно здесь возвращается первый элемент
template<typename T>
List<T>* FindHead(List<T>* list)
{
	List<T> *K = new List<T>;
	K = NULL;
	while (list != NULL)
	{
		K = list;   
		list = list->prev;
	}
	return K;
}

// Вывод списка на экран
template<typename T>
void OutputList(List<T>*first)
{
	List<T>* p = first;
	if (p != NULL)        
	{
		while (p != NULL) 
		{
			cout << p->key << " ";
			p = p->next;
		}
	}
	else
	{
		cout << "Список пуст." << endl;
	}
}

// Возвращаем длины префиксов(суффиксов) с нужным индексом ind
template<typename T>
T Findind(List<T>* c, int ind)
{
	List<T> *K = new List<T>;
	K = FindHead(c);
	int i = 1;
	while (i < ind)
	{
		K = K->next;
		i++;
	}
	return K->key;
}

template<typename T>
int FindMaxcount(List<T>* c, int ind)
{
	List<T> *K = c;
	int max = 0;             // Максимальная длина суффикса
	int i = 0;
	// Поиск максимальной длины
	while (i < ind)
	{
		if (K->key>max)
		{
			max = K->key;
		}
		K = K->next;
		i++;
	}
	return max;
}


// Удаляем с головы

template<typename T>
List<T>* PopFront(List<T> *h)
{
	List<T> *p = h;
	if (h != NULL)
	{
		p = h->next;                   // Предшественник h
		if (h->next != NULL)	       // При наличии элемента после удаляемого
			p->prev = h->prev;     // Переставить указатель
		free(h);                       // Освобождаем память
	}
	return(p);
}

// Удаляем с хвоста
template<typename T>
List<T>* PopBack(List<T> *h)
{
	List<T> *p = h;
	if (h != NULL)
	{
		p = h->prev;
		if (h->prev != NULL)
			p->next = h->next;
		free(h);
	}
	return(p);
}


// Удаляем очередь
template<typename T>
void DeleteQueue(List<T> * first)
{
	List<T> * next = NULL;
	// Удаляем элементы, пока не обнулим первый
	while (first != NULL)
	{
		next = first->next;	// Выставим указатель на первый
		delete first;		// Удаляем его
		first = next;		// Следующий сдвигаем на первый
	}
}


// Удаляем список
template<typename T>
void DeleteStack(List<T>* elemStack)
{
	List<T>* prev = NULL;
	while (elemStack != NULL)
	{
		prev = elemStack->prev;
		delete elemStack;
		elemStack = prev;
	}
}
