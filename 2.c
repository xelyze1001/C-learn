#include <stdio.h>

int main(){
/*Arithmetic operations in C:
+, -, *, /, %, ++, --*/

    int x = 12;
    int y = 6;
    int z = 9;
    printf("x + y = %d\n\n", x + y);
    printf("x - y = %d\n\n", x - y);
    printf("x * y = %d\n\n", x * y);
    printf("x / y = %d\n\n", x / y);
    printf("x Modulus y = %d\n\n", x % y);

    ++z;
    printf("%d\n\n", z);

    --z;
    printf("%d\n\n", z);

//Assignment Operators
    x +=6;
    y -=3;
    printf("%d, %d", x, y);
    // +=, -=, *=, /=, %=, &=, ^=, >>=, <<=


/*Comparison Operators
==, >, <, !=, >=, <= */
    int passwordLength = 5;

    printf("%d\n", passwordLength >= 8); // 0 (false), too short
    printf("%d\n", passwordLength < 8);  // 1 (true), needs more characters


/*Logical Operators
&&   	AND   	x < 5 &&  x < 10     Returns 1 if both statements are true
||  	OR 	    x < 5 || x < 4 	     Returns 1 if one of the statements is true
! 	    NOT     !(x < 5 && x < 10) 	 Reverse the result, returns 0 if the result is 1 	*/
    int isLoggedIn = 1;
    int isAdmin = 0;

    printf("Regular user: %d\n", isLoggedIn && !isAdmin);
    printf("Has access: %d\n", isLoggedIn || isAdmin);
    printf("Not logged in: %d\n", !isLoggedIn);



    return 0;
}