#include <stdio.h>
#include <stdbool.h>

int main() {
    int x = 10;
    int y = 20;
    bool r;

    // equality
    r = x == y;
    printf("%d == %d = %s\n", x, y, r ? "true" : "false");
    
    // inequality
    r = x != y;
    printf("%d != %d = %s\n", x, y, r ? "true" : "false");

    // inequality >
    r = x > y;
    printf("%d > %d = %s\n", x, y, r ? "true" : "false");
    
    // inequality >=
    r = x >= y;
    printf("%d >= %d = %s\n", x, y, r ? "true" : "false");
    
    return 0;
}