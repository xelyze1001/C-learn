#include <stdio.h>

int main(){
// Loops in C

//For Loop 

    int a;
    int b;
    for(a = 1; a<=5; a++){
        printf("a = %d\n", a);
    }
    printf("-----------------------------------------------------\n");
    for(a = 1, b = 1; a<=5, b<=5; a++, b++){
        printf("a = %d, b = %d, a*b = %d\n", a, b, a*b);

    }

    printf("-----------------------------------------------------\n");
//Factorial in C:

    int i;
    int x = 5;
    int fact = 1;
    for(i=1; i<=x; i++){
        fact *= i;
    }
    printf("%d ! = %d\n", x, fact);

printf("-----------------------------------------------------\n");

//While Loop

/*
while(expression){
   statement(s);
}
   */  
    int y = 1;
    while (y <= 5)
    {
        printf("Hello, World!\n");
        y++;
    }
printf("-----------------------------------------------------\n");

//Nested Loops

/*Nested for loops are very common. 
If both the outer and inner loops are expected to perform three iterations each, 
the total number of iterations of the innermost statement will be "3 * 3 = 9".*/


    int j;
    for (i = 1; i<= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("i: %d, j: %d\n", i, j);
        }
        printf("End of inner loop \n\n");
    }
    printf("End of outer loop\n");
    



    return 0;
}



