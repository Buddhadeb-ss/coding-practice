// Problem: COIFL
// Problem Code: COIFL
// Platform: CodeChef
// Language: C​
// Verdict: Accepted
// Problem URL: https://www.codechef.com/DSAMONDAY026/problems/COIFL
// Solved on: 2026-10-26T16:48:58.484Z

#include <stdio.h>

int main() {
    int S;
    scanf("%d", &S);
    
    long long f[21];
    f[0] = 1;
    f[1] = 1;
    for(int i = 2; i <= S; i++)
    {
        f[i] = f[i-1] + f[i-2];
    }
    
    printf("%lld\n", f[S]);
    
    return 0;
}