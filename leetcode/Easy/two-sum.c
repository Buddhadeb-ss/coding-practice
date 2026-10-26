// Problem: Two Sum
// Problem Code: two-sum
// Platform: CodeChef
// Difficulty / Rating: Easy
// Language: c
// Verdict: Accepted
// Problem URL: https://leetcode.com/problems/two-sum/
// Solved on: 2026-10-26T10:26:21.572Z


#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                int* result = (int*)malloc(2 * sizeof(int));
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}