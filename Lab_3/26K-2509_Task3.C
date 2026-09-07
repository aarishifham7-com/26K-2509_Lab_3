#include <stdio.h>

int main(){

int age = 0;
float height = 0.0f;
char grade = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Enter your grade: ");
    scanf("       %c", &grade);

    printf("Age: ""%d\n", age);
    printf("Height: ""%.2f\n", height);
    printf("Grade: ""%c", grade);

return 0;

}