#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int* arrMemory(int columns){
int* arr = calloc(columns, sizeof(int));
 //int* arr = malloc(columns * sizeof(int)));

 return arr;
}

void arrPrint(int* arr, int columns){
    
    for (size_t i = 0; i < columns; i++)
    {
        printf("%d ", arr[i]);
        if(i % columns == columns - 1){
            printf("\n");
        }
    }
    printf("\n");
}

void arrInit(int* arr, int columns){
 for (size_t i = 0; i < columns; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int main(int argc, char const *argv[])
{
    
    int columns = 5;
    int* arr = arrMemory(columns);
    arrPrint(arr, columns);
     
    arrInit(arr, columns);
    
   
    arrPrint(arr, columns);
    free(arr);



    int studentsNumber;
    scanf("%d", &studentsNumber);
    int* students = arrMemory(studentsNumber);

    arrInit(students, studentsNumber);
    for (size_t i = 0; i < studentsNumber; i++)
    {
        if(students[i] == 6){
            printf("%d ", i + 1);
        }
    }
    int count = 0;
      for (size_t i = 0; i < studentsNumber; i++)
    {
        
        if(students[i] == 2){
            count++;
        }
    }
    printf("Count: %d ", count);

     for (size_t i = 0; i < studentsNumber; i++)
    {
        if(arr[i] != 6){
            arr[i]++;
        }
    }
    arrPrint(students, studentsNumber);

    

    
    return 0;
}