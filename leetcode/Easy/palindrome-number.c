// Problem: Palindrome Number
// Problem Code: palindrome-number
// Platform: CodeChef
// Difficulty / Rating: Easy
// Language: c
// Verdict: Accepted
// Problem URL: https://leetcode.com/problems/palindrome-number/
// Solved on: 2026-10-26T10:12:50.501Z


#include <stdbool.h>


bool isPalindrome(int x) {
if (x < 0)
        return false;

    long long reverse =0;
    int temp = x;
    while (temp != 0) {
       reverse = (reverse * 10) + (temp % 10);
        temp = temp / 10;}

        return(reverse == x);
}