#include "LinkedList.h"

//------------------------------------------------------------------------------
int main()
{
    //make two list objects
    LinkedList list1;
    LinkedList list2;
    LinkedList answerList;

    //Add the data
    list1.addData(2);
    list1.addData(4);
    list1.addData(3);

    list2.addData(5);
    list2.addData(6);
    list2.addData(4);

    //Add the lists
    answerList = answerList.addTwoList(list1, list2);

    //Print the lists
    cout << "List One Data: ";
    list1.print();
    cout << "List Two Data: ";
    list2.print();
    cout << "Returned list Data: ";
    answerList.print();

    return 0;
}
//------------------------------------------------------------------------------
