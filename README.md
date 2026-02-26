📚 Data Structures Implementation in C++
📌 Overview

This project contains custom implementations of fundamental Data Structures in C++ using templates.

All structures were implemented manually without using STL containers, to deeply understand memory management and data structure behavior.

The project includes:

✅ Doubly Linked List

✅ Dynamic Array

✅ Queue (Linked List Based)

✅ Queue (Dynamic Array Based)

✅ Stack (Linked List Based)

✅ Stack (Dynamic Array Based)

🧱 Implemented Classes
1️⃣ clsDblLinkedList<T>

A template implementation of a Doubly Linked List.

Features:

Insert at beginning

Insert at end

Insert after node

Delete first node

Delete last node

Delete specific node

Reverse list

Find value

Get item by index

Update item

Clear list

Size & IsEmpty

Concepts Used:

Pointers

Dynamic memory allocation

Manual node linking

Bidirectional traversal

2️⃣ clsDynamicArray<T>

A custom implementation of a Dynamic Array.

Features:

Resize

Insert at index

Insert at beginning

Insert at end

Insert before / after index

Delete item at index

Delete by value

Reverse array

Find value

Get / Set item

Clear array

Concepts Used:

Dynamic memory allocation (new / delete)

Manual resizing

Deep copying

Memory management

3️⃣ clsMyQueue<T> (Linked List Based)

Queue implemented using clsDblLinkedList.

Operations:

push()

pop()

Front()

Back()

Size()

IsEmpty()

Reverse()

InsertAfter()

UpdateItem()

Clear()

Queue Principle:

FIFO → First In First Out

4️⃣ clsMyQueueArr<T> (Array Based)

Queue implemented using clsDynamicArray.

Same queue behavior but using array internally.

5️⃣ clsMyStack<T> (Linked List Based)

Stack implemented by inheriting from Queue class.

Operations:

push()

Top()

Bottom()

Stack Principle:

LIFO → Last In First Out

6️⃣ clsMyStackArr<T> (Array Based)

Stack implemented using dynamic array version.

🛠️ Technologies Used

C++

Templates

Object Oriented Programming (OOP)

Manual Memory Management

🎯 Learning Goals

This project was created to:

Practice template programming

Understand pointer manipulation

Master memory allocation

Implement data structures from scratch

Strengthen OOP skills

Avoid using STL to understand internal behavior

📂 Project Structure
clsDblLinkedList.h
clsDynamicArray.h
clsMyQueue.h
clsMyQueueArr.h
clsMyStack.h
clsMyStackArr.h
⚠️ Notes

All classes are template-based.

No STL containers were used.

Designed for educational purposes.

Manual memory handling is used throughout the project.

🚀 Future Improvements

Implement copy constructor & assignment operator (Rule of Three)

Improve performance of dynamic array (capacity concept)

Add exception handling

Add const correctness

Add iterators

Add unit testing

👨‍💻 Author

Developed as part of Data Structures practice in C++.
