## Problem: Valid Anagram (Easy)
**Link:** https://leetcode.com/problems/valid-anagram/

### Approach
Used a fixed-size frequency array of 26 integers representing lowercase English letters. Incremented counts for characters in `s` and decremented for `t`, then verified all counts returned to zero.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
Checking `strlen(s) != strlen(t)` upfront avoids unnecessary array traversal when string lengths differ.