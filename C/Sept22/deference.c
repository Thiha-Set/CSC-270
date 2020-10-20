#include <stdio.h>
int main(){
    int a = 7, d;
    int *aPtr; //Un-initialized pointer

    aPtr = &a; //stores address of a in ptr
    d = *aPtr; //put value at ptr in d

    printf("a = %p\naPtr = %p\n*aPtr = %p\n",a,aPtr,d);


}