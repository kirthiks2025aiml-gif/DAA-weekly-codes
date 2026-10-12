#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    int i = 0, j = 1;
    while (i < n && j < n) {
        if (i == j) {
            j++;
        } else if (a[j] - a[i] == k) {
            printf("1");
            return 0;
        } else if (a[j] - a[i] < k) {
            j++;
        } else {
            i++;
        }
    }

    printf("0");

    return 0;
}
