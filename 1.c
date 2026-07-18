#include <stdio.h>
#include <stdint.h>
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


    printf("number is - %d\n\n", number );

    printf("fraction number is - %.3f\n\n", fraction);
    
    printf("single character is - %c\n\n", character);



    /*Fixed width integers
    int8_t 	8 bits (1 byte) 	-128 to 127 	                                                %d
    uint8_t 	8 bits (1 byte) 	0 to 255 	                                                %u
    int16_t 	16 bits (2 bytes) 	-32,768 to 32,767               	                        %d
    uint16_t 	16 bits (2 bytes) 	0 to 65,535 	                                            %u
    int32_t 	32 bits (4 bytes) 	-2,147,483,648 to 2,147,483,647 	                        %d
    uint32_t 	32 bits (4 bytes) 	0 to 4,294,967,295 	                                        %u
    int64_t 	64 bits (8 bytes) 	-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 	%lld
    uint64_t 	64 bits (8 bytes) 	0 to 18,446,744,073,709,551,615 	                        %llu*/

    int8_t a = 100;        // 8-bit integer
    int16_t b = 30000;     // 16-bit integer
    int32_t c = 2000000;   // 32-bit integer
    int64_t d = 9000000000; // 64-bit integer

    printf("%d\n\n", a);
    printf("%d\n\n", b);
    printf("%d\n\n", c);
    printf("%lld\n\n", d); // use %lld for 64-bit
    return 0;
}