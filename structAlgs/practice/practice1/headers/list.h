#pragma once
#include<iostream>
using namespace std;
/*Ñòðóêòóðà.*/
struct stop
{
	char key;                                         //Èíôîðìàöèîííàÿ ÷àñòü ñòðóêòóðû.
	int otdal;                                        //Èíôîðìàöèîííàÿ ÷àñòü ñòðóêòóðû.											   
};

/*Ñòðóêòóðà.*/
template<typename T>
struct List
{
	T key;                                         //Èíôîðìàöèîííàÿ ÷àñòü ñòðóêòóðû.
	List* next;                                    //Àäðåñ ñëåäóþùåãî ýëåìåíòà ñïèñêà.
	List* prev;                                    //Àäðåñ ïðåäûäóùåãî ýëåìåíòà ñïèñêà.
};

/*Äîáàâëåíèå ýëåìåíòà â ñïèñîê.Â êîíåö.*/
template<typename T>
List<T> * PushBack(List<T> *lst, T t)
{
	List<T> *p;
	List<T> *Current = new List<T>;                   // Âûäåëåíèå ïàìÿòè.
    /*Åñëè ñïèñîê íå ïóñòîé äîáàâëÿåì ýëåìåíò ñïðàâà.*/
	if (lst != NULL)
	{
		p = lst->next;                               // Ñîõðàíåíèå óêàçàòåëÿ íà ñëåäóþùèé ýëåìåíò ñïèñêà.
		lst->next = Current;                         // Ïðåäûäóùèé ýëåìåíò ñïèñêà óêàçûâàåò íà ñîçäàâàåìûé.
		Current->key = t;                            // Ñîõðàíåíèå ïîëÿ äàííûõ äîáàâëÿåìîãî ýëåìåíòà ñïèñêà.
		Current->next = p;                           // Ñîçäàííûé ýëåìåíò ñïèñêà óêàçûâàåò íà ñëåäóþùèé ýëåìåíò ñïèñêà.
		Current->prev = lst;                         // Ñîçäàííûé ýëåìåíò ñïèñêà óêàçûâàåò íà ïðåäûäóùèé ýëåìåíò ñïèñêà.
		if (p != NULL)                               // Ïðîâåðêà óêàçàòåëÿ
			p->prev = Current;
	}
	else //Èíèöèàëèçèðóåì ñïèñîê.
	{
		Current->key = t;
		Current->next = NULL;                        // Óêàçàòåëü íà ñëåäóþùèé óçåë.
		Current->prev = NULL;                        // Óêàçàòåëü íà ïðåäûäóùèé óçåë.
	}
	return(Current);
}

/*Äîáàâëåíèå ýëåìåíòà â ñïèñîê. Â íà÷àëî*/
template<typename T>
List<T> * PushFront(List<T> *lst, T t)
{
	List<T> *p;
	List<T> *Current = new List<T>;                         // Âûäåëåíèå ïàìÿòè.
	List<T>* first;
	/*Åñëè ñïèñîê íå ïóñòîé äîáàâëÿåì ýëåìåíò ñëåâà.*/
	if (lst != NULL)
	{
		first = lst;
		p = first->prev;                           // Ñîõðàíåíèå óêàçàòåëÿ íà ñëåäóþùèé ýëåìåíò ñïèñêà.
		first->prev = Current;                     // Ïðåäûäóùèé ýëåìåíò ñïèñêà óêàçûâàåò íà ñîçäàâàåìûé.
		Current->key = t;                          // Ñîõðàíåíèå ïîëÿ äàííûõ äîáàâëÿåìîãî ýëåìåíòà ñïèñêà.
		Current->next = first;                     // Ñîçäàííûé ýëåìåíò ñïèñêà óêàçûâàåò íà ñëåäóþùèé ýëåìåíò ñïèñêà.
		Current->prev = p;                         // Ñîçäàííûé ýëåìåíò ñïèñêà óêàçûâàåò íà ïðåäûäóùèé ýëåìåíò ñïèñêà.
		if (p != NULL)                             // Ïðîâåðêà óêàçàòåëÿ
			p->next = Current;
	}
	else //Èíèöèàëèçèðóåì ñïèñîê.
	{
		Current->key = t;
		Current->next = NULL;                      // Óêàçàòåëü íà ñëåäóþùèé óçåë.
		Current->prev = NULL;                      // Óêàçàòåëü íà ïðåäûäóùèé óçåë.
	}
	return(Current);
}


/*Ïîäïðîãðàììà, êîòîðàÿ âîçâðàùàåò
óêàçàòåëü íà ïîñëåäíèé ýëåìåíò ñïèñêà.*/
template<typename T>
List<T>* Findend(List<T>* list)
{
	List<T> *K = new List<T>;
	K = NULL;
	while (list != NULL)
	{
		K = list;					        //âîçâðàùàåì óêàçàòåëü íà ñëåäóþùèé ýëåìåíò.
		list = list->next;
	}
	return K;
}

/*Ïîäïðîãðàììà, êîòîðàÿ âîçâðàùàåò
óêàçàòåëü íà ïåðâûé ýëåìåíò ñïèñêà.*/
template<typename T>
List<T>* FindHead(List<T>* list)
{
	List<T> *K = new List<T>;
	K = NULL;
	while (list != NULL)
	{
		K = list;					//âîçâðàùàåì óêàçàòåëü íà ïåðâûé ýëåìåíò.
		list = list->prev;
	}
	return K;
}

/*Âûâîä ñïèñêà íà ýêðàí*/
template<typename T>
void OutputList(List<T>*first)
{
	List<T>* p = first;
	if (p != NULL)                               //Ïðîâåðêà óêàçàòåëÿ.
	{
		while (p != NULL)                        //Âûâîä.
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

/*Ïîäïðîãðàììà, êîòîðàÿ íàõîäèò â ñïèñêå
äëèíû ïðåôèêîñîâ(ñóôôèêñîâ) ñ íóæíûì èíäåêñîì.
ind - èíäåêñ ïðåôèêñà.*/
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

/*Ïîäïðîãðàììà, êîòîðàÿ íàõîäèò â ñïèñêå
äëèíû ïðåôèêîñîâ(ñóôôèêñîâ) ñ íóæíûì èíäåêñîì.
ind - èíäåêñ ïðåôèêñà.*/
template<typename T>
int FindMaxcount(List<T>* c, int ind)
{
	List<T> *K = c;
	int max = 0;             //Ìàêñèìàëüíàÿ äëèíà ñóôôèêñà.
	int i = 0;
	/*Ïîèñê ìàêñìàëüíîé äëèíû.*/
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


/*Ïîäïðîãðàììà, êîòîðàÿ âûïîëíÿåò
óäàëåíèå ïåðâîãî ýëåìåíòà ñïèñêà. */
template<typename T>
List<T>* PopFront(List<T> *h)
{
	List<T> *p = h;
	if (h != NULL)
	{
		p = h->next;						//ýëåìåíò, ïðåäøåñòâóþùèé h
		if (h->next != NULL)				//ïðè íàëè÷èè ýëåìåíòà ïîñëå óäàëÿåìîãî
			p->prev = h->prev;				//ïåðåñòàâëÿåì óêàçàòåëü ñ óäàëÿåìîãî íà ñëåäóþùèé
		free(h);                            //îñâîáîæäàåì ïàìÿòü óäàëÿåìîãî ýëåìåíòà
	}
	return(p);
}

/*Ïîäïðîãðàììà, êîòîðàÿ âûïîëíÿåò
óäàëåíèå ïîñëåäíåãî ýëåìåíòà ñïèñêà. */
template<typename T>
List<T>* PopBack(List<T> *h)
{
	List<T> *p = h;
	if (h != NULL)
	{
		p = h->prev;						//ýëåìåíò, ïðåäøåñòâóþùèé h
		if (h->prev != NULL)				//ïðè íàëè÷èè ýëåìåíòà ïîñëå óäàëÿåìîãî
			p->next = h->next;				//ïåðåñòàâëÿåì óêàçàòåëü ñ óäàëÿåìîãî íà ñëåäóþùèé
		free(h);							//îñâîáîæäàåì ïàìÿòü óäàëÿåìîãî ýëåìåíòà
	}
	return(p);
}


//Ôóíêöèÿ óäàëåíèÿ î÷åðåäè
template<typename T>
void DeleteQueue(List<T> * first)
{
	List<T> * next = NULL;
	//Ïîêà ïåðâûé ýëåìåíò íå áóäåò ðàâåí íóëþ, óäàëÿåì ýëåìåíòû î÷åðåäè
	while (first != NULL)
	{
		next = first->next;					//Íàñòðîèëè óêàçàòåëü íà ïåðâûé ýëåìåíò
		delete first;							//Óäàëèëè åãî
		first = next;							//Ñëåäóþùèé ýëåìåíò ñòàë ïåðâûì
	}
}


//Ôóíêöèÿ óäàëåíèÿ ñòýêà
template<typename T>
void DeleteStack(List<T>* elemStack)
{
	List<T>* prev = NULL;
	//Ïîêà ýëåìåíòû åñòü, óäàëÿåì èõ
	while (elemStack != NULL)
	{
		prev = elemStack->prev;				//Íàñòðàèâàåì óêàçàòåëü íà ïðåäûäóùèé ýëåìåíò
		delete elemStack;						//Óäàëÿåì åãî
		elemStack = prev;						//Ïåðåõîäèì ê ñëåäóþùåìó ýëåìåíòó
	}
}
