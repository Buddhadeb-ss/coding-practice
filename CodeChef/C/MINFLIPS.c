// Problem: MINFLIPS
// Problem Code: MINFLIPS
// Platform: CodeChef
// Language: C​
// Verdict: Accepted
// Problem URL: https://www.codechef.com/DSAMONDAY026/problems/MINFLIPS
// Solved on: 2026-10-26T16:11:56.702Z

#include <stdio.h>

int main() {
int T;
scanf("%d", &T);
while(T--)
{
    int N, A[1001], sum=0;
    scanf("%d", &N);
    for(int i=0; i<N; i++)
    {
        scanf("%d", &A[i]);
    }
    for(int i=0; i<N; i++)
    {
        sum += A[i];
    }
    if(sum%2 != 0)
    printf("-1\n");
    else
    printf("%d\n", abs(sum)/2);
}

}

