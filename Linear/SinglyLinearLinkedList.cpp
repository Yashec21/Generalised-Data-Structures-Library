#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////
//
//      Singly Linear Linked List using generic approach
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
class SinglyLL
{
    private:
        struct node<T> *first;
        int iCount;

    public:
        SinglyLL();

        void Display();

        int Count();

        void InsertFirst(T iNo);

        void InsertLast(T iNo);

        void InsertAtPos(T iNo, int iPos);

        void DeleteFirst();

        void DeleteLast();

        void DeleteAtPos(int iPos);
};

template <class T>
SinglyLL<T>::SinglyLL()
{
    this->first = NULL;
    this->iCount = 0;
}

///////////////////////////////////////////////////////////////////////
//      
//  Function Name :     Display
//  Input  :            nothing
//  Output :            Nothing
//  Description :       Used to display elements in linked list
//  Author :            Yash Pralhad Patil
//  Date :              07/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void SinglyLL<T>::Display()
{
    struct node<T> *temp = NULL;

    temp = this->first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp->next;
    }

    cout<<"NULL"<<endl;
}

///////////////////////////////////////////////////////////////////////
//      
//  Function Name :     Count
//  Input :            nothing
//  Output :            Nothing
//  Description :       Used to count elements in linked list
//  Author :            Yash Pralhad Patil
//  Date :              07/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
int SinglyLL<T>::Count()
{
    return this->iCount;
}

///////////////////////////////////////////////////////////////////////
//      
//  Function Name :     InsertFirst
//  Input  :            Data of node
//  Output :            Nothing
//  Description :       Used to insert node at first position
//  Author :            Yash Pralhad Patil
//  Date :              07/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void SinglyLL<T>::InsertFirst(T iNo)
{
    struct node<T> *newn = NULL;

    newn = new node<T>;

    newn->data = iNo;
    newn->next = NULL;

    if(this->iCount == 0)
    {
        this->first = newn;
    }
    else
    {
        newn->next = this->first;
        this->first = newn;
    }

    this->iCount++;
}

///////////////////////////////////////////////////////////////////////
//      
//  Function Name :     InsertLast
//  Input  :            Data of node
//  Output :            Nothing
//  Description :       Used to insert node at last position
//  Author :            Yash Pralhad Patil
//  Date :              07/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void SinglyLL<T>::InsertLast(T iNo)
{
    struct node<T> *newn = NULL;
    struct node<T> *temp = NULL;

    newn = new node<T>;

    newn->data = iNo;
    newn->next = NULL;

    if(this->iCount == 0)
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
//  Function Name :     InsertAtPos
//  Input :             Data of node
//  Output :            Nothing
//  Description :       Used to insert node at any position
//  Author :            Yash Pralhad Patil
//  Date :              07/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void SinglyLL<T>::InsertAtPos(T iNo, int iPos)
{
    int i = 0;

    struct node<T> *temp = NULL;
    struct node<T> *newn = NULL;

    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(iPos == 1)
    {
        this->InsertFirst(iNo);
    }
    else if(iPos == iCount + 1)
    {
        this->InsertLast(iNo);
    }
    else
    {
        newn = new node<T>;

        newn->data = iNo;
        newn->next = NULL;

        temp = this->first;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        this->iCount++;
    }
}

///////////////////////////////////////////////////////////////////////
//      
//  Function Name :     DeleteFirst
//  Input :             Data of node
//  Output :            Nothing
//  Description :       Used to Delete node at first position
//  Author :            Yash Pralhad Patil
//  Date :              07/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void SinglyLL<T>::DeleteFirst()
{
    if(this->first == NULL)
    {
        return;
    }
    else if(this->first->next == NULL)
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        struct node<T> *temp = NULL;

        temp = this->first;
        this->first = this->first->next;

        delete temp;
    }

    this->iCount--;
}

///////////////////////////////////////////////////////////////////////
//      
//  Function Name :     DeleteLast
//  Input :             Data of node
//  Output :            Nothing
//  Description :       Used to Delete node at last position
//  Author :            Yash Pralhad Patil
//  Date :              07/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void SinglyLL<T>::DeleteLast()
{
    struct node<T> *temp = NULL;

    if(this->first == NULL)
    {
        return;
    }
    else if(this->first->next == NULL)
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        temp = this->first;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    this->iCount--;
}

///////////////////////////////////////////////////////////////////////
//      
//  Function Name :     DeleteAtPos
//  Input :             Data of node
//  Output :            Nothing
//  Description :       Used to Delete node at any position
//  Author :            Yash Pralhad Patil
//  Date :              07/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void SinglyLL<T>::DeleteAtPos(int iPos)
{
    int i = 0;

    struct node<T> *temp = NULL;
    struct node<T> *target = NULL;

    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(iPos == 1)
    {
        this->DeleteFirst();
    }
    else if(iPos == iCount)
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

        delete target;

        this->iCount--;
    }
}

