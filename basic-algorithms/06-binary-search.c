#include <stdio.h>

int search(int* nums, int numsSize, int target) {
    int left = 0, right = numsSize - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    // Test Case 1: Target exists
    int nums1[] = {-1, 0, 3, 5, 9, 12};
    printf("Test 1: %d (Expected: 4)\n", search(nums1, 6, 9));

    // Test Case 2: Edge case (target missing)
    int nums2[] = {-1, 0, 3, 5, 9, 12};
    printf("Test 2: %d (Expected: -1)\n", search(nums2, 6, 2));

    return 0;
}