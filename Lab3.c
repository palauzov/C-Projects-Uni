#include<stdio.h>
void figureSP(int i, float a, float b);
void evenOrOdd(int n);
void swap(float a, float b);
void swap2(float *a, float *b);
int main()
{
     printf("Type i:");
    int i = scanf("%d", &i);
     printf("Type a: ");
    float a = scanf("%f", &a);
     printf("Type b: ");
    float b;
    scanf("%f", &b);
    printf("%f", a);

    figureSP(i, a, b);

    int n = scanf("\n%d", &n);
    evenOrOdd(n);
    float n1;
    float n2;
    scanf("%f", &n1);
    scanf("%f", &n2);
    printf("num1 = %.2f, num2 = %.2f", n1, n2);
    swap(n1, n2);
    printf("num1 = %.2f, num2 = %.2f", n1, n2);
    
    swap2(&n1, &n2);
    printf("num1 = %.2f, num2 = %.2f", n1, n2);
     

    return 0;
}


void figureSP(int i, float a, float b){
    float P;
    float S;
    if(i == 1){
        P = 4 * a;
        S = a * a;
        
    }else if (i == 2){
        P = 2*a + 2*b;
        S = a * b;
    }else if (i == 3)
    {
    float c;
     scanf("%f", &c);
     P = a + b + c;
     S = a * b / 2;
    }
  
    printf("P = %.2f, S = %.2f", P, S); 
}


void evenOrOdd(int n){
 if (n % 2 == 0)
    {
        printf("Even\n");
    }else
    {
       printf("Odd\n");
    }
}
void swap(float n1, float n2){
    
    float n3 = n2;
    n2 = n1;
    n1 = n3;
    printf("num1 = %.2f, num2 = %.2f", n1, n2);
}
void swap2(float *n1, float *n2){
    
    float n3 = *n2;
    *n2 = *n1;
    *n1 = n3;
   
}