#include<stdio.h>
int main(){
    
    char name[40];
    int age;
    float height;
    float cgpa;

    printf("Enter name: ");
    fgets(name, 40, stdin);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter height: ");
    scanf("%f", &height),

    printf("Enter CGPA: ");
    scanf("%f", &cgpa);

    printf("\n=====Student Report=====\n\n");
    printf("Name: ""%s\n", name);
    printf("Age: ""%d\n", age);
    printf("Height: ""%.2f\n", height);
    printf("CGPA: ""%.2f", cgpa);

    return 0;
    
}
