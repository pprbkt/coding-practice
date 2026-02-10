#include <stdio.h>

/* User-defined data type using typedef */
typedef int rollno;

/* User-defined data type using enum */
enum days { sun, mon, tue, wed, thu, fri, sat };

int main() {

    /* 1. Primitive / Fundamental Data Types */
    int i = 10;
    float f = 3.14f;
    char c = 'A';
    double d = 12.345;

    printf("Primitive Data Types:\n");
    printf("int i = %d\n", i);
    printf("float f = %.2f\n", f);
    printf("char c = %c\n", c);
    printf("double d = %.3lf\n\n", d);

    /* 2. User-Defined Data Types */

    // Using typedef
    rollno r1 = 101, r2 = 102;

    // Using enum
    enum days today = wed;

    printf("User-Defined Data Types:\n");
    printf("Roll numbers: %d, %d\n", r1, r2);
    printf("Today (enum value) = %d\n\n", today);

    /* 3. Derived Data Types */

    // Array
    int arr[3] = {1, 2, 3};

    // Pointer
    int *ptr = &i;

    printf("Derived Data Types:\n");
    printf("Array elements: %d %d %d\n", arr[0], arr[1], arr[2]);
    printf("Pointer value (address of i) = %p\n", (void*)ptr);
    printf("Value pointed by ptr = %d\n", *ptr);

    return 0;
}
