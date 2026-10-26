// Problem: problem
// Problem Code: 72531381
// Platform: CodeChef
// Contest: Ratio By 2 - CodeChef RATIO2 - Virtual Judge
// Language: C (gcc 6.3)
// Verdict: Accepted
// Problem URL: https://vjudge.net/problem/CodeChef-RATIO2
// Solved on: 2026-10-26T10:16:19.785Z

#include <stdio.h>
int main()
{
int T,x,y;
scanf("%d",&T);

while(T--)
{
scanf("%d %d",&x,&y);

  if(x > y){
 int temp=x;
 x=y;
 y=temp;}

 if(y >= 2*x){

    printf("0\n");
 }
 else {
 int a= 2*x- y;
 int b= x-y/2;

 if(a<b){printf("%d\n",a );}
 else{printf("%d\n",b);}
  }
 }
}