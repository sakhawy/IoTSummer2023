#include <stdio.h>
#include <stdbool.h>

int main() {
    bool x = true;
    bool y = false;
    bool r;

    // AND &&
    r = x && y;
    printf("%d && %d = %s\n", x, y, r ? "true" : "false");
    
    // OR ||
    r = x || y;
    printf("%d || %d = %s\n", x, y, r ? "true" : "false");

    // NOT !
    r = !x;
    printf("!%d = %s\n", x, r ? "true" : "false");
    
    // complex expression
    r = (x && y) || (!x && !y);
    printf("(%d && %d) || (!%d && !%d) = %s\n", x, y, x, y, r ? "true" : "false");

    return 0;
}