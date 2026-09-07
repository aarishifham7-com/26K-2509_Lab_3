#include<stdio.h>

int main(){

    float temperature = 0.0f;

    printf("Enter Temperature: ");
    scanf("%f", &temperature);
    printf("Temperature: ""%.2f"" C", temperature);

    return 0;
}