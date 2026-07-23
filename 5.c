#include <stdio.h>
#include <string.h>

int main(){
    //Break Statements

    int i = 2;
    int x = 121;
    int j;
    while (i < x/2)
    {
        j = x % i;
        printf("%d mod %d == %d\n\n", x, i, j);
        if (x % i == 0)
        {
            break;
        }
        i++;    
    
    }
    if (i >= x/2)
    {
        printf("x is prime\n");
    }else
    {
        printf("x is not prime\n\n");
    }
    

    char string[] = "assembly";
    int k;
    int len = strlen(string);
    
    for (k = 0; k < len; k++)
    {
        if (string[k] == 'f' || string[k] == 'e' || string[k] == 'k' || string[k] == 'u')
            break;
        printf("%c", string[k]);
    }
    
    return 0;
}