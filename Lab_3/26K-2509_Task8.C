#include <stdio.h>

int main(){

    char name[30] = "";

    printf ("Enter your full name: ");
    fgets(name, 30, stdin);
    printf("Hello and Welcome,\n\n ""%s", name );

    return 0;
}