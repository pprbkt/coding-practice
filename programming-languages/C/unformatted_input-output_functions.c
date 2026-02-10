// Program to demonstrate unformatted input and output functions in C.

/* unformatted input-output functions in C 
    - getchar: Used to read a single character from the console.
    - putchar: Used to write a single character to the console.
    - gets: Used to read a string from the console (not recommended due to security issues).
    - puts: Used to write a string to the console.
*/

#include <stdio.h>

int main() {
    char name[50];
    char character;

    // Using puts to display a message
    puts("Enter your name: ");

    /* gets() was removed from the C standard (C11 and later) because it is dangerous: it can overflow buffers and cause security vulnerabilities. 
    Instead, we can use fgets() to safely read a string input.
    */
    fgets(name, sizeof(name), stdin);

    // Using puts to display another message
    puts("Enter a character: ");
    // Using getchar to read a single character input
    character = getchar();

    // Using puts to display the formatted output
    printf("Hello, %s! You entered the character '%c'.\n", name, character);

    return 0;
}