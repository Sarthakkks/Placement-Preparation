# new :-

Normally int x=10;
goes into stack memory
and when x goes out of scope it is automatically removed
eg:-
void fun(){
    int x=10;
}
when fun() finishes,
x=10 from stack is automatically removed.

What if we dont want memory to disappear automatically.
Stack cannot do it,

So thats why C++ provides another area of memory
# Two types of memory:-
1.Stack                 2.Heap
automatic               Manual
fast                    we create
deleted automatically   we delete

Heap is a large pool of memory.Nothing is created automatically we have to explicitly ask for memory.

We use new keyword
new
It asks memory from heap.

eg :- int* p= new int;
new int means allocate memory for one integer on heap.

the value is initially garbage untill we assign something to it.

Now we need a pointer to store the address given by heap as 
    new int returns some address in memory like
        5000
    but where we will store it
    like :- int x=new int;      No, because we get address from new int ,not an integer.
    So hence we use Pointers.
hence we write int* p=new int;
where p is stored in stack.

# How do we use it now once we get the access to heap:-
like p=10;
No cause p stores address so when we write 10 we change address, hence we use *operator 
*p=10;
which means p contains 5000 and *p means "Go to the address stored in p"
which stores the value at that address inside heap.

So when we write cout<<*p we get the value at that address
and cout<<p we get address of it.
ex:-in new.cpp

# Two pointer storing same address.
int* p = new int;

*p = 10;

int* q = p;

*q = 50;

cout << *p << endl;
cout << *q;

# Memory Diagram

Initially:

Stack

+----------+      +----------+
| p = 5000 |      | q = 5000 |
+----------+      +----------+
      \                 /
       \               /
        \             /
         V           V

           Heap

          Address 5000

            +------+
            |  10  |
            +------+

Now,

*q = 50;

means:

Go to address 5000 and store 50.

Notice it doesn't matter whether you used p or q.

Both point to the same address.

Memory becomes:

Stack

+----------+      +----------+
| p = 5000 |      | q = 5000 |
+----------+      +----------+
      \                 /
       \               /
        \             /
         V           V

            Heap

        Address 5000

        +------+
        |  50  |
        +------+

So,cout << *p;

prints

50 and cout<<*q; also 50.

<!-- Pointers don't store values; they store addresses. If two pointers store the same address, they access the same memory. -->

# delete
We use delete in order to remove the heap memory occupied by the integer when the work is done .

delete p;

What does it actually do:-
"The heap memory at the address storing in p is no longer needed.Free it"

So did p disappear?
No, The pointer variable is still on the stack
it contains 5000 ie address.
but that no longer belong to it and the heap memory is released.

but what if we call it after deleting like eg:- delete.cpp
p still contains an address but address points to freed memory , This is called 
# Dangling pointer.
Its like having the address of a house that has already been demolished.
then it might cause printing garbage,crashing,or even work seem to an accident.

Can we safely do?
cout<<*p;
after deleting , No we cannot safely dereference it.
because after delete, the behaviour is undefined.
it might:
print value,print garbage,crash,or work today and fail tommorow.

So in order to remove the address from p we use nullptr.
# nullptr
after:-
    delete p;
we get dangling pointer.
so we often do
    p=nullptr;
So when p is nullptr it doesnt point to valid memory, Dereferencing it is still an error , but checking for nullptr before use is a common and safe practice.
    if(p!=nullptr){
        cout<<*p;
    }
Why is it better than leaving the old address?
Case 1:- delete p;
    p still contains 
        5000
looks valid adddress , but it isnt.     Dangerous

Case 2:-delete p;
        p=nullptr;
Now it tells This pointer is not pointing any valid object.   Safer
    cout<<p;
If we print after case 2 it shows either nullptr or 0.
    cout<<*p;
This will cause an error(undefined behaviour).


Now again We continue Linked List.
# Linked List continue
📊 Day 10 Study Report

📅 Date: Today

⏰ Timeline
1:12 PM – Started study session.
1:20 PM – 1:37 PM – Break.
1:37 PM – 3:00 PM – Continued study.
3:00 PM – 3:28 PM – Break.
3:28 PM – 3:55 PM – Continued study.
3:55 PM – 4:21 PM – Water break.
4:21 PM – 5:21 PM – Continued study.
5:21 PM – Session ended.
📚 Topics Covered
✅ Quick Sort Revision
Revised partition logic.
Reviewed recursive calls.
Discussed why the extra if inside the partition loop is often used as a safety check.
✅ Modern C++ Memory Concepts
new
Heap vs Stack
Pointer dereferencing
Multiple pointers to the same memory
delete
Dangling pointers
nullptr
✅ Linked Lists (Foundation)

Covered:

Why arrays have limitations.
Why linked lists exist.
Node class.
Node* next.
Creating nodes on the heap.
Constructor for Node.
Why next is initialized to nullptr.
Connecting two nodes.

You also understood:

first->next = second;

and eventually realized that

first->next->data

is effectively

second->data

which is a very important intuition.

🧠 Concepts You Answered Correctly

✅ Why Node* next is a pointer.

✅ Stack vs Heap allocation.

✅ Purpose of nullptr.

✅ Why constructors initialize next.

✅ Memory layout of nodes.

✅ Linking two nodes.

⏱️ Approximate Study Time

Total session:

1:12 PM → 5:21 PM = 4 hours 9 minutes

Breaks:

17 min
28 min
26 min

Total break time = 71 minutes

📖 Net focused study time

≈ 2 hours 58 minutes

That's nearly 3 hours of focused learning, and today's topic (pointers + linked lists) is one of the hardest transitions for many C++ learners.
