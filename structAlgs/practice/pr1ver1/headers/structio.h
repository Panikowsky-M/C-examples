#ifndef structio
#define structio

#pragma once
#include<iostream>
using namespace std;

/*Âûâîä ýëåìåíòîâ ìàññèâà íà ýêðàí.*/
template<typename T>
void Output(T array, int r)
{
	for (int i = 0; i < r; i++)                       //Âûâîä ýëåìåíòîâ  ìàññèâà.
	{
		cout << array[i] ;
	}
	cout << endl;
}

/*Ââîä ýëåìåíòîâ ìàññèâà íà ýêðàí.*/
template<typename T>
void Input(T array, int length)
{
	cout << "Ââåäèòå çíà÷åíèÿ ýëåìåíòîâ ìàññèâà:\n";
	for (int i = 0; i < length; i++)                  //Ââîä ýëåìåíòîâ  ìàññèâà.
	{
		cin >> array[i];
	}
}

/*Ââîä ýëåìåíòîâ ìàññèâà íà ýêðàí.
Ïðèñâàèâàíèå íóëü òåðìèíàòîðà â êîíöå ñòðîêè.*/
template<typename T>
void InputChar(T array, int length)
{
	cout << "Ââåäèòå çíà÷åíèÿ ýëåìåíòîâ ìàññèâà:\n";
	for (int i = 0; i < length; i++)                  //Ââîä ýëåìåíòîâ  ìàññèâà.
	{
		cin >> array[i];
	}
	array[length] = '\0';
}

/*Âûâîä ïðåîáðàçîâàííîãî âûðàæåíèÿ íà ýêðàí.*/
template<typename T>
void RefreshOut(T * elemStack, T * firstElemQ)
{
	int i = 0;
	char * str = new char[255];		//Ñòðîêà, â êîòîðóþ çàïèñûâàåì èñõîäíûå ñòýê è êó÷ó
									/*Ïîêà î÷åðåäü íå ïóñòà, ïîñèìâîëüíî çàïîëíÿåì ñòðîêó èç î÷åðåäè*/
	while (firstElemQ != NULL)
	{
		str[i] = firstElemQ->key;
		firstElemQ = firstElemQ->next;
		i++;
	}
	/*Ïîêà ñòýê íå ïóñò, ïîñèìâîëüíî çàïîëíÿåì ñòðîêó èç ñòýêà*/
	while (elemStack != NULL)
	{
		str[i] = elemStack->key;
		elemStack = elemStack->prev;
		i++;
	}
	/*Âûâîä ïðåîáðàçîâàííîãî âûðàæåíèÿ*/
	for (i--; i >= 0; i--)
	{
		cout << str[i];
	}
	delete str;
}
#endif
