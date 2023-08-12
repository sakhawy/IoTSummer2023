#include <stdio.h>
#include <stdbool.h>

int main() {
    int x = 1;
    int y = 0;
    int r;

    // normal assignment
    r = x;
    printf("%d = %d\n", x, r);

    // add and assign
    r += x;
    printf("%d += %d = %d\n", r - x, x, r);

    // subtract and assign
    r -= x;
    printf("%d -= %d = %d\n", r + x, x, r);

    // multiply and assign
    r *= x;
    printf("%d *= %d = %d\n", r / x, x, r);

    // modulus and assign
    r %= x;
    printf("%d %%= %d = %d\n", r * x, x, r);

    // bitwise and and assign
    r &= x;
    printf("%d &= %d = %d\n", r | x, x, r);

    // bitwise rshift and assign
    r >>= x;
    printf("%d >>= %d = %d\n", r << x, x, r);

    return 0;
}