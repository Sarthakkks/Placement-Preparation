Good night, bro. 😎 Get some sleep—you've got the gym tomorrow. Here's your report.

📅 Day 17 Report (28 July 2026)
⏱️ Study Time

~2 hours (effective learning)

📚 Topics Covered
✅ STL Algorithms Revision
unique()
remove()
fill()
Iterator arithmetic
✅ Iterator Concepts

You became much more comfortable with iterators.

You now understand:

it - begin() gives the index.
begin() points to the first element.
end() points one position past the last element.
STL algorithms usually return iterators instead of indices.
✅ unique()

Revised:

Removes consecutive duplicates.
Doesn't resize the vector.
Returns an iterator to the new logical end.
Difference between using only unique() vs erase(unique(...), end()).
✅ remove()

This was today's biggest achievement.

You understood:

remove(first, last, value)
The third parameter is the value to "remove".
It doesn't erase elements.
It shifts the elements you want to keep to the front.
It returns an iterator to the new logical end.

Edge cases you solved correctly:

✔ Some elements removed

[5,1,5,2,5,3]
→ [1,2,3,?, ?, ?]

✔ All elements removed

[5,5,5]
→ it == begin()

✔ Nothing removed

[1,2,3]
→ it == end()
✅ fill()

Learned how it works with iterators.

fill(it, nums.end(), 0);

This perfectly complements remove() for problems like Move Zeroes.

🧠 Problem Solving
LeetCode 283 — Move Zeroes

Instead of giving you the answer immediately, we built it from:

Understanding remove()
Understanding iterators
Understanding fill()

This is exactly how interview preparation should feel.

📈 Biggest Improvement Today

A few days ago you were asking:

"Why does unique() return an iterator?"

Today you were answering questions like:

Where does it point?
What is it - begin()?
What happens if nothing is removed?
What happens if everything is removed?

That's a huge jump in understanding.