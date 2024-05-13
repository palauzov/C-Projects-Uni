#include<stdio.h>
#include<string.h>

typedef struct Student
{
    char name[50];
    double grade;
} Student;

int main(int argc, char const *argv[])
{
    Student students[5];
    char nameInput[50];
    double gradeInput;
    Student st;
    
    for (size_t i = 0; i < 5; i++)
    {
        
        scanf("%s\n", nameInput);
        scanf("%lf", &gradeInput);
        strcpy(st.name, nameInput);
        st.grade = gradeInput;
        students[i] = st;
    }

    for (size_t i = 0; i < 5; i++)
    {
       printf("%s achieved %.2f\n", students[i].name, students[i].grade);
    }
    printf("Exellents: \n");
    for (size_t i = 0; i < 5; i++)
    {
        if (students[i].grade >= 5.5)
        {
            printf("%s\n", students[i].name);
        }
    }

    for (size_t i = 0; i < 5; i++)
    {
        if (students[i].grade <= 5)
        {
            students[i].grade += 1;
            
        }else{
            students[i].grade == 6;
        }
        printf("%s achieved %.2f\n", students[i].name, students[i].grade);
    }

    

    
    return 0;
}
