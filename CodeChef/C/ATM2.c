// Problem: ATM2
// Problem Code: ATM2
// Platform: CodeChef
// Language: C​
// Verdict: Accepted
// Problem URL: https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ATM2
// Solved on: 2026-11-20T08:48:19.120Z

#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	while(T--)
	{
	    int N, K;
	    int A[1000001];
	    scanf("%d %d", &N, &K);
	    for (int i=0; i<N; i++)
	    {
	        scanf("%d", &A[i]);
	        if(A[i]>K)
	        {
	            printf("0");
	        }
	        else
	        {
	            K=K-A[i];
	            printf("1");
	        }   
	    }
	    printf("\n");
	}

}

