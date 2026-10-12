#include <stdio.h>

int main() {
    int num, i, counter = 0;

    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        counter++;
        if (num % i == 0) {
            counter++;
        }
    }

    counter += num + 1;

    printf("%d", counter);

    return 0;
}
