#ifndef rpn
#define rpn

#include <iostream>
#include <stack>
#include <string>
#include <sstream>

using namespace std;

void rpn_calc(){
	stack<double> da_stack;
	while(true){
		cout<< "\n------------\nЭта функция вычисления обратной польской записи\n";
		cout<< "Вводите выражения вида x y + =\n";
		cout<< "Q - Для выхода\n";
		string in;
		cin >> in;
		if(in == "+"){
			double a = da_stack.top();
			da_stack.pop();
			double b = da_stack.top();
			da_stack.pop();
			da_stack.push(a + b);
		}
		else if(in == "-"){
			double a = da_stack.top();
			da_stack.pop();
			double b = da_stack.top();
			da_stack.pop();
			da_stack.push(a - b);

		}
		else if(in == "*"){
			double a = da_stack.top();
			da_stack.pop();
			double b = da_stack.top();
			da_stack.pop();
			da_stack.push(a * b);

		}
		else if(in == "/"){
			double a = da_stack.top();
			da_stack.pop();
			double b = da_stack.top();
			da_stack.pop();
			da_stack.push(a / b);

		}
		else if(in == "="){
			if(da_stack.size() != 1){
				cout << "Выражение некорректно" << endl;
			}
			else{
				cout << da_stack.top() << endl;
				da_stack.pop();				
			}
		}
		else{
			double d;
			stringstream ss(in);
    		ss >> d;

	        da_stack.push(d);
		}
		if (in == "Q") break;
	}

}
#endif
