// Problem: Scored
// Problem Code: EXACTKMOVES
// Platform: CodeChef
// Contest: START266D
// Difficulty / Rating: START266D
// Language: C
// Verdict: Accepted
// Problem URL: https://www.codechef.com/START266D/problems/EXACTKMOVES
// Solved on: 2026-11-25T20:50:03.887Z

#include <stdio.h>

int main() 
{
int t;
int N,K;
scanf("%d", &t);

while(t--)
{
    scanf("%d %d", &N, &K);
        if(N >= K && N <= 2*K) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }

}
}   
