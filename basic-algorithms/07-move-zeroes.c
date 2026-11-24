#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int insertPos = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[insertPos++] = nums[i];
        }
    }
    while (insertPos < numsSize) {
        nums[insertPos++] = 0;
    }
}

int main() {
    // Test Case 1: Mixed zeroes and non-zeroes
    int nums1[] = {0, 1, 0, 3, 12};
    moveZeroes(nums1, 5);
    printf("Test 1: [%d, %d, %d, %d, %d] (Expected: [1, 3, 12, 0, 0])\n",
           nums1[0], nums1[1], nums1[2], nums1[3], nums1[4]);

    // Test Case 2: Edge case (single zero)
    int nums2[] = {0};
    moveZeroes(nums2, 1);
    printf("Test 2: [%d] (Expected: [0])\n", nums2[0]);

    return 0;
}