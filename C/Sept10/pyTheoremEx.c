#include <stdio.h>
int main(){
    //ask for user input regarding the base (b) and perpendicular (p), as well as the hypotenuse (h)
    float b, p, h;
    printf("Enter base, perpendicular, and hypotenuse in that specific order, each separated by commas:\n");
    scanf("%f, %f, %f",&b,&p,&h);

    //square
    float bSquare= b*b;
    float pSquare= p*p;
    float hSquare= h*h;

    //check if right triangle
    if(bSquare+pSquare==hSquare)
    {
        printf("It's a right triangle.");
        return 0;
    }
    else
    {
        //check if any of the values are 0
        if(hSquare==0||bSquare==0||pSquare==0)
        {
            printf("Invalid input.");
            return 1;
        }
        //check if obtuse hSquare > bSquare + pSquare
        else if(hSquare > bSquare + pSquare)
        {
            printf("It is an obtuse triangle.");
        }
        //check if acute hSquare < bSquare + pSquare
        else if(hSquare < bSquare + pSquare)
        {
            printf("It is an acute triangle.");
        }
        return 0;
    }
    
}