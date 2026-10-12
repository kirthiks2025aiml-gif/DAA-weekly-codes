#include <stdio.h>

int firstZero(int a[], int low, int high) {
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (a[mid] == 0 && (mid == 0 || a[mid - 1] == 1))
        return mid;

    if (a[mid] == 1)
        return firstZero(a, mid + 1, high);

    return firstZero(a, low, mid - 1);
}

int main() {
    int m;
    scanf("%d", &m);

    int a[m];
    for (int i = 0; i < m; i++)
        scanf("%d", &a[i]);

    int index = firstZero(a, 0, m - 1);

    if (index == -1)
        printf("0\n");
    else
        printf("%d\n", m - index);

    return 0;
}
