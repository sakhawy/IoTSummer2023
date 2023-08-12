## Arithmetic
![[/Attachments/arithmetic_operators.png]]

```c
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
```

## Relational
![[/Attachments/relational_operators.png]]

```c
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
```

## Logical
![[/Attachments/logical_operators.png]]

```c
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
```

## Bit-wise
![[/Attachments/bitwise_operators_truth_table.png]]

![[/Attachments/bitwise_operators.png]]

```c
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
```

lshift and rshift are equivalent to multiplication and floor division:
- `N >> x == N // 2^x`
- `N << x == N * 2^x`

## Assignment
![[/Attachments/assignment_operators.png]]

```c
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
```
