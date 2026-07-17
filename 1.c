#include <stdio.h>

int main(){
    /* Variables in C 
    int - intergers numbers, such as 123 or -123
    float - fractions numders, such as 123.123 or -123.123
    char - stores a single character, such as 'a' or 'B'.
    %d or %i: Prints an integer (decimal).
    %f: Prints a floating-point number.
    %.2f: Prints a floating-point number with 2 digits after the decimal point.
    %c: Prints a single character.
    %s: Prints a string.
    %u: Prints an unsigned integer.
    %x: Prints a hexadecimal number (lowercase).
    %X: Prints a hexadecimal number (uppercase).
    %p: Prints a pointer (memory address).
    %%: Prints the % symbol itself. */
    
    int number;
    float fraction;
    char character;

    
    number = 123;
    fraction = 123.123;
    character = 'A';




    printf("fraction number is - %.3f\n", fraction);
    
    printf("single character is - %c\n", character);


    return 0;
}