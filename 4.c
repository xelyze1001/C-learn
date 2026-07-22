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




    return 0;
}



