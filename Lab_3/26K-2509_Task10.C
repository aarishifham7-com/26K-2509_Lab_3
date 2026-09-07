#include<stdio.h>
int main(){
    
    char name[20] = "";
    int age = 0;
    float h = 0.0f;
    float cgpa = 0.0f;

    printf("Enter name: ");
    fgets(name, 20, stdin);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter height: ");
    scanf("%f", &h),

    printf("Enter CGPA: ");
    scanf("%f", &cgpa);

    printf("\n=====Student Report=====\n\n");
    printf("Name: ""%s\n", name);
    printf("Age: ""%d\n", age);
    printf("Height: ""%.2f\n", h);
    printf("CGPA: ""%.2f", cgpa);

    return 0;
    
}
