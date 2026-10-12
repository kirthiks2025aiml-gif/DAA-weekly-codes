#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n][n], dp[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    dp[0][0] = a[0][0];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0)
                continue;
            if (i == 0)
                dp[i][j] = dp[i][j - 1] + a[i][j];
            else if (j == 0)
                dp[i][j] = dp[i - 1][j] + a[i][j];
            else
                dp[i][j] = (dp[i - 1][j] > dp[i][j - 1] ? dp[i - 1][j] : dp[i][j - 1]) + a[i][j];
        }
    }

    printf("%d\n", dp[n - 1][n - 1]);

    return 0;
}
