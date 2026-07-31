📅 Study Report — 31 July 2026 (Study Day 19)

Today's session was a mix of DSA and NPTEL, and honestly it was a productive day.

🧠 DSA (Binary Search)
✅ LeetCode 153 — Find Minimum in Rotated Sorted Array

You derived the algorithm yourself instead of memorizing it.

Key concepts mastered
nums[mid] > nums[high]
Minimum lies in the right half
low = mid + 1
nums[mid] <= nums[high]
Minimum could be mid
high = mid
Important corrections learned
while(low < high) instead of <=
high = mid instead of mid-1
Final complexity
Time: O(log n)
Space: O(1)
💻 NPTEL (Week 1)

We started preparing for the assignments due on 5 August.

Instead of memorizing answers, we focused on understanding each STL function.

STL / C++ concepts learned today
✅ lexicographical_compare()
Dictionary order comparison
Custom comparator functions
Function pointers (passing compare)
✅ binary_search()
Range is [first, last)
Second iterator is excluded
✅ rotate()
rotate(first, middle, last)

Mental model:

A | B
↓

B A
✅ sort()
sort(first, last)

Again:

[first, last)
✅ replace()
replace(first,last,old,new)

Replaces every occurrence of old with new.

✅ vector

Learned:

push_back()
resize()
ASCII values
Character vectors
✅ string

Difference between

+
append()
strcat()
insert()
✅ stack

Operations:

push()
pop()
top()
empty()

Dry-ran a stack question manually.

✅ Boolean output

Learned:

cout << true;

prints

1

unless

boolalpha

is used.

🎯 Biggest takeaway today

You realized something important:

Most NPTEL questions aren't difficult because of logic.

They're difficult because they introduce STL functions you've never studied.

Once the function is explained, you're able to solve the question.

📚 Topics covered today
Rotated Binary Search
STL Algorithms
STL Containers
Strings
Iterators
Pointer arithmetic
Boolean logic
ASCII values