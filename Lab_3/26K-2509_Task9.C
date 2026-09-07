#include<stdio.h>
int main(){

    char Prname[10] = "";
    int Quantity;
    float price;

    printf("name of the product? : ");
    scanf("%s", &Prname);

    printf("How many do you want to buy? : ");
    scanf("%d", &Quantity);

    printf("What is the price? : ");
    scanf("%f", &price);

    printf("Product Name: ""%s\n", Prname);
    printf("Product Quantity: ""%d\n", Quantity);
    printf("Price: ""%.2f", price);

    return 0;

}
