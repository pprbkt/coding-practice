#include <stdio.h>

/* 1. Constants using #define preprocessor directive */
#define PI 3.14
#define CLASS_SIZE 62
#define CHAR_VAL 'G'

int main() {

    /* 2. Constants using const keyword */
    const int intVal = 10;
    const float floatVal = 4.14;

    printf("Constants using #define:\n");
    printf("PI = %.2f\n", PI);
    printf("CLASS_SIZE = %d\n", CLASS_SIZE);
    printf("CHAR_VAL = %c\n\n", CHAR_VAL);

    printf("Constants using const keyword:\n");
    printf("intVal = %d\n", intVal);
    printf("floatVal = %.2f\n", floatVal);

    return 0;
}
