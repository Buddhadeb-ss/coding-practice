// Problem: CLEARDAY
// Problem Code: CLEARDAY
// Platform: CodeChef
// Language: C​
// Verdict: Accepted
// Problem URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CLEARDAY
// Solved on: 2026-10-26T18:19:35.464Z

#include <stdio.h>

int main() {
    int rainy, cloudy, clear=7;
	scanf("%d %d", &rainy, &cloudy);
	clear= clear-rainy-cloudy;
    printf("%d", clear);

}

