#include "queuelib.h"
#include <iostream>

void enqueue (Node *&first, Node *&last, Data dt)
{
    Node *temp=NULL;
    temp=new Node;
    temp->content=dt;
    temp->link=NULL;
    if(last)
    {
        last->link=temp;
    }
    last=temp;
    if(!first)
    {
        first=last;
    }
    temp=NULL;
}

bool dequeue (Node *&first, Node *&last, Data &dt)
{
    if (is_empty(first, last))
        return false;
    Node *temp=NULL;
    temp=first ;
    first=first->link;
    dt=temp->content;
    temp->content=0;
    temp->link=NULL;
    delete temp;
    temp=NULL;
    return true;
}

Data on_first(Node *first, Data &dt)
{
    if (first)
    {
        dt=first->content;
        return dt;
    }
    return -1;
}

Data on_last( Node *last, Data &dt)
{
    if (last)
    {
        dt=last->content;
        return dt;
    }
    return -1;
}

bool is_empty (Node *first, Node *last)
{
    return first&&last==NULL;
    //if(first&&last)
    //return false;
    // return true;
}

void clear (Node *&first, Node *&last)
{
    while(!is_empty(first, last))
    {
        Node *temp;
        temp=last;
        last=temp->link;
        temp->content=0;
        temp->link=NULL;
        delete temp;
        temp=NULL;
    }
}
