// Problem: EQICHOC
// Problem Code: EQICHOC
// Platform: CodeChef
// Language: C​
// Verdict: Accepted
// Problem URL: https://www.codechef.com/DSAMONDAY030/problems/EQICHOC
// Solved on: 2026-11-23T15:59:59.494Z

#include <stdio.h>

int main() {
int R, L;
scanf("%d %d", &R, &L);
if (R>L){
    printf("%d", R-L);
}
else{
    printf("%d", L-R);
}

}

