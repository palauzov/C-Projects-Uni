#include<stdio.h>
#include<string.h>

typedef struct Student
{
    char name[50];
    double grade;
} Student;


int main(int argc, char const *argv[])
{
    char name1[50];
    double grade1;
    scanf("%s", name1);
    scanf("%lf", &grade1);
    Student s1, s2;
    strcpy(s1.name, "Ivan");
    s1.grade = 3.20;

    strcpy(s2.name, "Maria");
    s2.grade = 5.50;

    printf("%s achieved %.2f\n", s1.name, s1.grade);
    strcpy(s1.name, "Ilqn");
    printf("%s achieved %.2f\n", s1.name, s1.grade);
    printf("%s achieved %.2f\n", s2.name, s2.grade);
    Student s3;
    strcpy(s3.name, name1);
    s3.grade = grade1;
    printf("%s achieved %.2f\n", s3.name, s3.grade);
    return 0;
}


