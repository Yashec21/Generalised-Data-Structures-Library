#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////
//
//              Queue using Generic Approach
//              Implementation using Singly Linked List
//
///////////////////////////////////////////////////////////////////////

#pragma pack(1)

template <class T>
struct node
{
    T data;
    struct node<T> *next;
};

template <class T>
class Queue
{
    private:
        struct node<T> *first;
        int iCount;

    public:
        Queue();

        void Enqueue(T iNo);
        T Dequeue();

        void Display();
        int Count();
};

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     Queue
//  Input :             Nothing
//  Output :            Nothing
//  Description :       Used to initialise queue
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
Queue<T>::Queue()
{
    this->first = NULL;
    this->iCount = 0;
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     Enqueue
//  Input :             Data of node
//  Output :            Nothing
//  Description :       Used to insert element into queue
//                      Follows FIFO (First In First Out)
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void Queue<T>::Enqueue(T iNo)
{
    struct node<T> *newn = NULL;
    struct node<T> *temp = NULL;

    newn = new node<T>;

    newn->data = iNo;
    newn->next = NULL;

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        temp = this->first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }

    this->iCount++;
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     Dequeue
//  Input :             Nothing
//  Output :            Deleted element
//  Description :       Used to delete first element from queue
//                      Follows FIFO (First In First Out)
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
T Queue<T>::Dequeue()
{
    T iValue;

    struct node<T> *temp = NULL;

    if(this->first == NULL)
    {
        cout<<"Queue is empty...\n";

        return T();
    }

    iValue = this->first->data;

    temp = this->first;

    this->first = this->first->next;

    delete temp;

    this->iCount--;

    return iValue;
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Input :             Nothing
//  Output :            Queue elements
//  Description :       Used to display all elements of queue
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void Queue<T>::Display()
{
    struct node<T> *temp = NULL;

    temp = this->first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |\n";

        temp = temp->next;
    }
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     Count
//  Input :             Nothing
//  Output :            Number of elements
//  Description :       Used to count elements of queue
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
int Queue<T>::Count()
{
    return this->iCount;
}

