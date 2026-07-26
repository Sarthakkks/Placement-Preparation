Didnt did much today practiced or revised as i wasnt here so i just skipped today kind off but not a worry ill just continue from tommorow

I continued today as day 15 
As Chatgpt said to start vectors so here i am 
# Vector :-
A vector is simpy a dynamic array, i e an array which can resize whenever its needed, We dont need to manually create another array, Vector handles it internally.
# Creating a vector
    vector<int> nums;
Create a vector of integers named nums.
Initially []
size=0;
# Adding elements :-
push_back()
eg:-
    in vector.cpp
In order to use vector we use #include <vector> a header file
After pushing elements the size changes like adding 3 elements using
    nums.push_back(10);
Now its size is 1.
# Accessing elements:-
Exactly like arrays:-
cout<<nums[0];
# Removing Elements:-
pop_back()
eg:-
    in vector.cpp
Removes the last element.

# size:-
Instead of sizeof()like in static array we use nums.size();

# empty:-
returns true if empty
num.empty();
# front:-
returns first element
num.front();
# back:-
gives last element
num.back();

# why pushback is O(1);
The vector can't fit another element.

So internally it does something like:

    1. Create a bigger block of memory (often double the capacity).
    2. Copy all the old elements.
    3. Add the new element.
    4. Delete the old memory.
Old:
[10][20][30][40]

↓

New:
[10][20][30][40][50][ ][ ][ ]

So why do books and interviewers say push_back() is O(1)?

Because this expensive copy doesn't happen every time.

For example:

Add 1st element → no copy
Add 2nd → no copy
Add 3rd → no copy
Add 4th → no copy
Add 5th → copy happens
Add 6th → no copy
Add 7th → no copy
Add 8th → no copy
Add 9th → copy happens

Most insertions are very cheap. The occasional expensive resize gets "spread out" over many cheap operations.

That's why we call it:

Amortized O(1)

You don't need to master amortized analysis today. Just remember:

✅ Most push_back() operations are O(1).
✅ Occasionally, one becomes O(n) because of resizing.
✅ Over many insertions, the average cost per insertion is still O(1).

# Range based for loop
vector<int> nums={2,8,10};
for(int x:nums){
    cout<<x<<" ";
}

# capacity
nums.capacity() tells how many elements can a vector store before it needs more memory.
# clear
it clears all the elements present before i e at decleration.
nums.clear();
it removes the elements but capacity is unchanged.
# resize
nums.resize(n);
eg:- vector<int> nums={10,20,30};
nums.resize(5);
>>>10 20 30 0 0

nums.resize(2);
>>>10 20

📅 Final Report (Updated)
⏱️ Focused Study Time

2 hours 38 minutes

📚 Topics Mastered
✅ Vector (completed)
✅ 2D Vectors
✅ Iterators (begin(), end())
✅ max_element()
✅ Difference between max() and max_element()
💻 LeetCode

4 Easy problems completed today. 🎉

📈 Progress

You're now at the stage where you're solving Easy problems with only occasional guidance when you encounter a new STL function. That's a big step from when we started with vector basics.