#include <stdio.h>
//declare prototype(s)
int checkPalind(int num);
int reverse(int num);

int main(){
    //ALGORITHM: iterate through all values [100,999] and check to see if the product of two numbers within the specified interval are a palindrome.
    //WRITE/USE HELPER METHODS: checkPalind(int num) and reverse(int num) to assist in reversing the ints and seeing whether or not a palindrome exists.
    //have two counters, counter1 and counter2 (both starting at the lowest possible three-digit index, which is 100) iterate through
    //all [100,999]
    //set counter(s) to iterate through
    int counter1=100;
    //set value(s) to hold the two values that compound to the highest palindrome number
    int val1=0;
    int val2=0;

    //set current palind
    int currentPalind= 0;

    while(counter1<=999){
        //set counter2 inside the loop, because if set outside the loop, then its value will reset once the integrated loop
        //finishes iterating... 
        int counter2=100;
        while(counter2<=999)
        {
            //find product of counter1 and counter2
            int prod=counter1*counter2;
            //check if palindrome
            int check=checkPalind(prod);
            //if palindrome, check if larger than current Palind
            if(check==1)
            {
                //if prod is greater than the currentPalind
                if(prod>currentPalind)
                {
                    //save the values in a temp container
                    val1=counter1;
                    val2=counter2;

                    //reassign currentPalind to prod
                    currentPalind=prod;
                }
            }
            //increment counter2
            counter2++;
        } 
        //increment counter1 
        counter1++;
    }
    //format the output
    printf("%d, %d, %d\n",val1,val2,currentPalind);
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
        //where reverse * 10 gets the respective place of the digit to add it to
        //and num % 10 gets the last digit of num
        reverse=reverse * 10 + num % 10;

        //update num to the next digit
        num=num/10;
    }
    return reverse;
}

int checkPalind(int num){
    //get the reverse of num
    int reverseNum=reverse(num);

    //compare the values
    //if reverse of the number is equal then return 1, otherwise return 0
    if(reverseNum==num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}