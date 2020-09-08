#include <stdio.h>  //use standard streams
int main(void){
    //puts prints a string to standard output
    puts("Hello, World!");

    //this is equivalent to
    printf("%s\n", "Hello, World!");

    //which is equivalent to 
    fprintf(stdout,"%s\n","Hello, World!");
    return 0;

    
}