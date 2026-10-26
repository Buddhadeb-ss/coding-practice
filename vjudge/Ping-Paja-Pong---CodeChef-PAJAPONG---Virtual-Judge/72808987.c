// Problem: problem
// Problem Code: 72808987
// Platform: CodeChef
// Contest: Ping Paja Pong - CodeChef PAJAPONG - Virtual Judge
// Language: C (gcc 6.3)
// Verdict: Accepted
// Problem URL: https://vjudge.net/problem/CodeChef-PAJAPONG
// Solved on: 2026-10-26T10:18:50.268Z

#include <stdio.h>

int main() {
    int T, X, Y, K;
	scanf("%d", &T);
	
	while(T--){
	    
	    scanf("%d %d %d",&X, &Y, &K);
	    int temp= (X+Y)/K;
	    int temp2 = temp % 2;
	    if (temp2==1){
	    printf("Paja\n");}
	    else
	    {printf("Chef\n");
	        
	    }
	    
	}
}

