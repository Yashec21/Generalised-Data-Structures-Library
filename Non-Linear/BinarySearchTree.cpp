///////////////////////////////////////////////////////////////////////////////
//
//              Non-Linear Data Structure
//
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////
//
//              Binary Search Tree using Generic Approach
//
///////////////////////////////////////////////////////////////////////

#pragma pack(1)

template <class T>
struct node
{
    T data;
    struct node<T> *left;
    struct node<T> *right;
};

template <class T>
class BinarySearchTree
{
    private:
        struct node<T> *root;
        int iCount;

        void Insert(struct node<T> *root, T iNo);
        bool Search(struct node<T> *root, T iNo);

        void Inorder(struct node<T> *root);
        void Preorder(struct node<T> *root);
        void Postorder(struct node<T> *root);

    public:
        BinarySearchTree();

        void Insert(T iNo);
        bool Search(T iNo);

        void Inorder();
        void Preorder();
        void Postorder();

        int Count();
};

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     BinarySearchTree
//  Input :             Nothing
//  Output :            Nothing
//  Description :       Used to initialise Binary Search Tree
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
BinarySearchTree<T>::BinarySearchTree()
{
    this->root = NULL;
    this->iCount = 0;
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     Insert
//  Input :             Data of node
//  Output :            Nothing
//  Description :       Used to insert element into Binary Search Tree
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void BinarySearchTree<T>::Insert(T iNo)
{
    if(this->root == NULL)
    {
        this->root = new node<T>;

        this->root->data = iNo;
        this->root->left = NULL;
        this->root->right = NULL;

        this->iCount++;

        return;
    }

    this->Insert(this->root, iNo);
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     Insert
//  Input :             Root node, Data of node
//  Output :            Nothing
//  Description :       Used internally to insert node recursively
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void BinarySearchTree<T>::Insert(struct node<T> *root, T iNo)
{
    if(iNo < root->data)
    {
        if(root->left == NULL)
        {
            root->left = new node<T>;

            root->left->data = iNo;
            root->left->left = NULL;
            root->left->right = NULL;

            this->iCount++;
        }
        else
        {
            this->Insert(root->left, iNo);
        }
    }
    else if(iNo > root->data)
    {
        if(root->right == NULL)
        {
            root->right = new node<T>;

            root->right->data = iNo;
            root->right->left = NULL;
            root->right->right = NULL;

            this->iCount++;
        }
        else
        {
            this->Insert(root->right, iNo);
        }
    }
    else
    {
        cout<<"Duplicate element is not allowed\n";
    }
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     Search
//  Input :             Element to search
//  Output :            True / False
//  Description :       Used to search element in Binary Search Tree
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
bool BinarySearchTree<T>::Search(T iNo)
{
    return this->Search(this->root, iNo);
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     Search
//  Input :             Root node, Element to search
//  Output :            True / False
//  Description :       Used internally to search element recursively
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
bool BinarySearchTree<T>::Search(struct node<T> *root, T iNo)
{
    if(root == NULL)
    {
        return false;
    }

    if(root->data == iNo)
    {
        return true;
    }

    if(iNo < root->data)
    {
        return this->Search(root->left, iNo);
    }
    else
    {
        return this->Search(root->right, iNo);
    }
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     Inorder
//  Input :             Nothing
//  Output :            Elements in Inorder
//  Description :       Used to display tree in Inorder traversal
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void BinarySearchTree<T>::Inorder()
{
    this->Inorder(this->root);

    cout<<endl;
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     Inorder
//  Input :             Root node
//  Output :            Nothing
//  Description :       Used internally for Inorder traversal
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void BinarySearchTree<T>::Inorder(struct node<T> *root)
{
    if(root == NULL)
    {
        return;
    }

    this->Inorder(root->left);

    cout<<root->data<<" ";

    this->Inorder(root->right);
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     Preorder
//  Input :             Nothing
//  Output :            Elements in Preorder
//  Description :       Used to display tree in Preorder traversal
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void BinarySearchTree<T>::Preorder()
{
    this->Preorder(this->root);

    cout<<endl;
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     Preorder
//  Input :             Root node
//  Output :            Nothing
//  Description :       Used internally for Preorder traversal
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void BinarySearchTree<T>::Preorder(struct node<T> *root)
{
    if(root == NULL)
    {
        return;
    }

    cout<<root->data<<" ";

    this->Preorder(root->left);

    this->Preorder(root->right);
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     Postorder
//  Input :             Nothing
//  Output :            Elements in Postorder
//  Description :       Used to display tree in Postorder traversal
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void BinarySearchTree<T>::Postorder()
{
    this->Postorder(this->root);

    cout<<endl;
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     Postorder
//  Input :             Root node
//  Output :            Nothing
//  Description :       Used internally for Postorder traversal
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
void BinarySearchTree<T>::Postorder(struct node<T> *root)
{
    if(root == NULL)
    {
        return;
    }

    this->Postorder(root->left);

    this->Postorder(root->right);

    cout<<root->data<<" ";
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     Count
//  Input :             Nothing
//  Output :            Number of nodes
//  Description :       Used to count nodes in Binary Search Tree
//  Author :            Yash Pralhad Patil
//  Date :              08/10/2026
//
///////////////////////////////////////////////////////////////////////

template <class T>
int BinarySearchTree<T>::Count()
{
    return this->iCount;
}