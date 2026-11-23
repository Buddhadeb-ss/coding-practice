// Problem: ARFTWO
// Problem Code: ARFTWO
// Platform: CodeChef
// Language: C​
// Verdict: Accepted
// Problem URL: https://www.codechef.com/DSAMONDAY030/problems/ARFTWO
// Solved on: 2026-11-23T15:59:19.246Z

#include <stdio.h>

int main() {
int t;
int A,B,C,X;
scanf("%d", &t);
while(t--)
{
    scanf("%d %d %d %d", &A, &B, &C, &X);
    
    if((A+B)>=X)
    {
        printf("YES\n");
    }
    else if ((A+C)>=X)
    {
        printf("YES\n");
    }
    else if ((B+C)>=X)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}

}

