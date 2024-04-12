#include<stdio.h>
#include<string.h>

void len(char text[]){
    int count = 0;
    while(text[count] != '\0'){
        count++;
    }
    printf("%d\n", count);
}

void wordsNumber(char text[]){
    int i = 0;
    int countWords = 0;
    while(text[i] != '\0'){
        if (text[i] == ' ')
        {
            countWords++;
        }
        i++;
    }
    printf("%d\n", countWords + 1);
}

void compare(char text1[], char text2[]){
    int isTrue = 0;
    for (size_t i = 0; i < strlen(text1); i++)
    {
       
        if (text1[i] != text2[i])
        {
            isTrue = 1;
            break;
        }
        
    }
    if (isTrue == 0)
    {
        printf("They are equal.\n");
    }else{
        printf("They are not equal.\n");
    }
    
    
}

void symbolCount(char text[]){
    for (size_t i = 0; i < strlen(text); i++)
    {
        
    }
}

int search(char symbol, char text[]){
    for (size_t i = 0; i < strlen(text); i++)
    {
        if (symbol == text[i])
        {
          return i;
        }
        
    }
    return -1;
}

int main()
{
    char txt[] = "Hallo world!";
    char *txtPntr = txt;
    printf("%c\n", *(txtPntr+6));
    printf("%d\n", strlen(txt));
    strcpy(txtPntr, txt);
    printf("%s\n", txtPntr);
    printf("%d\n", strcmp(txtPntr, txt));
    printf("%s\n", txtPntr);
    printf("%d\n", strlen(txtPntr));


    char txt1[30];
    gets(txt1);
    len(txt1);
    wordsNumber(txt1);
    char txt2[30];
    gets(txt2);
    compare(txt1, txt2);
    printf("%d", search('k', txt2));



    return 0;
}
