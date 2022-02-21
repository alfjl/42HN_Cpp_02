# 42_Cpp_Module_02

The goal of the **C++ modules 00 to 08** is to introduce the student to Object-Oriented Programming and the C++ programming language in general.
Because of the complexity of the language, the students code has to comply with the C++98 standard.  
From Module 02 to Module 08, the classes must be designed in the Orthodox Canonical Form, except when explicitely stated otherwise.

**C++ module 02** introduces the learner to fundamental concepts like ad-hoc polymorphism, operator overloading and the Orthodox Canonical class form. Further, the idea of fixed-point numbers is introduced and compared with integers and floating point numbers.

## Description

ex00:  
Create a class in Orthodox Canonical Form that represents a fixed-point number.  
(first intro to the 'Orthodox Canonical Class' form; Gain deep knowledge about the internal workings behind ints, floats and fixed-point numbers)

ex01:  
Embalish your fixed-point class with different constructors, member functions and overload of "<<"(insertion) operator.
(understand function and operator overloading)

ex02:  
Add public member functions to fixed-point class to overload the following operators: >, <, >=, <=, ==, !=, +, -, *, /, i++, ++i, i--, --i.
Also add 4 overloaded static member functions min and max.
(Deep dive into operator overloading)

ex03:  
Implement a function which uses your fixed-point class and indicates, whether a point is inside of a triangle or not.
(understand the concepts behind 'Binary Space Partitioning')

## Learnings

A great time to really concern myself with how integers and floating-point numbers are processed by the computer, how they differ, and what the pros and cons of fixed-point numbers are, in relation to other data types.

### Resources

The most important of them all and my bible for the next 8 projects:
* [cplusplus.com](http://www.cplusplus.com/)
* [Understanding & using floating point numbers](https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point.html)
* [Floating point number representation](https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_representation.html)
* [Printing floating point numbers](https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_printing.html)
* [IEEE 754](https://www.youtube.com/watch?v=RuKkePyo9zk)
* [Introduction to fixed-point numbers](https://inst.eecs.berkeley.edu//~cs61c/sp06/handout/fixedpt.html)
* [Fixed-point number video](https://www.youtube.com/watch?v=QFlbvSeBkwY)
