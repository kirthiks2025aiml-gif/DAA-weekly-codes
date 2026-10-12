#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int c = 0;
    int count = 0;

    count++; // i = n/2
    for (int i = n / 2; i < n; i++) {
        count++; // outer loop condition
        for (int j = 1; j < n; j = 2 * j) {
            count++; // middle loop condition
            for (int k = 1; k < n; k = k * 2) {
                count++;
                c++;
                count++;
            }
            count++;
        }
        count++;
    }
    count++;

    printf("%d", count);

    return 0;
}
