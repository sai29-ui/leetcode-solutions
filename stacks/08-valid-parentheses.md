## Problem: Valid Parentheses (Easy)
**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach
Implemented an array-based character stack to push opening brackets onto the stack and pop/verify matching pairs whenever a closing bracket is encountered.

### Complexity
- Time: O(n)
- Space: O(n)

### Notes
Checked `top == -1` before popping to prevent underflow on leading closing brackets, and verified `top == -1` at the end to catch unclosed opening brackets.