#include <stdio.h>
int main(){
    //ask user input
    float deg;
    char id;
    printf("Enter input temperature: ");
    scanf("%f%c",&deg,&id);

    //check what the user-inputted temperature unit is (whether it was fahrenheit, celsius, or kelvin, and proceed accordingly)
    //declare vars representing the different types
    float f, c, k;
    switch (id)
    {
    //case 1: type = Celcius
    case 'C':
    case 'c':
        //acknowledge the input:
        printf("%0.2f Celsius converts to:\n",deg);

        //first convert to Fahrenheit (Formula: 1.8C + 32) and then print:
        f=1.8*deg+32;
        printf("\t%0.2f F\n",f);
        
        //then convert to Kelvin (Formula: C+273.15) and then print:
        k=deg+273.15;
        printf("\t%0.2f K",k);
        
        //return 0 to signify success
        return 0;
        break;
    //case 2: type = Kelvin
    case 'K':
    case 'k':
        //acknowledge the input:
        printf("%0.2f Kelvin converts to:\n",deg);

        //first convert to Celcius (Formula: K-273.15) and then print:
        c=deg-273.15;
        printf("\t%0.2f C\n",c);

        //then convert to Fahrenheit (Formula: 1.8(K-273.15)+32) and print:
        f=1.8 *(deg-273.15) +32;
        printf("\t%0.2f F\n",f);
        break;
    //case 3: type = Fahrenheit
    case 'F':
    case 'f':
        //acknowledge the input:
        printf("%0.2f Fahrenheit converts to:\n",deg);

        //convert to Celcius (Formula: (F-32)/1.8) and print:
        c=(deg-32)/1.8;
        printf("\t%0.2f C\n",c);

        //convert to Kelvin (Formula: ((F-32)/1.8)+273.15 and print:
        k=((deg-32)/1.8)+273.15;
        printf("\t%0.2f K\n",k);
        break;
    //if input is invalid return -1
    default:
        printf("Invalid temperature scale ");
        return -1;
        break;
    }
}
