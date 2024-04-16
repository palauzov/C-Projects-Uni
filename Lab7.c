#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int rows = 3;
    int columns = 5;
    //int* arr = malloc(columns * rows * sizeof(int)));
    int* arr = calloc(columns * rows, sizeof(int));
    for (size_t i = 0; i < rows * columns; i++)
    {
        printf("%d ", arr[i]);
        if(i % columns == columns - 1){
            printf("\n");
        }
    }
    printf("\n");
    for (size_t i = 0; i < columns * rows; i++)
    {
        scanf("%d", &arr[i]);
    }
     for (size_t i = 0; i < rows * columns; i++)
    {
       printf("%d ", arr[i]);
        if(i % columns == columns - 1){
            printf("\n");
        }
    }
    free(arr);
       
    return 0;
}
