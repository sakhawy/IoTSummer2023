#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;
    int r;

    // addition
    r = x + y;
    printf("%d + %d = %d\n", x, y, r);

    // subtraction
    r = x - y;
    printf("%d - %d = %d\n", x, y, r);
    
    // increment
    r++;
    printf("r++ = %d\n", r);

    // multipication
    r = x * y;
    printf("%d * %d = %d\n", x, y, r);

    // modulus
    r = x % y;
    printf("%d %% %d = %d\n", x, y, r);

    return 0;
}