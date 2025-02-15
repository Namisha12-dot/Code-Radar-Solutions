#include <stdio.h>

int main() {
    int number, n;
    scanf("%d %d", &number, &n);
    int nth_bit = (number >> n) & 1;
    printf("%d", nth_bit);

    return 0;
}
