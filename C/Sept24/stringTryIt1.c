#include <stdio.h>
#include <string.h>
int main(void){
    char stringA[] = "Hello World!";
    char stringB[] = "Hello World!";

    printf("String A: %s - %p\n", stringA, stringA);
    printf("String B: %s - %p\n", stringB, stringB);

    printf("%she same.\n",(stringA == stringB)? "T" : "Not t");

    return 0;
}