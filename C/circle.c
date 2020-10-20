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
    printf("Enter radius: ");
    scanf("%f",&r);


    //check if radius <=0
    if(r<=0)
    {
        //if radius <= 0, throw an error message and return 1
        printf("Invalid radius. Must be greater than zero.");
        return 1;    
    }

    //set up following pieces of information:
    printf("A circle with radius %0.3f:\n",r);

    //print the diameter to three decimal places
    printf("\tDiameter: %0.3f\n", diameter(r));

    //print the area to three decimal places
    printf("\tArea: %0.3f\n",area(r));

    //print the circumference to three decimal places
    printf("\tCircumference: %0.3f\n",circumference(r));

    //return 0 for success
    return 0;
}

