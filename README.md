# Generalised Data Structures Library

A reusable and generic **C++ Data Structures Library** built using
**Object-Oriented Programming (OOP)** and **C++ Templates**. The project
provides implementations of commonly used linear and non-linear data
structures along with searching and sorting algorithms.

The main goal of this project is to build a modular, reusable library
that can work with different data types and can be integrated into
client applications.

## 📌 Project Overview

This project implements fundamental data structures in a generic and
reusable way using C++ templates.

The library focuses on:

-   Object-Oriented Programming
-   Generic Programming using Templates
-   Linear and Non-Linear Data Structures
-   Searching and Sorting Algorithms
-   Dynamic Memory Management
-   Reusable and Modular Software Design

The same data structure implementation can be used with different data
types such as `int`, `float`, `string`, and user-defined/custom objects.

------------------------------------------------------------------------

## 🚀 Features

### Linear Data Structures

-   Singly Linear Linked List
-   Singly Circular Linked List
-   Doubly Linear Linked List
-   Doubly Circular Linked List
-   Stack (LIFO)
-   Queue (FIFO)

### Non-Linear Data Structures

-   Binary Search Tree (BST)
    -   Insertion
    -   Deletion
    -   Traversal operations

### Searching Algorithms

-   Linear Search
-   Binary Search

### Sorting Algorithms

-   Bubble Sort
-   Selection Sort
-   Insertion Sort

### Generic Implementation

The library uses **C++ Templates** to provide data-type-independent
implementations.

Example:

``` cpp
SinglyLL<int> obj;
SinglyLL<float> obj;
SinglyLL<string> obj;
```

This approach avoids writing separate implementations for different data
types.

------------------------------------------------------------------------

## 🛠️ Technologies Used

  Technology       Purpose
  ---------------- ---------------------------------------------------
  C++              Core programming language
  OOP              Encapsulation, classes and reusable design
  C++ Templates    Generic programming
  Pointers         Dynamic data structure implementation
  Dynamic Memory   Runtime memory management
  STL Concepts     Understanding of standard data structure concepts
  Git & GitHub     Version control and project hosting

------------------------------------------------------------------------

## 🧠 Concepts Demonstrated

This project demonstrates practical understanding of:

-   Classes and Objects
-   Constructors
-   Encapsulation
-   Access Specifiers
-   Function Overloading
-   Templates
-   Pointers
-   Dynamic Memory Allocation
-   Linked Lists
-   Stack and Queue
-   Trees
-   Searching
-   Sorting
-   Modular and reusable code design

------------------------------------------------------------------------

## 📂 Project Structure

A clean organization for the library is:

``` text
Generalised-Data-Structures-Library/
│
├── README.md
├── LICENSE
│
├── include/
│   └── Data Structure Header Files
│
├── src/
│   └── Data Structure Implementations
│
└── examples/
    └── Client / Demonstration Programs
```

> The exact file organization may vary according to the implementation
> in the repository.

------------------------------------------------------------------------

## ⚙️ How to Run

### 1. Clone the Repository

``` bash
git clone https://github.com/Yashec21/Generalised-Data-Structures-Library.git
```

### 2. Open the Project

``` bash
cd Generalised-Data-Structures-Library
```

### 3. Compile a C++ Client Program

Using `g++`:

``` bash
g++ -std=c++17 <source-file>.cpp -o program
```

### 4. Run

On Windows:

``` bash
program.exe
```

On Linux/macOS:

``` bash
./program
```

> Use the source/example file available in the repository when
> compiling.

------------------------------------------------------------------------

## 💡 Generic Programming Example

A major feature of this project is the use of templates.

``` cpp
template <class T>
class Node
{
    public:
        T data;
        Node<T> *next;
};
```

The same structure can then be used with different data types:

``` cpp
Node<int> intNode;
Node<float> floatNode;
Node<string> stringNode;
```

This makes the implementation reusable and reduces duplicate code.

------------------------------------------------------------------------

## 📚 Data Structures

### 1. Singly Linear Linked List

A linear linked list where every node contains data and a pointer to the
next node.

### 2. Singly Circular Linked List

A linked list in which the last node points back to the first node.

### 3. Doubly Linear Linked List

Each node maintains links to both the previous and next nodes.

### 4. Doubly Circular Linked List

A doubly linked list where the last node is connected to the first node
and vice versa.

### 5. Stack

A LIFO (Last In, First Out) data structure.

### 6. Queue

A FIFO (First In, First Out) data structure.

### 7. Binary Search Tree

A non-linear data structure supporting operations such as insertion,
deletion and traversal.

------------------------------------------------------------------------

## 🔎 Searching Algorithms

The library includes fundamental searching techniques such as:

-   **Linear Search** -- sequentially checks elements.
-   **Binary Search** -- searches efficiently in sorted data by
    repeatedly dividing the search range.

------------------------------------------------------------------------

## 🔃 Sorting Algorithms

The project includes:

-   **Bubble Sort**
-   **Selection Sort**
-   **Insertion Sort**

These algorithms demonstrate the implementation and understanding of
fundamental sorting techniques.

------------------------------------------------------------------------

## 🎯 Learning Outcomes

By working on this project, the following skills are demonstrated:

-   Strong foundation in linear and non-linear data structures
-   Practical understanding of C++ OOP principles
-   Generic programming using templates
-   Understanding of searching and sorting algorithms
-   Dynamic memory and pointer-based implementation
-   Designing reusable and modular software components
-   Building a reusable C++ library for client applications

------------------------------------------------------------------------

## 🏗️ Project Objective

The objective of this project is not only to implement individual data
structures, but also to organize them as a **reusable generic library**.

The design focuses on:

``` text
Generic Implementation
        ↓
Object-Oriented Design
        ↓
Reusable Data Structures
        ↓
Searching & Sorting Algorithms
        ↓
Client Application Integration
```

------------------------------------------------------------------------

## 💼 Why This Project?

This project was developed to strengthen practical understanding of:

-   Data Structures
-   Algorithms
-   C++ Programming
-   OOP
-   Generic Programming
-   Memory Management
-   Reusable Software Design

It is especially useful for understanding how commonly used data
structures can be implemented from scratch instead of relying only on
ready-made library implementations.

------------------------------------------------------------------------

## 🎤 Interview Explanation

> I developed a Generalised Data Structures Library in C++ that provides
> generic and object-oriented implementations of linear and non-linear
> data structures such as linked lists, stacks, queues and binary search
> trees. I also implemented fundamental searching and sorting
> algorithms. I used C++ templates so that the same implementation can
> work with different data types. The main goal was to create a reusable
> and modular library that can be integrated with client applications.

------------------------------------------------------------------------

## 🔮 Future Enhancements

Possible improvements include:

-   Adding more non-linear data structures
-   Adding more searching and sorting algorithms
-   Improving error handling
-   Adding automated test cases
-   Adding detailed API documentation
-   Adding performance and complexity analysis
-   Providing more client-side demonstration programs

------------------------------------------------------------------------

## 📄 License

This project is available under the **MIT License**.

See the [LICENSE](LICENSE) file for details.

------------------------------------------------------------------------

## 👨‍💻 Author

**Yash Patil**

-   GitHub: [Yashec21](https://github.com/Yashec21)
-   LinkedIn: [Yash Patil](https://www.linkedin.com/in/yashpatilec/)

------------------------------------------------------------------------

## ⭐ Support

If you find this project useful for learning C++, Data Structures or
OOP, consider giving the repository a ⭐ on GitHub.
