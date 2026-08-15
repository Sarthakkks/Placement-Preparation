📚 Day 29 — Saturday, Aug 15 Study Report

Despite the IMUN meeting in the middle and going off/on a few times, today was productive. More importantly, we continued the "learn concepts properly before grinding problems" approach.

🧠 Aptitude — ✅ 5/5

Covered:

Marked Price + Discount
Percentage change
Time & Work
Profit %
Ratio

Score: 5/5 🔥

Nice improvement from yesterday, especially Time & Work — yesterday you stopped at the combined rate; today you completed the calculation correctly.

💻 DSA — Hashing Fundamentals
New concepts learned

We started Hashing properly from the basics rather than counting previous exposure as completion.

You learned:

unordered_set

Stores unique values
insert()
count()
erase()
Best when the main question is "Have I seen this?"

unordered_map

Stores key → value
Access/update with [key]
count() for checking keys
Frequency counting with:
freq[x]++;

And most importantly, you learned the distinction:

Set → presence
Map → value associated with some information

✅ LC 217 — Contains Duplicate

You first tried a HashMap and wrote:

freq[i]++;

Then understood why that was wrong:

i = index ❌
nums[i] = actual number we want to track ✅

You corrected it to:

freq[nums[i]]++;

Then went one step further and realized we don't even need frequency here, so you rewrote it using:

unordered_set<int>

Accepted ✅

✅ LC 1 — Two Sum

We used this as a mixed-pattern recognition problem.

You initially thought:

Sliding Window + Hashing

Then learned why Sliding Window doesn't apply: there's no contiguous window requirement.

You learned the HashMap approach:

number → index

and:

complement = target - nums[i];

Then successfully wrote the complete solution yourself.

Accepted ✅

Hashing status: 🟡 Learning

We're not calling Hashing complete yet.

You've got the fundamentals now, but we'll revisit it through a few different problems rather than grinding Hashing exclusively for several days.

🖥️ CS Fundamentals — Memory

We moved forward from:

Compiler → Assembler → Linker → Loader

into RAM and program memory.

Learned today

RAM

Running programs need their working data/instructions in memory.
RAM provides much faster CPU access than persistent storage.
RAM is volatile.
Stack

Basic mental model:

Stack
├── Function calls
├── Local variables
└── Parameters

Example:

void fun() {
    int x = 10;
}

x is typically associated with the function's stack frame, which goes away when the function returns.

Heap

Used for dynamic allocation:

int* p = new int(10);

Conceptually:

Stack              Heap
p ───────────────→ 10

You understood that the pointer and the object it points to aren't necessarily stored in the same place.

🔗 Really good connection you made

You independently asked:

"Why do we store Linked Lists inside the heap? Is it because we can increase their size dynamically?"

And yes — you connected dynamic allocation to something we'd previously studied.

Linked-list nodes can be created dynamically as needed and can have lifetimes independent of the function that created a pointer to them.

That's the kind of cross-topic connection I want you developing.

🎓 Outside studying — IMUN

Today was also your first introductory meeting after getting selected for your college's IMUN organizing team.

Nothing major happened in the meeting, but it was still your first step into an organizing committee.

You also mentioned potentially applying to your college's coding club when recruitment happens. Given that you tried in first semester but have developed considerably more technical experience since then, we've decided:

Apply again when recruitment opens. ✅

We don't need to collect clubs, but a technical club aligns well with what you're already working toward.

📊 Day 29 Scorecard
Area	Today
Aptitude	✅ 5/5
DSA concepts	✅ Hashing fundamentals
LeetCode	✅ 217 + 1
unordered_set	✅ Basics
unordered_map	✅ Basics
CS Fundamentals	✅ RAM + Stack/Heap basics
IMUN	✅ First team meeting
Coding club	🎯 Apply when recruitment opens