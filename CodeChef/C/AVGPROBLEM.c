// Problem: AVGPROBLEM
// Problem Code: AVGPROBLEM
// Platform: CodeChef
// Language: C​
// Verdict: Accepted
// Problem URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AVGPROBLEM
// Solved on: 2026-10-27T20:37:55.439Z

#include <stdio.h>

int main() {
int T;
scanf("%d", &T);

while(T--)
{
    float A, B, C;
    scanf("%f %f %f", &A, &B, &C);
    if (((A+B)/2)>C)
    printf("YES\n");
    else 
    printf("NO\n");
}
}

