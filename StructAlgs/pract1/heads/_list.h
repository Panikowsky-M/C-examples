#ifndef _list
#define _list

#include <iostream>
using namespace std;
struct stop
{
	char key;   //Информационная часть структуры.
	int otdal;
};

template<typename T>
struct List
{
	T key;
	List* next; //Адрес следующего элемента списка. 
	List* prev; //Адрес предыдущего элемента списка. 
};

template<typename T>
List<T> * _push(List<T> *lst, T t)
{
	List<T> *p;
	List<T> *Current = new List<T>; // Выделение памяти.

	/*Если список не пустой добавляем элемент слева.*/
	if (lst != NULL) 
	{
		p = lst->next; // Сохранение указателя на следующий элемент списка.
		lst->next = Current; // Предыдущий элемент списка указывает на создаваемый.
		Current->key = t; // Сохранение поля данных добавляемого элемента списка.
		Current->next = p; // Созданный элемент списка указывает на следующий элемент списка.
		Current->prev = lst; // Созданный элемент списка указывает на предыдущий элемент списка.
		if (p != NULL)      // Проверка указателя 
			p->prev = Current;
	}
	else //Инициализируем список
	{
		Current->key = t;
		Current->next = NULL; // Указатель на следующий узел 
		Current->prev = NULL;
	}
	return(Current);
}


//Добавляем элемент в начало
template<typename T>
List<T> * Push(List<T> *lst, T t)
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


//Возвращаем указатель на конец
template<typename T>
List<T>* _find(List<T>* list)
{
	List<T> *K = new List<T>;
	K = NULL;
	while (list != NULL)
	{
		K = list;	
		list = list->next;
	}
	return K;
}

//Возвращаем указатель на начало
template<typename T>
List<T>* Find(List<T>* list)
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

//Печатаем список
template<typename T>
void print(List<T>*first)
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
		cout << "Ñïèñîê ïóñò." << endl;
	}
}

//Находим длины префиксов/суффиксов, с нужным индексом
template<typename T>
T schIdx(List<T>* c, int ind)
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

//Ищем максимальную длину суффикса
template<typename T>
int findMax(List<T>* c, int ind)
{
	List<T> *K = c;
	int max = 0;     
	int i = 0;

	//Поиск максимальной длины
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


//Удаляем первый
template<typename T>
List<T>* Pop(List<T> *h)
{
	/* При наличии элемента после удаляемого
	 * переставляем указатель на следующий
	 * и освобождаем память удаляемого */
	List<T> *p = h;    
	if (h != NULL)
	{
		p = h->next;			
		if (h->next != NULL)	
			p->prev = h->prev;
		free(h);                 
	}
	return(p);
}

//Удаляем последний
template<typename T>
List<T>* _pop(List<T> *h)
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


//Удаляем очередь
template<typename T>
void del(List<T> * first)
{
	List<T> * next = NULL;
	while (first != NULL)
	{
		next = first->next;
		delete first;	
		first = next;
	}
}
#endif
