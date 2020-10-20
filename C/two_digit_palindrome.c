#include <stdio.h>
#include <stdbool.h>
int checkPalind(int num);
int reverse(int num);
int main(){
    //set counter(s) to iterate through
    int counter1=10;
    //set value(s) to hold the two values that compound to the highest palindrome number
    int val1=0;
    int val2=0;

    //set current palind
    int currentPalind= 0;

    while(counter1<=99){ 
        int counter2=10;
        while(counter2<=99)
        {
            //find product of counter1 and counter2
            int prod=counter1*counter2;
            printf("prod is %d\n",prod);

            //check to see if it is a palindrome
            int check=checkPalind(prod);
            printf("check is %d\n",check);

            //if so, check if prod > currentPalind
            if(check==1)
            {
                if(prod>currentPalind)
                {
                    val1=counter1;
                    val2=counter2;
                    printf("currentPalind is %d\n",currentPalind);
                    //if it is, then update currentPalind
                    currentPalind=prod;
                    
                }
            
            }
            //increment counter2
            counter2++;
        }
        //increment counter1
        counter1++;
    }
    printf("The highest palindrome is %d\n and is the product of %d\n and %d\n",currentPalind,val1,val2);
    return 0;
}
int reverse(int num)
{
    //create a holding var for the reverse and assign it to 0
    int reverse=0;
    //as long as num is greater than 0...
    while(num>0)
    {
        //get the last digit of num, and add it to the respective place in reverse (determined by multiplication of 10 (simulate base 10))
        reverse=reverse*10+num%10;

        //update num to the next digit
        num=num/10;
    }
    return reverse;
}

int checkPalind(int num){
    //get the reverse of num
    int reverseNum=reverse(num);

    //compare the values
    if(reverseNum==num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}