#include<stdio.h>
#include<string.h>


struct Product
{
    char type[30];
    double price;
    int amount;
};

struct Shop{
char name[30];
char adress[30];
struct Product products[5];
};

void searchPtoduct(char userInput[], int amount, struct Shop shop){
    for(int i = 0; i < 2; i++){
         if(strncmp(userInput, shop.products[i].type, 1)){
            if (shop.products[i].amount >= amount)
            {
                char input[30];
            }else{
                printf("Out of amount.");
            }
         }else{
            printf("%s does not exist.", userInput);
         }
    }
}

int main()
{
    struct Shop shop1;
    strcpy(shop1.name, "Kaufland");
    strcpy(shop1.adress, "ul. Petar Beron 6");
    struct Product product1;
    strcpy(product1.type, "Milk");
    product1.price = 2.49;
    product1.amount = 200;
    shop1.products[0] = product1;

    char input[30];
    scanf("%s", &input);
    

    printf("%s %d %f\n", shop1.products[0].type, shop1.products[0].amount, shop1.products[0].price);
    searchPtoduct(input, 20, shop1);
    
    return 0;
}
