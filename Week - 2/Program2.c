#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a > *(int *)b) - (*(int *)a < *(int *)b);
}

int main() {
    int n, m;

    scanf("%d", &n);
    int g[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &g[i]);
    }

    scanf("%d", &m);
    int s[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &s[i]);
    }

    qsort(g, n, sizeof(int), compare);
    qsort(s, m, sizeof(int), compare);

    int child = 0;
    int cookie = 0;
    int content = 0;

    while (child < n && cookie < m) {
        if (s[cookie] >= g[child]) {
            content++;
            child++;
        }
        cookie++;
    }

    printf("%d\n", content);

    return 0;
}
