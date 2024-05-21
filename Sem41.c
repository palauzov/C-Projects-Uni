#include <stdio.h>
#include <string.h>



typedef struct CoFounder{
   int id;
   int payPerHour;
   int workingHours;
   int weekEarnings;
}CoFounder;

int writeBinary(char fileName[50]){
    int id;
    int payPerHour;
    int workingHours;
    int weekEarnings;
    
    FILE* file = fopen(fileName, "wb");
    int count;
    CoFounder coFounder;
    printf("Count of co-founder: ");
    scanf("%d", &count);
    if (count > 0 && count <= 30)
    {
        for (size_t i = 0; i < count; i++){
             printf("Id: ");
             scanf("%d", &id);
             printf("Paying per hour: ");
             scanf("%d", &payPerHour);
             printf("Working hours: ");
             scanf("%d", &workingHours);
             weekEarnings = payPerHour * workingHours;
            coFounder.id = id;
            coFounder.payPerHour = payPerHour;
            coFounder.workingHours = workingHours;
            coFounder.weekEarnings = weekEarnings;

             fwrite(&coFounder, sizeof(coFounder), 1, file);
            
        }
    }

    fclose(file);
    return 0;

}
int appendBinary(char fileName[50]){
    int id;
    int payPerHour;
    int workingHours;
    int weekEarnings;
    
    FILE* file = fopen(fileName, "ab");
    int count;
    CoFounder coFounder;
    printf("Count of co-founder: ");
    scanf("%d", &count);
    if (count > 0 && count <= 30)
    {
        for (size_t i = 0; i < count; i++){
             printf("Id: ");
             scanf("%d", &id);
             printf("Paying per hour: ");
             scanf("%d", &payPerHour);
             printf("Working hours: ");
             scanf("%d", &workingHours);
             weekEarnings = payPerHour * workingHours;
            coFounder.id = id;
            coFounder.payPerHour = payPerHour;
            coFounder.workingHours = workingHours;
            coFounder.weekEarnings = weekEarnings;

             fwrite(&coFounder, sizeof(coFounder), 1, file);
            
        }
    }

    fclose(file);
    return 0;

}



int main(int argc, char const *argv[])
{
    char fileName[50];
    printf("Type file name: ");
    scanf("%s", fileName);
    writeBinary(fileName);

    return 0;
}
