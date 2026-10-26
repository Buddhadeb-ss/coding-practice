// Problem: BACVA
// Problem Code: BACVA
// Platform: CodeChef
// Language: C​
// Verdict: Accepted
// Problem URL: https://www.codechef.com/DSAMONDAY026/problems/BACVA
// Solved on: 2026-10-26T16:26:22.445Z

#include <stdio.h>
#include <string.h>

int main() {
	int T;
	char A[25];
	scanf("%d", &T);
	while(T--)
	{
	    scanf("%s", A);
        
        int sum = 0;
        int len = strlen(A);
        for(int i = 0; i < len; i++)
        {
            sum += A[i] - '0';
        }
        
        if(sum % 10 == 0)
            printf("Valid\n");
        else
            printf("Invalid\n");
	    
	}

}

