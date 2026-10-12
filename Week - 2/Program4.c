#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    qsort(arr, n, sizeof(int), compare);

    long long sum = 0;
    for (int i = 0; i < n; i++)
        sum += (long long)arr[i] * i;

    printf("%lld\n", sum);

    return 0;
}
