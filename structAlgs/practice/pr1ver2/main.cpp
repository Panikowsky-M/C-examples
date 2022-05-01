#include <iostream>
#include "queuelib.h"
using namespace std;
int main()
{
    Node *first=NULL;
    Node *last=NULL;
    int member, num;
    cout<<"Enter the number of elements: ";
    cin>>num;
    for (int i=0; i<num; i++)
    {
        cout<<endl<<"Enter the element: "<<endl;
        cin>>member;
        enqueue(first, last, member);
        cout<<"First element: "<<on_first(first, member)<<endl;
        cout<<"Last element: "<<on_last(last, member)<<endl;
    }
    cout<<endl<<"Is our queue empty?"<<endl;
    cout<<is_empty(first, last);
    cout<<endl<<"Let's clear the queue!"<<endl;
    clear(first, last);
    cout<<endl<<"Is it empty now?"<<endl;
    cout<<is_empty(first, last);
    return 0;
}
