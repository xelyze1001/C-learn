#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
//continue statement


//ex 1:
    int i, j, k, l;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            if(i == j)
                continue;
            for (k = 1; k <= 4; k++)
            {
                if(k == i || k == j)
                    continue;
                for (l = 1; l <= 4; l++)
                {
                    if( l == i || l == k || l == j)
                        continue;

                    printf("%d %d %d %d \n\n", i,j,k,l);
                }
                
            }
            
        }
        
    }

//ex 2:
    char string[] = "Let`s go learn C";
    int len = strlen(string);
    int a;

    printf("Given string: %s\n", string);

    for (a = 0; a < len; a++){
        if (string[a] == ' '){
            printf("\n");
                continue;
        }
        printf("%c", string[a]);
    }
    
    
    return 0;
}