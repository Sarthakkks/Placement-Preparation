Did Merge sort again on my own yeah i forgot few thing but did much faster then yesterday.

then moved towards quick sort- the one with pivot element.
it had partition function which majorly did everything and provided pivot index

# Linked List
Problem with Array - 1. fixed size
                    2.insertion is costly
                    3.complexity O(1)
                    4.cannot overfill

Linked List is a data structure which stores elements anywhere in memory and each elements simply stored the address of next element.
it contains two parts 1. data
                    2.address of next node.

This is why Linked Lists exist.
Array               	                Linked List
Fixed size          	                Dynamic size
Contiguous memory	                    Scattered memory
Insert/Delete in middle = O(n)      	O(1) (if you already have the node)
Random access O(1)                  	Random access O(n)

Linked list is do better at inserting it middle or so but fetching the element it will need to travel all the previous ones
like for array its just arr[499];
but for LL we have to 1->2->3..... till 500
which makes time complexity O(n)

To represent a node:-
a node has :-
    1.data
    2.address of next node


To understand it further 
# Class in C++
It is a blueprint which describes multiple data it doesnt create something but just hold details to make Objects.

A class is just a blueprint. It doesn't occupy memory for an actual object until we create one.

It doesnt store any memory

Object:-
Student s1;
this is an object
which stores the actual data

It has its own memory.

To remove garbage value as what if we dont initialize anythig inside the class and call it just after making object it contains nothing so in oreder to handle this C++ have Constructors.

# Constructors:-
Whenever the object is created C++ automatically runs a special function called the constructor, Its job is to initialize the object.
It must have same name as of Class.
like :- class Student
{
public:
    Student()
    {

    }
};

here the function name is same as of class.
A constructor has no return type.
So basically its a special function having same name as f class and having no return type(like int,void etc.).

Every Object is initialized by the constructor so if 2 are created then the constructor will be initialized twice.

A constructor can also take parameters just like normal functions.

# this pointer:-
class Student
{
public:
    string name;
    int age;

    Student(string name, int age)
    {
        name = name;
        age = age;
    }
};

There are actually four variables involved.

Class members
-------------
name
age

Constructor parameters
----------------------
name
age

Now C++ follows a rule:

<!-- A local variable or parameter has higher priority than a member variable if they have the same name. -->

So inside the constructor,

name = name;

actually means:

parameter_name = parameter_name;

Similarly,

age = age;

means:

parameter_age = parameter_age;

The object's member variables are never updated.

Imagine this:

Parameter name  ------> "Sarthak"
                     │
                     └──────► Parameter name

Object's name  ------> (still uninitialized)

So after:

Student s1("Sarthak", 20);

the object's memory is still something like:

s1
-----------------
name = ""
age = garbage

because we only assigned the parameters to themselves.

So how do we tell C++:

"No, I want to assign to the object's name, not the parameter's name."

<!-- C++ gives us a special pointer called this. -->

<!-- Every object has a hidden pointer called this that points to itself. -->

So inside the constructor, we can write:

class Student
{
public:
    string name;
    int age;

    Student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

Read it like English:

this->name → the current object's name
name → the constructor parameter

<!-- C++ automatically creates this pointer 
Whenever a member function is called the compiler secretly passes the current object. -->

total session was approximately 
# 4 hours 38 minutes

It wasn't 4 hours 38 minutes of nonstop coding though—you had discussions, thinking time, quizzes, and concept building. Here's what you accomplished:

✅ Rewrote Merge Sort from scratch
✅ Revised and mastered Quick Sort
✅ Understood partitioning deeply
✅ Transitioned to Linked Lists
✅ Learned Classes & Objects
✅ Constructors (default & parameterized)
✅ Why name = name doesn't work
✅ this pointer
✅ Stack vs Heap
✅ Introduction to new
