#include <stdio.h>

int main() {
    int n, rev = 0, remainder, counter = 3;

    scanf("%d", &n);

    while (n != 0) {
        counter += 4;
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n = n / 10;
    }

    printf("%d", counter);

    return 0;
}
