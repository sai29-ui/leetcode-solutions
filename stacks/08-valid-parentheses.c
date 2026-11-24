#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char* s) {
    int len = strlen(s);
    char stack[len + 1];
    int top = -1;

    for (int i = 0; i < len; i++) {
        char c = s[i];
        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;
        } else {
            if (top == -1) return false;
            char open = stack[top--];
            if ((c == ')' && open != '(') ||
                (c == '}' && open != '{') ||
                (c == ']' && open != '[')) {
                return false;
            }
        }
    }
    return top == -1;
}

int main() {
    // Test Case 1: Valid nested/sequential brackets
    printf("Test 1: %d (Expected: 1)\n", isValid("()[]{}"));

    // Test Case 2: Edge case (mismatched brackets)
    printf("Test 2: %d (Expected: 0)\n", isValid("(]"));

    return 0;
}