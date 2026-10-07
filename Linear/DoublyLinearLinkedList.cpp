///////////////////////////////////////////////////////////////////////
//
//      Doubly Linear Linked List using generic approach
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
class DoublyLL
{
    private:
        struct node<T> *first;
        int iCount;

    public:
        DoublyLL();

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
//  Function Name :     DoublyLL
//  Input :             Nothing
//  Output :            Nothing
//  Description :       Used to initialise doubly linear linked list
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
DoublyLL<T>::DoublyLL()
{
    this->first = NULL;
    this->iCount = 0;
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Input :             Nothing
//  Output :            Nothing
//  Description :       Used to display elements in linked list
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void DoublyLL<T>::Display()
{
    struct node<T> *temp = NULL;

    temp = this->first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | <=> ";

        temp = temp->next;
    }

    cout<<"NULL"<<endl;
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     Count
//  Input :             Nothing
//  Output :            Number of nodes
//  Description :       Used to count elements in linked list
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
int DoublyLL<T>::Count()
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
void DoublyLL<T>::InsertFirst(T iNo)
{
    struct node<T> *newn = NULL;

    newn = new node<T>;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        newn->next = this->first;
        this->first->prev = newn;
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
void DoublyLL<T>::InsertLast(T iNo)
{
    struct node<T> *newn = NULL;
    struct node<T> *temp = NULL;

    newn = new node<T>;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

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
        newn->prev = temp;
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
void DoublyLL<T>::InsertAtPos(T iNo, int iPos)
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
void DoublyLL<T>::DeleteFirst()
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

        this->first = this->first->next;

        this->first->prev = NULL;

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
void DoublyLL<T>::DeleteLast()
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

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->prev->next = NULL;

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
void DoublyLL<T>::DeleteAtPos(int iPos)
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

