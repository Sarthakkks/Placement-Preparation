📅 Day 18 Report

Date: 30 July 2026

⏱️ Study Duration
Approximately 1.5–2 hours of focused DSA.
📚 Topics Covered
✅ Time Complexity Revision
O(1)
O(log n)
O(n)
O(n log n)
O(n²)
Dominant term analysis
Loop complexity practice
✅ Binary Search Fundamentals

Learned:

Why Binary Search requires a sorted array
low, high, mid
Dry running step by step
Choosing left vs right half
while(low <= high)
low = mid + 1
high = mid - 1
✅ Integer Overflow

Understood why:

(low + high) / 2

can overflow.

Safe version:

low + (high - low) / 2
💻 Problems Solved
✅ LeetCode 704 — Binary Search
Implemented Binary Search from scratch.
Understood why return -1 is necessary.
✅ LeetCode 35 — Search Insert Position
Solved independently.
Key insight:
return low;

when the target is not found.