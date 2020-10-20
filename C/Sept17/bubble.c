#include <stdio.h>
#include "bubbleSort.h"
#define SIZE 8
int main(){
    int c[]={3,11,4,1,5,7,2,1};
    printf("Data items in original order\n");
    for(size_t i=0;i<SIZE;i++)
    {
        printf("%4d",c[i]);
    }
    bubbleSort(c,SIZE);
    printf("Data items after being sorted\n");
    for(int i=0;i<SIZE;i++)
    {
        printf("%d,",c[i]);        
    }
    return 0;
}