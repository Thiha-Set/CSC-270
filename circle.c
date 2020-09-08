#include <stdio.h>
#include <math.h>
//define PI as a preprocessor symbol
#define PI 3.1415926
//implement function for diameter
float diameter(float radius){
    return radius *2;
}

//implement function for area
float area(float radius){
    return PI*pow(radius,2);
}

//implement function for circumference
float circumference(float radius){
    return 2* PI * radius;
}
int main(){
    //declare var to store radius
    float r;

    //ask user input for radius
    printf("Please enter a number of type float for the radius: \n");
    scanf("%f",&r);

    //DEBUG:
    printf("You entered %f\n",r);

    //check if radius <=0
    if(r<=0)
    {
        //if radius <= 0, throw an error message and return 1
        printf("ERROR: You entered a radius less than or equal to 0. Try again.");
        return 1;    
    }

    //set up following pieces of information:
    printf("A circle with a radius of: %f\n",r);
    //DEBUG: print the diameter
    printf("The diameter of the circle is %f\n", diameter(r));

    //DEBUG: print the area
    printf("The area of the circle is %f\n",area(r));

    //DEBUG: print the circumference
    printf("The circumference of the circle is %f\n",circumference(r));

    //return 0 for success
    return 0;
}

