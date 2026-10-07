# Generalised Data Structures Library

A C++ based generic data structures and algorithms library implemented using **Object-Oriented Programming (OOP)** and **C++ Templates**.

The project demonstrates reusable implementations of linear and non-linear data structures together with searching and sorting algorithms.

## Features

### Linear Data Structures
- Singly Linear Linked List
- Singly Circular Linked List
- Doubly Linear Linked List
- Doubly Circular Linked List
- Stack (LIFO)
- Queue (FIFO)

### Non-Linear Data Structures
- Binary Search Tree (BST)
  - Insert
  - Search
  - Inorder Traversal
  - Preorder Traversal
  - Postorder Traversal
  - Count

### Searching Algorithms
- Linear Search
- Binary Search
- Bi-Directional Search

### Sorting Algorithms
- Bubble Sort
- Selection Sort
- Insertion Sort

### Generic Programming
The implementations use C++ templates so the same data structure or algorithm can work with different data types.

Example:
```cpp
SinglyLL<int> obj;
SinglyLL<double> obj;
Sorting<int> sortObj(5);
Searching<int> searchObj(5);
```

## Project Structure

```text
Generalised-Data-Structures-Library/
│
├── README.md
├── .gitignore
│
├── Linear/
│   ├── SinglyLinearLinkedList.cpp
│   ├── SinglyCircularLinkedList.cpp
│   ├── DoublyLinearLinkedList.cpp
│   ├── DoublyCircularLinkedList.cpp
│   ├── Stack.cpp
│   └── Queue.cpp
│
├── Non-Linear/
│   └── BinarySearchTree.cpp
│
└── Algorithms/
    ├── Searching/
    │   └── Searching.cpp
    │
    └── Sorting/
        └── Sorting.cpp
```

## Technologies Used

- C++
- Object-Oriented Programming
- Templates / Generic Programming
- Data Structures
- Searching Algorithms
- Sorting Algorithms
- Dynamic Memory Allocation

## How to Use

Each `.cpp` file contains a generic class implementation. You can include the required implementation in a driver program and create objects for the required data type.

For example:

```cpp
Sorting<int> obj(5);
obj.Accept();
obj.BubbleSort();
obj.Display();
```

For searching:

```cpp
Searching<int> obj(5);
obj.Accept();

bool found = obj.LinearSearch(20);
```

For Binary Search, the array must be sorted before calling `BinarySearch()`.

## Learning Outcomes

- Understanding linear and non-linear data structures
- Implementing data structures using C++
- Applying OOP concepts
- Understanding templates and generic programming
- Implementing searching and sorting algorithms
- Working with dynamic memory
- Building reusable and modular C++ code

## Author

**Yash Pralhad Patil**

- GitHub: https://github.com/Yashec21
- LinkedIn: https://www.linkedin.com/in/yashpatilec/

## License

This project is available under the MIT License.
