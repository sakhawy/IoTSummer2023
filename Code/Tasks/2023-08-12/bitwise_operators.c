#include <stdio.h>
#include <stdbool.h>

int main() {
    int x = 1;
    int y = 0;
    int r;

    // bitwise and 
    r = x & y;
    printf("%d & %d = %d\n", x, y, r);
    
    // bitwise or
    r = x | y;
    printf("%d | %d = %d\n", x, y, r);

    // bitwise xor
    r = x ^ y;
    printf("%d ^ %d = %d\n", x, y, r);

    // one's complement
    r = ~x;
    printf("~%d = %d\n", x, r);

    // rshift
    r = x >> 1;
    printf("%d >> 1 = %d\n", x, r);

    // lshift
    r = x << 1;
    printf("%d << 1 = %d\n", x, r);

    return 0;
}