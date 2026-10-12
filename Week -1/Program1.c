#include <stdio.h>

int main() {
    int n;
    int i = 1;
    int s = 1;
    int c = 3;

    scanf("%d", &n);

    while (s <= n) {
        c++;
        i++;
        c++;
        s += i;
        c++;
    }

    printf("%d", c);

    return 0;
}
