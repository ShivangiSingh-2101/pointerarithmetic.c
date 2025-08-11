Program 1
Aim:
Write a C++ program to demonstrate the use of pointers by storing the address of a variable and accessing its value using the pointer.

Theory:
A pointer in C++ is a variable that stores the memory address of another variable. Pointers are powerful tools that allow indirect access and manipulation of variables.

The & operator is used to get the address of a variable.

The * operator (dereference operator) is used to access or modify the value stored at the memory address a pointer holds.

Printing a pointer variable displays the memory address it points to.

In this program:

a is an integer variable initialized with 10.

aptr is a pointer to an integer and stores the address of a.

Using *aptr, we access the value stored at the address, which is the value of a.

Printing aptr and &a shows the same memory address.

Algorithm:
- Start.
- Declare an integer variable a and initialize it with 10.
- Declare an integer pointer variable aptr.
- Assign the address of a to aptr using aptr = &a.
- Print the value of a.
- Print the value pointed to by aptr using *aptr.
- Print the address stored in aptr.
- Print the address of a using &a.
- End.

