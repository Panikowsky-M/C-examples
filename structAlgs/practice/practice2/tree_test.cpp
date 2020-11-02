#include "AVLTree.h"
#include <iostream>
#include <string>
using std::cout;
using std::endl;

int main() {
	
	AVLTree<int>* s = new AVLTree<int>();	
	
	cout << "Вставка 5, 4, 3..." << endl;
	s->insert(5);
	s->insert(4);	
	s->insert(3);		
	
	//s->visualPrint(" ", " / ", " \\ ");
	s->inOrderTraversal();
	cout << endl;
	
	cout << "Вставка 7, 6, 8..." << endl;
	s->insert(7);
	s->insert(6);	
	s->insert(8);		
	
	//s->visualPrint("   ", " / ", " \\ ");
	s->inOrderTraversal();
	cout << endl;

	cout << "Удаление 8" << endl;
	s->remove(8);	
	
	//s->visualPrint("   ", " / ", " \\ ");
	s->inOrderTraversal();
	cout << endl;

	delete s;
}
