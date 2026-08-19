# Generalised Data Structures Library

A C++ library that implements commonly used linear data structures using object-oriented programming concepts. The project focuses on understanding data structure implementation, memory management, and reusable C++ code.

## Data Structures Implemented

* Singly Linear Linked List
* Singly Circular Linked List
* Doubly Linear Linked List
* Doubly Circular Linked List
* Stack (LIFO – Last In, First Out)
* Queue (FIFO – First In, First Out)

## Features

* Object-oriented implementation
* Dynamic memory management
* Pointer-based data structures
* Reusable and modular code
* Implementation of common data structure operations

## Technologies Used

* **Language:** C++
* **Concepts:** Data Structures, OOP, Pointers, Dynamic Memory Allocation
* **Compiler:** GCC / G++

## Project Structure

```text
Generalised-Data-Structures-Library/
│
├── include/          # Header files
├── src/              # Source files
├── examples/         # Example programs
│
├── README.md         # Project documentation
└── .gitignore        # Git ignored files
```

## How to Run

### Prerequisites

Make sure a C++ compiler such as **G++** is installed on your system.

Check the compiler:

```bash
g++ --version
```

### Clone the Repository

```bash
git clone https://github.com/YourUsername/Generalised-Data-Structures-Library.git
```

### Navigate to the Project

```bash
cd Generalised-Data-Structures-Library
```

### Compile

If the project uses the `src`, `include`, and `examples` structure:

```bash
g++ examples/main.cpp src/*.cpp -I include -o main
```

### Run

**Windows:**

```bash
main.exe
```

**Linux/macOS:**

```bash
./main
```

> The compilation command may vary depending on the project structure and source file names.

## Example

A simple example of using a stack:

```cpp
Stack<int> stack;

stack.Push(10);
stack.Push(20);
stack.Push(30);

stack.Display();
```

## Purpose

The purpose of this project is to strengthen the understanding of fundamental data structures and their implementation in C++.

It also provides practical experience with:

* Pointers and dynamic memory
* Object-oriented programming
* Data structure operations
* Code organization
* Git and GitHub

## Learning Outcomes

Through this project, I gained practical experience in:

* Implementing linear data structures from scratch
* Managing dynamically allocated memory
* Understanding pointer-based structures
* Applying object-oriented programming concepts
* Organizing a C++ project
* Using Git for version control and GitHub for project management

## Future Improvements

* Add non-linear data structures such as trees and graphs
* Add unit testing
* Add CMake build support
* Improve documentation and examples

Author

Yash Patil

GitHub: Yashec21
LinkedIn: yashpatilec
