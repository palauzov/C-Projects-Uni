#include<stdio.h>

int main()
{
    char input;
    scanf("%c", &input);
    for(int x = 1; x <= 5; x++){
        for (size_t i = 1; i <= 10; i++)
        {
            if(x == 1 || x == 5){
                printf("%c", input);
            }else{
                printf("\n%c        %c\n", input, input);
                break;
            }
        }
        
    }
    
    return 0;
}
