// Problem: Scored
// Problem Code: DBLDROP
// Platform: CodeChef
// Contest: START266D
// Language: C
// Verdict: Accepted
// Problem URL: https://www.codechef.com/START266D/problems/DBLDROP
// Solved on: 2026-11-25T21:00:11.977Z


#include <stdio.h>

int main() {
    int t;
    int n;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        long long a[n], s = 0, m = 0, ans;

        for(int i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
            s = s + a[i];

            if(a[i] > m)
            {
                m = a[i];
            }
        }

        ans = s - m;

        for(int i = 0; i < n; i++)
        {
            long long x = m;

            if(2 * a[i] > x)
            {
                x = 2 * a[i];
            }

            if(s + a[i] - x > ans)
            {
                ans = s + a[i] - x;
            }
        }

        printf("%lld\n", ans);
    }

}
