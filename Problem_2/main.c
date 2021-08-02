#include <stdio.h>

int fibonacci() {
    int sum = 2;

    int a = 1;
    int b = 2;
    int n = a + b;

    while (n < 4000000) {
       a = b;
       b = n;
       n = a + b;

       if  (n % 2 == 0 && n < 4000000) {
           sum += n;
       }
    }

    return sum;
}

int main() {
    int sum = fibonacci();
    printf("%d\n", sum);
}
