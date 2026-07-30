start at 7:51 am
# STL Algorithm
1. sort()
it arranges elements in ascending order by default.
    Syntax- sort(v.begin(),v.end());
eg:-algo.cpp
⚙️ How does it work?
sort(v.begin(), v.end());

means

"Sort everything starting from the first element up to (but not including) end()."

Remember:

begin()                 end()
   ↓                      ↓
[5][2][8][1][9]

end() is one past the last element.
time complexity:- O(nlogn);
🧠 The Golden Rule

Every STL algorithm follows this pattern:

algorithm(first, last);

Where it works on:

[first, last)

That means:

✅ first is included.
❌ last is excluded.
2. reverse()
it reverses the order of elements.
Syntax:- reverse(v.begin(),v.end());
eg:-rev.cpp
time complexity-O(n);
3. find()
it searches for an element in a range.
instead of
bool found = false;
for(int i = 0; i < v.size(); i++){
    if(v[i] == 7){
        found = true;
        break;
    }
}
we simply write find(v.begin(),v.end(),value);
Why do we mostly use auto with STL?

Because iterator types are long.

Instead of

vector<int>::iterator it = max_element(v.begin(), v.end());

we write

auto it = max_element(v.begin(), v.end());

Much easier to read.
4. count()
it counts how many times an element appears in range
instead of  
    int cnt = 0;
    for(int x : v){
        if(x == 5)
            cnt++;
    }
we write count(v.begin(),v.end(),value);
time complexity O(n)

5. min_element()
it returns an iterator pointing to the smallest element in the range.
auto it=min_element(v.begin,v.end());
to get value=
    cout<<*it;
    or
    cout<<*min_element(v.begin,v.end());

time complexity-O(n)
6. max_element()
it returns an iterator pointing to the biggest element in range.
auto it=max_element(v.begin(),v.end);
to get value=
    cout<<*it;
    cout<<*max_element(v.begin,v.end);
to get index
    cout<<it-v.begin();

7. binary_search()
it checks wheather an element exists in a sorted array/vector
It returns a bool
if(binary_search(v.begin(), v.end(), 7))
    cout << "Found";
else
    cout << "Not Found";

time complexity=O(logn)
much faster than find()(O(n)),but only if data is sorted.
8. lower_bound()
It returns an iterator to the first element thatis greater than or equal to the given value.
Example
vector<int> v = {1,3,3,3,5,7};

auto it = lower_bound(v.begin(), v.end(), 3);

It points to the first 3:

Index : 0 1 2 3 4 5
Value : 1 3 3 3 5 7
          ^
time compleity-O(logn)
but it requires the vector to be sorted.
9. upper_bound()
It returns the iterator to the first element that is strictly grater than the given value.
Easy way to remember:
lower_bound(x) → first element ≥ x
upper_bound(x) → first element > x

Only one symbol changes!
# ⭐ Powerful Trick

Suppose you want to know how many times 2 appears.

vector<int> v = {1,2,2,2,5,7};

int freq = upper_bound(v.begin(), v.end(), 2)
         - lower_bound(v.begin(), v.end(), 2);

Let's calculate:

lower_bound(2) → index 1
upper_bound(2) → index 4

So:

4 - 1 = 3

There are 3 occurrences of 2.

This trick is asked in coding interviews quite often.

10. accumulate()
It calculates the sum of elements in a range.
Instead of writing:

int sum = 0;

for(int x : v)
    sum += x;

You simply write:

accumulate(v.begin(), v.end(), 0);
📝 Syntax
accumulate(first, last, initial_value);
#include <numeric> uses this header
time complexity=O(n)

11. erase()
it removes the element from a vector
    one element
    v.erase(v.begin()+2);
    range
    v.erase(v.begin()+1,v.begin()+4)
time complexity=O(n)
12. unique()
it deletes consequtive duplicate elements.
vector<int> v = {1,2,2,2,3,3,4};

auto it = unique(v.begin(), v.end());
>>>1 2 3 4 ? ? ?
it return iterator pointing after the last unique element
The vector size is still 7.

That's why we almost always write:

v.erase(unique(v.begin(), v.end()), v.end());

This removes the leftover garbage values.

13. swap()
it swaps two varables.
int a = 10;
int b = 20;

swap(a, b);
>>>a=20 b=10

vector<int> a = {1,2,3};
vector<int> b = {4,5};

swap(a, b);
Result:

a = {4,5}
b = {1,2,3}
time complexity-O(1)

14. min() and max()
min()
returns the smaller of two values.
max()
returns the larger of two values
⚠️ Difference from min_element() and max_element()

This is something interviewers love to test.

Function	Works on	Returns
min(a,b)	Two values	Value
max(a,b)	Two values	Value
min_element()	Range (vector/array)	Iterator
max_element()	Range (vector/array)	Iterator
time complexity-O(1)
15. next_permutation()
it rearranges the elements into the next lexicographically grater permutation.
