// Problem: Remove Duplicates from Sorted Array
// Problem Code: remove-duplicates-from-sorted-array
// Platform: CodeChef
// Difficulty / Rating: Easy
// Language: c
// Verdict: Accepted
// Problem URL: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Solved on: 2026-10-26T10:25:01.014Z

int removeDuplicates(int* nums, int numsSize) {
    int k = 1;

    for (int i = 1; i < numsSize; i++) {

        if (nums[i] != nums[i - 1]) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}