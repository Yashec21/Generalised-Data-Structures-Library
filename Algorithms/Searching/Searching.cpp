#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////
//
//              Searching Algorithms using Generic Approach
//
///////////////////////////////////////////////////////////////////////

#pragma pack(1)

template <class T>
class Searching
{
    private:
        T *Arr;
        int iSize;

    public:
        Searching(int iNo);
        ~Searching();

        void Accept();
        void Display();

        bool LinearSearch(T iNo);
        bool BinarySearch(T iNo);
        bool BiDirectionalSearch(T iNo);
};

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     Searching
//  Input :             Size of array
//  Output :            Nothing
//  Description :       Used to initialise dynamic array
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
Searching<T>::Searching(int iNo)
{
    this->iSize = iNo;
    this->Arr = new T[this->iSize];
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     ~Searching
//  Input :             Nothing
//  Output :            Nothing
//  Description :       Used to release dynamically allocated memory
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
Searching<T>::~Searching()
{
    delete []this->Arr;
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     Accept
//  Input :             Nothing
//  Output :            Nothing
//  Description :       Used to accept elements of array
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void Searching<T>::Accept()
{
    int i = 0;

    cout<<"Enter the elements :\n";

    for(i = 0; i < this->iSize; i++)
    {
        cin>>this->Arr[i];
    }
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Input :             Nothing
//  Output :            Nothing
//  Description :       Used to display elements of array
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void Searching<T>::Display()
{
    int i = 0;

    cout<<"Elements of the array are :\n";

    for(i = 0; i < this->iSize; i++)
    {
        cout<<this->Arr[i]<<" ";
    }

    cout<<endl;
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     LinearSearch
//  Input :             Element to search
//  Output :            True / False
//  Description :       Used to search element using Linear Search
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
bool Searching<T>::LinearSearch(T iNo)
{
    int i = 0;

    for(i = 0; i < this->iSize; i++)
    {
        if(this->Arr[i] == iNo)
        {
            return true;
        }
    }

    return false;
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     BinarySearch
//  Input :             Element to search
//  Output :            True / False
//  Description :       Used to search element using Binary Search
//                      Array must be sorted
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
bool Searching<T>::BinarySearch(T iNo)
{
    int iStart = 0;
    int iEnd = this->iSize - 1;
    int iMid = 0;

    while(iStart <= iEnd)
    {
        iMid = iStart + (iEnd - iStart) / 2;

        if(this->Arr[iMid] == iNo)
        {
            return true;
        }
        else if(iNo < this->Arr[iMid])
        {
            iEnd = iMid - 1;
        }
        else
        {
            iStart = iMid + 1;
        }
    }

    return false;
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     BiDirectionalSearch
//  Input :             Element to search
//  Output :            True / False
//  Description :       Used to search element from both directions
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
bool Searching<T>::BiDirectionalSearch(T iNo)
{
    int iStart = 0;
    int iEnd = this->iSize - 1;

    while(iStart <= iEnd)
    {
        if(this->Arr[iStart] == iNo ||
           this->Arr[iEnd] == iNo)
        {
            return true;
        }

        iStart++;
        iEnd--;
    }

    return false;
}
