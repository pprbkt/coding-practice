#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 0;
    int x = 4, y = 3;

    /* 1. Increment & Decrement Operators */
    printf("Increment / Decrement Operators:\n");
    printf("Pre-increment ++a = %d\n", ++a);   // a becomes 11
    printf("Post-increment a++ = %d\n", a++); // uses 11, then a becomes 12
    printf("Current value of a = %d\n\n", a);

    /* 2. Arithmetic Operators */
    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n\n", a % b);

    /* 3. Relational Operators */
    printf("Relational Operators:\n");
    printf("a > b  = %d\n", a > b);
    printf("a < b  = %d\n", a < b);
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n\n", a != b);

    /* 4. Logical Operators */
    printf("Logical Operators:\n");
    printf("(a > b) && (b > 0) = %d\n", (a > b) && (b > 0));
    printf("(a < b) || (b > 0) = %d\n", (a < b) || (b > 0));
    printf("!(a == b) = %d\n\n", !(a == b));

    /* 5. Assignment Operators */
    printf("Assignment Operators:\n");
    c = a;
    printf("c = a -> %d\n", c);
    c += b;
    printf("c += b -> %d\n", c);
    c *= 2;
    printf("c *= 2 -> %d\n\n", c);

    /* 6. Conditional (Ternary) Operator */
    printf("Conditional Operator:\n");
    int max = (x > y) ? x : y;
    printf("Max of %d and %d is %d\n\n", x, y, max);

    /* 7. Bitwise Operators */
    printf("Bitwise Operators:\n");
    printf("x & y  = %d\n", x & y);
    printf("x | y  = %d\n", x | y);
    printf("x ^ y  = %d\n", x ^ y);
    printf("~x     = %d\n", ~x);
    printf("x << 1 = %d\n", x << 1);
    printf("x >> 1 = %d\n\n", x >> 1);

    /* 8. Special Operators */
    printf("Special Operators:\n");
    printf("Size of int = %lu bytes\n", sizeof(int));

    int *ptr = &a;
    printf("Address of a = %p\n", (void*)&a);
    printf("Value using pointer = %d\n", *ptr);

    return 0;
}
