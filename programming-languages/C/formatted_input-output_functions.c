// Program to demonstrate formatted input and output functions in C.

/* formatted input-output functions in C 
    - printf: Used to print formatted output to the console.
    - scanf: Used to read formatted input from the console.
*/

#include <stdio.h>

int main() {
    char name[50];
    int age;
    float height;

    // Using printf to display a message
    printf("Enter your name: ");
    // Using scanf to read a string input
    scanf("%s", name);

    printf("Enter your age: ");
    // Using scanf to read an integer input
    scanf("%d", &age);

    printf("Enter your height in meters: ");
    // Using scanf to read a float input
    scanf("%f", &height);

    // Using printf to display the formatted output
    printf("Hello, %s! You are %d years old and %.2f meters tall.\n", name, age, height);

    return 0;
}