#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////
//
//              Sorting Algorithms using Generic Approach
//
///////////////////////////////////////////////////////////////////////

#pragma pack(1)

template <class T>
class Sorting
{
    private:
        T *Arr;
        int iSize;

    public:
        Sorting(int iNo);
        ~Sorting();

        void Accept();
        void Display();

        void BubbleSort();
        void SelectionSort();
        void InsertionSort();
};

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     Sorting
//  Input :             Size of array
//  Output :            Nothing
//  Description :       Used to initialise dynamic array
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
Sorting<T>::Sorting(int iNo)
{
    this->iSize = iNo;
    this->Arr = new T[this->iSize];
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     ~Sorting
//  Input :             Nothing
//  Output :            Nothing
//  Description :       Used to release dynamically allocated memory
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
Sorting<T>::~Sorting()
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
void Sorting<T>::Accept()
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
void Sorting<T>::Display()
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
//  Function Name :     BubbleSort
//  Input :             Nothing
//  Output :            Nothing
//  Description :       Used to sort elements using Bubble Sort
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void Sorting<T>::BubbleSort()
{
    int i = 0;
    int j = 0;

    T temp;

    for(i = 0; i < this->iSize - 1; i++)
    {
        for(j = 0; j < this->iSize - i - 1; j++)
        {
            if(this->Arr[j] > this->Arr[j + 1])
            {
                temp = this->Arr[j];
                this->Arr[j] = this->Arr[j + 1];
                this->Arr[j + 1] = temp;
            }
        }
    }
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     SelectionSort
//  Input :             Nothing
//  Output :            Nothing
//  Description :       Used to sort elements using Selection Sort
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void Sorting<T>::SelectionSort()
{
    int i = 0;
    int j = 0;
    int iMin = 0;

    T temp;

    for(i = 0; i < this->iSize - 1; i++)
    {
        iMin = i;

        for(j = i + 1; j < this->iSize; j++)
        {
            if(this->Arr[j] < this->Arr[iMin])
            {
                iMin = j;
            }
        }

        if(iMin != i)
        {
            temp = this->Arr[i];
            this->Arr[i] = this->Arr[iMin];
            this->Arr[iMin] = temp;
        }
    }
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     InsertionSort
//  Input :             Nothing
//  Output :            Nothing
//  Description :       Used to sort elements using Insertion Sort
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void Sorting<T>::InsertionSort()
{
    int i = 0;
    int j = 0;

    T selected;

    for(i = 1; i < this->iSize; i++)
    {
        selected = this->Arr[i];

        j = i - 1;

        while(j >= 0 && this->Arr[j] > selected)
        {
            this->Arr[j + 1] = this->Arr[j];
            j--;
        }

        this->Arr[j + 1] = selected;
    }
}
