📅 Day 21 Report
✅ DSA
🟢 LeetCode 74 - Search a 2D Matrix
Solved almost completely by yourself. 🎉
Learned a new binary search pattern:
Treat matrix as a virtual sorted array.
row = mid / cols
col = mid % cols

⭐⭐⭐⭐⭐

🟡 LeetCode 875 - Koko Eating Bananas

Today we discovered the most important idea:

Binary Search on the Answer

You understood:

✅ We're searching speed, not an index.
✅ low = 1
✅ high = max(piles)
✅ As speed increases, required hours never increase (monotonic property).

Tomorrow we'll finish it by writing the helper that calculates the hours for a given speed.