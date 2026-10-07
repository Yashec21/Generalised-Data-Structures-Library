///////////////////////////////////////////////////////////////////////
//
//              Stack using Generic Approach
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
class Stack
{
    private:
        struct node<T> *first;
        int iCount;

    public:
        Stack();

        void Push(T iNo);
        T Pop();
        T Peep();

        void Display();
        int Count();
};

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     Stack
//  Input :             Nothing
//  Output :            Nothing
//  Description :       Used to initialise stack
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
Stack<T>::Stack()
{
    this->first = NULL;
    this->iCount = 0;
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     Push
//  Input :             Data of node
//  Output :            Nothing
//  Description :       Used to insert element into stack
//                      Follows LIFO (Last In First Out)
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void Stack<T>::Push(T iNo)
{
    struct node<T> *newn = NULL;

    newn = new node<T>;

    newn->data = iNo;
    newn->next = NULL;

    newn->next = this->first;
    this->first = newn;

    this->iCount++;
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     Pop
//  Input :             Nothing
//  Output :            Deleted element
//  Description :       Used to delete top element from stack
//                      Follows LIFO (Last In First Out)
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
T Stack<T>::Pop()
{
    T iValue;

    struct node<T> *temp = NULL;

    if(this->first == NULL)
    {
        cout<<"Stack is empty\n";
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
//  Function Name :     Peep
//  Input :             Nothing
//  Output :            Top element
//  Description :       Used to return top element without deleting it
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
T Stack<T>::Peep()
{
    if(this->first == NULL)
    {
        cout<<"Stack is empty\n";
        return T();
    }

    return this->first->data;
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Input :             Nothing
//  Output :            Stack elements
//  Description :       Used to display all elements of stack
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void Stack<T>::Display()
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
//  Description :       Used to count elements of stack
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
int Stack<T>::Count()
{
    return this->iCount;
}

