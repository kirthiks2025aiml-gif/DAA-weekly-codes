#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int count = 1;

    if (n == 1) {
        count++;
    } else {
        count++;
        for (int i = 1; i <= n; i++) {
            count++;
            count++;
            for (int j = 1; j <= n; j++) {
                count++;
                count++;
                count++;
                break;
            }
        }
    }

    printf("%d", count);

    return 0;
}
