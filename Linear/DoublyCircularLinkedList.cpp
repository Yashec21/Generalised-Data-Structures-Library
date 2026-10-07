#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////
//
//      Doubly Circular Linked List using generic approach
//
///////////////////////////////////////////////////////////////////////

#pragma pack(1)

template <class T>
struct node
{
    T data;
    struct node<T> *next;
    struct node<T> *prev;
};

template <class T>
class DoublyCL
{
    private:
        struct node<T> *first;
        struct node<T> *last;
        int iCount;

    public:
        DoublyCL();

        void Display();
        int Count();

        void InsertFirst(T iNo);
        void InsertLast(T iNo);
        void InsertAtPos(T iNo, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     DoublyCL
//  Input :             Nothing
//  Output :            Nothing
//  Description :       Used to initialise doubly circular linked list
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
DoublyCL<T>::DoublyCL()
{
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Input :             Nothing
//  Output :            Nothing
//  Description :       Used to display elements in circular linked list
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void DoublyCL<T>::Display()
{
    struct node<T> *temp = NULL;

    if(this->first == NULL && this->last == NULL)
    {
        return;
    }

    temp = this->first;

    do
    {
        cout<<"| "<<temp->data<<" | <=> ";

        temp = temp->next;

    } while(temp != this->first);

    cout<<endl;
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     Count
//  Input :             Nothing
//  Output :            Number of nodes
//  Description :       Used to count elements in circular linked list
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
int DoublyCL<T>::Count()
{
    return this->iCount;
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     InsertFirst
//  Input :             Data of node
//  Output :            Nothing
//  Description :       Used to insert node at first position
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void DoublyCL<T>::InsertFirst(T iNo)
{
    struct node<T> *newn = NULL;

    newn = new node<T>;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(this->first == NULL && this->last == NULL)
    {
        this->first = newn;
        this->last = newn;

        this->first->next = this->first;
        this->first->prev = this->first;
    }
    else
    {
        newn->next = this->first;
        newn->prev = this->last;

        this->first->prev = newn;
        this->last->next = newn;

        this->first = newn;
    }

    this->iCount++;
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     InsertLast
//  Input :             Data of node
//  Output :            Nothing
//  Description :       Used to insert node at last position
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void DoublyCL<T>::InsertLast(T iNo)
{
    struct node<T> *newn = NULL;

    newn = new node<T>;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(this->first == NULL && this->last == NULL)
    {
        this->first = newn;
        this->last = newn;

        this->first->next = this->first;
        this->first->prev = this->first;
    }
    else
    {
        newn->next = this->first;
        newn->prev = this->last;

        this->last->next = newn;
        this->first->prev = newn;

        this->last = newn;
    }

    this->iCount++;
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     InsertAtPos
//  Input :             Data of node, Position
//  Output :            Nothing
//  Description :       Used to insert node at any position
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void DoublyCL<T>::InsertAtPos(T iNo, int iPos)
{
    int i = 0;

    struct node<T> *temp = NULL;
    struct node<T> *newn = NULL;

    if((iPos < 1) || (iPos > this->iCount + 1))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(iPos == 1)
    {
        this->InsertFirst(iNo);
    }
    else if(iPos == this->iCount + 1)
    {
        this->InsertLast(iNo);
    }
    else
    {
        newn = new node<T>;

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        temp = this->first;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        newn->prev = temp;

        temp->next->prev = newn;
        temp->next = newn;

        this->iCount++;
    }
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     DeleteFirst
//  Input :             Nothing
//  Output :            Nothing
//  Description :       Used to delete node from first position
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void DoublyCL<T>::DeleteFirst()
{
    struct node<T> *temp = NULL;

    if(this->first == NULL && this->last == NULL)
    {
        return;
    }
    else if(this->first == this->last)
    {
        delete this->first;

        this->first = NULL;
        this->last = NULL;
    }
    else
    {
        temp = this->first;

        this->first = this->first->next;

        this->first->prev = this->last;
        this->last->next = this->first;

        delete temp;
    }

    this->iCount--;
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     DeleteLast
//  Input :             Nothing
//  Output :            Nothing
//  Description :       Used to delete node from last position
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void DoublyCL<T>::DeleteLast()
{
    struct node<T> *temp = NULL;

    if(this->first == NULL && this->last == NULL)
    {
        return;
    }
    else if(this->first == this->last)
    {
        delete this->last;

        this->first = NULL;
        this->last = NULL;
    }
    else
    {
        temp = this->last;

        this->last = this->last->prev;

        this->last->next = this->first;
        this->first->prev = this->last;

        delete temp;
    }

    this->iCount--;
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     DeleteAtPos
//  Input :             Position
//  Output :            Nothing
//  Description :       Used to delete node from any position
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void DoublyCL<T>::DeleteAtPos(int iPos)
{
    int i = 0;

    struct node<T> *temp = NULL;
    struct node<T> *target = NULL;

    if((iPos < 1) || (iPos > this->iCount))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(iPos == 1)
    {
        this->DeleteFirst();
    }
    else if(iPos == this->iCount)
    {
        this->DeleteLast();
    }
    else
    {
        temp = this->first;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        target = temp->next;

        temp->next = target->next;
        target->next->prev = temp;

        delete target;

        this->iCount--;
    }
}

