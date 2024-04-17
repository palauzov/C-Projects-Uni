#include <stdio.h>
 
int main()


{
    int i;
    int space;
    int n = 5;
    int j = 0;
    
    char input;
    scanf("%c", &input);
 
    for (i = 0; i < n - 1; i++) {
 
        
        for (space = 1; space < n - i; space++) {
            printf(" ");
        }
       
        for (j = 0; j <= 2 * i; j++) {
            if (j == 0 || j == 2 * i)
                printf("%c", input);
            else
                printf(" ");
        }
        
        printf("\n");
    }
    
    for (i = 0; i < 2 * n - 1; i++) {
        printf("%c", input);
    }
    return 0;
}

