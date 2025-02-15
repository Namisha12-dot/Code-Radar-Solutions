#include <stdio.h>

int main() {
    int number, n;
    scanf("%d %d", &number, &n);
    int nth_bit = (number >> n) & 1;
    printf("The %d-th bit is: %d\n", n, nth_bit);

    return 0;
}
