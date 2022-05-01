#ifndef polnot
#define polnot

#include<iostream>
#include<cstring>
#include"list.h"
#include"structio.h"
using namespace std;






/*Ôóíêöèÿ îïðåäåëåíèÿ ïðèîðèòåòà çíàêà îïåðàòîðà*/
int Priority(char symbol)
{
	int import = 0;			//Ñòåïåíü ïðèîðèòåòà äàííîé îïåðàöèè
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

/*Ïîäïðîãðàììà, êîòîðàÿ èíôèêñíóþ ôîðìó
çàïèñè â ïðåôèêñíóþ.
(Ïðÿìàÿ ïîëüñêàÿ çàïèñü)*/
	void PrePN(char * expr)
	{
		int len = strlen(expr);			        	    //Äëèíà âûðàæåíèÿ.
		List<char> * elemStack = NULL;		        	//Ïîñëåäíèé ýëåìåíò ñòåêà.
		List<char> * firstElemQ = NULL;		            //Ïåðâûé ýëåìåíò î÷åðåäè.
		List<char> * elemQ = NULL;			        	//Ïîñëåäíèé ýëåìåíò î÷åðåäè.
														//Ïîñèìâîëüíî ïðîâåðÿåì âûðàæåíèå ñ êîíöà.
		for (int i = len - 1; i >= 0; i--)
		{
			/*Åñëè ýëåìåíò íå ñîîòâåòñòâóåò íè îäíîìó èç îïåðàòîðîâ.*/
			if ((expr[i] != '+') && (expr[i] != '-') && (expr[i] != '*') && (expr[i] != '/') && (expr[i] != '^') && (expr[i] != '(') && (expr[i] != ')'))
			{
				/*È åñëè î÷åðåäü ïóñòà, òî çàïèñûâàåì ýëåìåíò â íå¸*/
				if (firstElemQ == NULL)
				{
					firstElemQ = PushBack(firstElemQ, expr[i]);		     //Äîáàâëåíèå ïåðâîãî ýëåìåíòà
					elemQ = firstElemQ;									 //Ïîñëåäíèé ñòàíîâèòñÿ ïåðâûì
				}
				//Åñëè â î÷åðåäè åñòü ýëåìåíòû, äîáàâëÿåì ñëåäóþùèé 
				else
				{
					elemQ = PushBack(elemQ, expr[i]);					//Äîáàâëÿåì ñëåäóþùèé ýëåìåíò
				}
			}
			/*Åñëè ýëåìåíò ñîîòâåòñòâóåò îïåðàòîðó*/
			else
			{
				/*Åñëè íåò ðàçäåëèòåëÿ, òî ñòàâèì åãî*/
				if (elemQ != NULL && elemQ->key != ' ')
				{
					elemQ = PushBack(elemQ, ' ');
				}
				/*È åñëè ñòýê ïóñò, òî äîáàâëÿåì â íåãî îïåðàòîð*/
				if (elemStack == NULL)
				{
					elemStack = PushBack(elemStack, expr[i]);			//Äîáàâëåíèå îïåðàòîðà â ñòýê
				}
				/*Èíà÷å, åñëè ïðèîðèòåò îïåðàòîðà áîëüøå ÷åì çàïèñàííûé,
				èëè îí ðàâåí ")", òî  äîáàâëÿåì åãî â ñòýê*/
				else if (Priority(expr[i]) >= Priority(elemStack->key) || (expr[i] == ')'))
				{
					elemStack = PushBack(elemStack, expr[i]);			//Äîáàâëåíèå îïåðàòîðà â ñòýê
				}
				/*Åñëè ïðèîðèòåò ìåíüøå, è îïåðàòîð íå ðàâåí ")",
				òî çàïèñûâàåì åãî â î÷åðåäü*/
				else if (Priority(expr[i]) < Priority(elemStack->key) && expr[i] != ')')
				{
					/*Ïîêà íå íàøëè ýëåìåíòà â ñòýêå ñ ïðèîðèòåòîì ðàâíûì ïðèîðèòåòó òåêóùåãî ñèìâîëà*/
					while (elemStack != NULL  && Priority(expr[i]) < Priority(elemStack->key))
					{
						elemQ = PushBack(elemQ, elemStack->key);		//Çàïèñü ýëåìåíòà â î÷åðåäü
						elemStack = PopBack(elemStack);				//Óäàëÿåì ýëåìåíò ñ âåðõóøêè ñòýêà
					}
					/*Åñëè ýëåìåíò ðàâåí "(", òî óäàëÿåì ïîñëåäíèé ýëåìåíò ñòýêà,
					êîòîðûé ÿâëÿåòñÿ ñêîáêîé*/
					if (expr[i] == '(')
					{
						elemStack = PopBack(elemStack);
					}
					/*Èíà÷å çàïèñûâàåì ýëåìåíò*/
					else
					{
						elemStack = PushBack(elemStack, expr[i]);
					}
				}
			}
		}
		RefreshOut(elemStack, firstElemQ);		//Çàïèñü ïðåîáðàçîâàííîãî âûðàæåíèÿ íàîáîðîò è åå âûâîä
		DeleteQueue(firstElemQ);				//Óäàëåíèå î÷åðåäè
		DeleteStack(elemStack);					//Óäàëåíèå ñòýêà

	}


	/*Ôóíêöèÿ äëÿ ïðîâåðêè âûðàæåíèÿ íà ïðàâèëüíîñòü*/
	bool Check(char * str)
	{
		int len = strlen(str);			//Äëèíà ñòðîêè
		bool correct = true;			//Êîððåêòíîñòü âûðàæåíèÿ
		int NumLeftBkt = 0;				//Êîëè÷åñòâî îòêðûâàþùèõ ñêîáîê
		int NumRightBkt = 0;			//Êîëè÷åñòâî çàêðûâàþùèõ ñêîáîê				
										//Ïðîõîäèì ïî ñòðîêå
		for (int i = 0; i < len; i++)
		{
			/*Åñëè ïîäðÿä èäóò îïåðàòîðû, âîçâðàùàåì false*/
			if (Priority(str[i]) > 1 && Priority(str[i + 1]) > 1)
			{
				correct = false;
				i = len;
			}
			/*Åñëè ïîäðÿä èäóò ñêîáêè, âîçâðàùàåì false*/
			//else if (Priority(str[i]) == 1 && Priority(str[i + 1]) == 1)
			else if ((str[i] == '(' && str[i + 1] == ')') || (str[i] == ')' && str[i + 1] == '('))
			{
				correct = false;
				i = len;
			}
			/*Åñëè ïîñëå îïåðàíäà èä¸ò îòêðûâàþùàÿñÿ ñêîáêà,
			èëè ïîñëå çàêðûâàþùåéñÿ ñêîáêè èä¸ò îïåðàíä,
			ïðè ýòîì íå êîíåö ñòðîêè, òî âîçâðàùàåì false*/
			else if ((Priority(str[i]) == 0 && str[i + 1] == '(') || (str[i] == ')' && Priority(str[i + 1]) == 0 && i + 1 != len))
			{
				correct = false;
				i = len;
			}
			/*Åñëè âûðàæåíèå íà÷èíàåòñÿ èëè êîí÷àåòñÿ çíàêîì îïåðàòîðà, òî âîçâðàùàåì false*/
			else if (Priority(str[0]) > 1 || Priority(str[i]) > 1 && i == len - 1)
			{
				correct = false;
				i = len;
			}
			/*Åñëè íàøëè îòêðûâàþùóþñÿ ñêîáêó, çàïèñûâàåì åå â ñ÷¸ò÷èê*/
			else if (str[i] == '(')
			{
				NumLeftBkt++;
			}
			/*Åñëè íàøëè çàêðûâàþùóþñÿ, è êîëè÷åñòâî îòêðûâàþùèõñÿ áîëüøå,
			òî çàïèñûâàåì â ñ÷¸ò÷èê*/
			else if (str[i] == ')' && NumLeftBkt > NumRightBkt)
			{
				NumRightBkt++;
			}
		}
		/*Åñëè êîëè÷åñòâî ñêîáîê íå÷åòíîå, âîçâðàùàåì false*/
		if ((NumLeftBkt + NumRightBkt) % 2 != 0)
		{
			correct = false;
		}
		return correct;
	}


	/*Ïîäïðîãðàììà, âûáîðà äàëüíåéøèõ äåéñòâèé.*/
	void PNMenu()
	{

		char* expr = new char[5];		//Âûäåëåíèå ïàìÿòè äëÿ ñòðîêè
		int choice = -1;			//Ïåðåìåííàÿ âûáîðà
									//Âûáîð äåéñòâèé
		while (true)
		{
				cout << "Вводите выражение:\n";

				cin >> expr;
			if (strlen(expr) == 0 || Check(expr) == false)
			{
				cout << "Строка пуста или неверна";
				cin >> expr;
			}
			cout << "\nПрямая польская запись: ";
			PrePN(expr);			//Âûçîâ ôóíêöèè ðàáîòû ñ ÏÏÇ
		}
		
		cout << endl;
	
}
#endif
