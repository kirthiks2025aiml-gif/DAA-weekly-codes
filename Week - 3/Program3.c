#include <stdio.h>

int findFloor(int a[], int low, int high, int x) {
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;

    if (a[mid] == x)
        return a[mid];

    if (a[mid] > x)
        return findFloor(a, low, mid - 1, x);

    int result = findFloor(a, mid + 1, high, x);
    if (result == -1)
        return a[mid];

    return result;
}

int main() {
    int n, x;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    printf("%d\n", findFloor(a, 0, n - 1, x));

    return 0;
}
