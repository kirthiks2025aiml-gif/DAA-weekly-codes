#include <stdio.h>
#include <stdlib.h>

int asc(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int desc(const void *a, const void *b) {
    return *(int *)b - *(int *)a;
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n], b[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    qsort(a, n, sizeof(int), asc);
    qsort(b, n, sizeof(int), desc);

    long long sum = 0;
    for (int i = 0; i < n; i++)
        sum += (long long)a[i] * b[i];

    printf("%lld\n", sum);

    return 0;
}
