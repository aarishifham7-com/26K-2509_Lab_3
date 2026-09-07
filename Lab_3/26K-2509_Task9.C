#include<stdio.h>
int main(){

    char pn[10] ="";
    int qu = 0;
    float p = 0.0f;

    printf("What is the name of the product? : ");
    scanf("%s", &pn);

    printf("How many do you want to buy? : ");
    scanf("%d", &qu);

    printf("What is the price of each? : ");
    scanf("%f", &p);

    printf("Product Name: ""%s\n", pn);
    printf("Product Quantity: ""%d\n", qu);
    printf("Price: ""%.2f", p);

    return 0;

}