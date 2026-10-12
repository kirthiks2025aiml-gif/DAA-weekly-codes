#include <stdio.h>

int findPair(int arr[], int left, int right, int x) {
    if (left >= right)
        return 0;

    int sum = arr[left] + arr[right];

    if (sum == x) {
        printf("%d\n", arr[left]);
        printf("%d\n", arr[right]);
        return 1;
    }

    if (sum < x)
        return findPair(arr, left + 1, right, x);
    else
        return findPair(arr, left, right - 1, x);
}

int main() {
    int n, x;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &x);

    if (!findPair(arr, 0, n - 1, x))
        printf("No\n");

    return 0;
}
