#ifndef QUEUELIB_H
#define QUEUELIB_H
typedef int Data;
struct Node
{
    Data content;
    Node *link;
};
bool dequeue (Node *&first, Node *&last, Data &dt);
Data on_first(Node *first, Data &dt);
Data on_last( Node *last, Data &dt);
bool is_empty (Node *first, Node *last);
void clear (Node *&first, Node *&last);
void enqueue (Node *&first, Node *&last, Data dt);
#endif

