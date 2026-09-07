#include <stdio.h>

int main(){

char name[30] = "";
int age = 0;
char city[30];

    printf("Enter your name: ");
    fgets(name, 30, stdin);
    
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your city: ");
    scanf("%s", &city);

    printf("Name: ""%s", name);
    printf("Age: ""%d\n", age);
    printf("City: ""%s", city);

return 0;

}
