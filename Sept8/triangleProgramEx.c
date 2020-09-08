#include <stdio.h>
int main(void){
    //ask user for base
    float base;
    printf("Enter a float for the base: \n");
    scanf("%f",&base);

    //ask user for height
    float height;
    printf("Enter the height: \n");
    scanf("%f",&height);

    //calculate the area
    float area=base * height /2;
    printf("The area is %f\n",area);
}