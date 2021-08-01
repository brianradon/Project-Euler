#include <stdio.h>

int returnMultiples() {
    int sum = 0;

    for (int i = 0; i < 1000; i++) {
        if (i % 5 == 0 || i % 3 == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {

    int sum = returnMultiples();

    printf("%d\n", sum);

    return 0;
}
