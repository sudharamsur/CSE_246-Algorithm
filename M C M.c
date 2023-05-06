#include <stdio.h>
#include <limits.h>

#define MAX 1000

int n;
int p[MAX+1];
int dp[MAX+1][MAX+1];
int s[MAX+1][MAX+1];
int ans;

void mcm()
{
    for (int i = 1; i <= n; i++)
    {
        dp[i][i] = 0;
    }

    for (int l = 2; l <= n; l++)
    {
        for (int i = 1; i <= n-l+1; i++)
        {
            int j = i+l-1;
            dp[i][j] =INT_MAX;
            for (int k = i; k <= j-1; k++)
            {
                ans = dp[i][k] + dp[k+1][j] + p[i-1]*p[k]*p[j];
                if (ans < dp[i][j])
                {
                    dp[i][j] = ans;
                    s[i][j] = k;
                }
            }
        }
    }
}
int main()
{

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int r, c;
        scanf("%d %d", &r, &c);
        p[i] = r;
        if (i+1 == n)
        {
            p[i+1] = c;
        }
    }
    mcm();
    printf("%d ", dp[1][n]);

    return 0;
}
