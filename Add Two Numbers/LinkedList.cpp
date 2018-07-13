#include "LinkedList.h"
//------------------------------------------------------------------------------
struct node {
    int data;
    node* next;
};
//------------------------------------------------------------------------------
LinkedList::LinkedList()
{ 
    // Make the Tail
    node* newNode;
    newNode = new node;
    newNode->data = 0;
    newNode->next = NULL;
    tail = newNode;   

    // Make the Header
    node* newNode2;
    newNode2 = new node;
    newNode2->data = 0;
    newNode2->next = tail;
    head = newNode2;
 }
 //-----------------------------------------------------------------------------
 void LinkedList::addData(int info)
 {
    node* ptr;
    node* newNode;
    newNode = new node;
    newNode->data = info;
    newNode->next = tail;
    ptr = head;

    while(ptr->next != tail)
        ptr = ptr->next;
    
    ptr->next = newNode;

    return;
 }
//------------------------------------------------------------------------------
  void LinkedList::print()
  {
    node* ptr;
    ptr = head->next;

    while(ptr->next != NULL)
    {
        cout << ptr->data << "" "";
        ptr = ptr->next;
    }
    cout << endl;
  }
//------------------------------------------------------------------------------
LinkedList LinkedList::addTwoList (LinkedList list1, LinkedList list2)
{
    LinkedList answerList;
    node* ptr1;
    node* ptr2;
    queue<int> intQueue1;
    queue<int> intQueue2;
    queue<int> tmpQeue;
    bool carryThe1 = false;

   ptr1 = list1.head->next;
   ptr2 = list2.head->next;

    //queue the data
    while(ptr1->next != NULL)
    {
        intQueue1.push(ptr1->data);
        ptr1 = ptr1->next;
    }

    while(ptr2->next != NULL)
    {
        intQueue2.push(ptr2->data);
        ptr2 = ptr2->next;
    }

    //check for equal  queue - padd with 0's if needed
    if (intQueue1.size() > intQueue2.size()) 
    {
        for(int i = 1; i <=  intQueue1.size() - intQueue2.size() ; i++)
            intQueue2.push(0);            
    }
     if (intQueue1.size() < intQueue2.size()) 
     {
        for(int i = 1; i <=  intQueue2.size() - intQueue1.size() ; i++)
            intQueue2.push(0);   
    }
    //Sum the numbers and make the list
    while(!intQueue1.empty() & !intQueue2.empty())
    {
        int tmp = intQueue1.front() + intQueue2.front();
        //check if a 1 needs to be carried from last time
         if (carryThe1) 
        {   
            // carry the 1
            tmp += 1;
             //check again 
            if (tmp < 10)
                carryThe1 = false;
            else
                carryThe1 = true;
        }
        //Check for  > 9
        if (tmp > 9)
        {
            carryThe1 = true;
            answerList.addData(tmp - 10);
         }
        else
            answerList.addData(tmp);
        
         intQueue1.pop();
         intQueue2.pop();
    }
    return answerList;
}
//------------------------------------------------------------------------------
LinkedList::~LinkedList()
{ }
//------------------------------------------------------------------------------
