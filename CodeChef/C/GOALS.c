// Problem: GOALS
// Problem Code: GOALS
// Platform: CodeChef
// Language: C​
// Verdict: Accepted
// Problem URL: https://www.codechef.com/DSAMONDAY026/problems/GOALS
// Solved on: 2026-10-26T15:52:55.554Z

#include <stdio.h>

int main() {
    int test;
	scanf("%d", &test);
    while(test--)
    {
        int a=0, b=0;
        scanf("%d %d", &a, &b);
        if(a==0|| b==0)
        {
            printf("NO\n");
        }
        else if (a==b)
        {
            printf("YES\n");
        }
        else 
        printf("NO\n");
    }
    
    
}

