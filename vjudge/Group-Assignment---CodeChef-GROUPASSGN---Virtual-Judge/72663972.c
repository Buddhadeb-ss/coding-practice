// Problem: problem
// Problem Code: 72663972
// Platform: CodeChef
// Contest: Group Assignment - CodeChef GROUPASSGN - Virtual Judge
// Language: C (gcc 6.3)
// Verdict: Accepted
// Problem URL: https://vjudge.net/problem/CodeChef-GROUPASSGN
// Solved on: 2026-10-26T10:17:37.297Z

#include <stdio.h>

int main()
{
int T,N,X,hold;

    scanf("%d",&T);
    for(int i=0; i<T; i++)
    {scanf("%d %d",&N, &X);
    hold= 2*N;
    for (int i=1; i < X; i++)
    { 
        hold= hold-1; 
    }
    printf("%d\n", hold);

    
    }

    
}