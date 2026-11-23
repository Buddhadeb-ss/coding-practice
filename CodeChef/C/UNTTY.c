// Problem: UNTTY
// Problem Code: UNTTY
// Platform: CodeChef
// Language: C​
// Verdict: Accepted
// Problem URL: https://www.codechef.com/DSAMONDAY030/problems/UNTTY?tab=statement
// Solved on: 2026-11-23T16:24:27.223Z

#include <stdio.h>
#include <string.h>

int main() {
char string[1000001];
char output[1000001];


scanf("%s", string);
int top=0;

for(int i=0; string[i]>'\0'; i++)
{
    if(string[i] == '#')
    {
        if(top>0){
            top--;
        }
    }
    else
    {
        output[top++]= string [i];
    }
    output[top]= '\0';
 
}
   printf("%s\n", output);
}