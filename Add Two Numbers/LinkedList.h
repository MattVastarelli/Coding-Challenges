#ifndef LINKEDLIST_H
#define LINKEDLIST_H
//------------------------------------------------------------------------------
#include <iostream>
#include <queue>
//------------------------------------------------------------------------------
using namespace std;
//------------------------------------------------------------------------------
struct node;
//------------------------------------------------------------------------------
class LinkedList
{
    public:
        LinkedList();	
        ~LinkedList();

        void addData(int info);

        LinkedList addTwoList(LinkedList, LinkedList);

	void print();

    private:
        node* head;
        node* tail;
};
//------------------------------------------------------------------------------
#endif /* LINKEDLIST_H */
