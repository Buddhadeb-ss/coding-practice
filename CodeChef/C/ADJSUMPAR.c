// Problem: ADJSUMPAR
// Problem Code: ADJSUMPAR
// Platform: CodeChef
// Language: C​
// Verdict: Accepted
// Problem URL: https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ADJSUMPAR?tab=statement
// Solved on: 2026-11-22T06:43:15.967Z

#include <stdio.h>

int main() 
{
int t;

scanf("%d", &t);
while(t--)
    {
    int n, A[100000];
     int sum = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
    scanf("%d", &A[i]);
    sum= sum+A[i];
    }

    if (sum%2==0)
    {
    printf("YES\n");
    }
    else
    {
    printf("NO\n");
    }

    }

}
