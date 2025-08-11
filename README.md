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

Program 2

Aim:
Write a C++ program to demonstrate accessing array elements using pointers.

Theory:
In C++, the name of an array (like arr) represents the address of the first element.
A pointer can be assigned to point to the first element of the array.
Using pointer arithmetic (ptr++), the pointer can move through the array elements.
Dereferencing the pointer (*ptr) gives the value of the current array element.
This program initializes an integer array and prints its elements by accessing them via a pointer.

Algorithm:
- Start.
- Declare and initialize an integer array arr with elements {10, 20, 30}.
- Print the value of the first element by dereferencing the array name *arr.
- Declare an integer pointer ptr and assign it the address of the first element of arr.
- Run a loop for i from 0 to 2:
- Print the value pointed to by ptr (*ptr).
- Increment the pointer to point to the next element (ptr++).
- End.

Program 3
Aim:
Write a C++ program to demonstrate how to use pointers to access and modify variables, and how arrays behave like pointers.

Theory:
Pointers:
A pointer is a variable that stores the address of another variable.
The * operator (dereferencing) is used to access or modify the value stored at the address a pointer points to.
The & operator gives the address of a variable.
Modifying a Variable Using a Pointer:
cpp
Copy
Edit
int a = 10;
int* aptr = &a;
*aptr = 20; // changes the value of a to 20Here, *aptr = 20; updates the value at the address of a.
Array and Pointers:
The name of an array (arr) is a constant pointer to its first element.
So *arr gives the value of the first element of the array.
In your program:
a is initialized to 10, and its value is accessed using the pointer.
The pointer is used to update a to 20.
arr is an array, and *arr accesses arr[0], which is 10.

Algorithm:
- Start the program.
- Declare an integer variable a and assign value 10.
- Declare a pointer aptr and assign it the address of a.
- Print the value at the pointer (*aptr), which is 10.
- Change the value at aptr to 20 using *aptr = 20.
- Print the new value of a, which is now 20.
- Declare an integer array arr with values {10, 20, 30}.
- Print *arr, which accesses the first element of the array.
- End the program.

Program 4

 AIM:
Write a C++ program to print the first element of an array using a pointer (i.e., using *arr syntax).

 THEORY:
In C++, the name of an array (like arr) acts as a pointer to the first element of the array.

Key Concepts:
arr is the base address of the array (i.e., address of arr[0]).
*arr dereferences that address to get the value stored at arr[0].

 ALGORITHM:
- Start.
- Declare and initialize an integer array arr with values {10, 20, 30}.
- Use the dereference operator * on the array name to access the first element.
- Print the value of the first element using cout.
- End.





\
