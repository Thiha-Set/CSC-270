#include <stdio.h>
int main(){
    //ask user input
    float deg;
    char id;
    printf("Enter input temperature: ");
    scanf("%f%c",&deg,&id);

    //check what the user-inputted temperature unit is (whether it was fahrenheit, celsius, or kelvin, and proceed accordingly)
    float f, c, k;
    switch (id)
    {
    //case 1: type = celcius
    case 'C':
    case 'c':
        //acknowledge the input:
        printf("%0.2f C converts to:\n",deg);

        //first convert to Fahrenheit (Formula: 1.8C + 32) and then print:
        f=1.8*deg+32;
        printf("\t%0.2f F\n",f);
        
        //then convert to Kelvin (Formula: C+273.15) and then print:
        k=deg+273.15;
        printf("\t%0.2f K",k);
        
        //return 0 to signify success
        return 0;
        break;
    case 'K':
    case 'k':
        //acknowledge the input:
        printf("%0.2f K converts to:");

        //first convert to Celcius (Formula: K-273.15) and then print:
        c=deg-273.15;
        printf("\t%0.2f C\n",c);

        //then convert to Fahrenheit (Formula: 1.8(K-273.15)+32) and print:
        f=1.8 *(deg-273.15) +32;
        printf("\t%0.2f F\n",f);
        break;
    case 'F':
    case 'f':
        //acknowledge the input:
        printf("%0.2f F converts to:");

        //first convert to Kelvin (Formula: ((F-32)/1.8)+273.15 and print:
        k=((deg-32)/1.8)+273.15;
        printf("\t%0.2f K\n",k);

        //then convert to Celcius (Formula: (F-32)/1.8) and print:
        c=(deg-32)/1.8;
        printf("\t%0.2f C\n",c);
        break;
    //if input is invalid return -1
    default:
        printf("Invalid temperature scale");
        return -1;
        break;
    }
}
