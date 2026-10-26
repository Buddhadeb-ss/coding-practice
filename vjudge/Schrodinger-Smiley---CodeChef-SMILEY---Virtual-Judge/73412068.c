// Problem: problem
// Problem Code: 73412068
// Platform: CodeChef
// Contest: Schrodinger Smiley - CodeChef SMILEY - Virtual Judge
// Language: C (gcc 6.3)
// Verdict: Accepted
// Problem URL: https://vjudge.net/problem/CodeChef-SMILEY
// Solved on: 2026-10-26T10:21:03.627Z

#include <stdio.h>
#include <string.h>

int main() 
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int n;
        char str[500000];
        scanf("%d", &n);
        scanf("%s", str);
        
        int count=0, started=0, answer=0;
        
        for (int i=0; i<n; i++)
        {
            if (str[i]==':')
            {
                if (started && count>0){
                    answer= answer + 1;
                }
            started=1;
            count=0;
                
            }
            
            else if (started && str[i]== ')')
            {
                count++;
            }
            else
            {
                started=0;
                count=0;
            }
        }
        
    printf("%d\n", answer);
        
    }
    
}