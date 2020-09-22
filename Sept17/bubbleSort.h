#ifndef BUBBLESORT_FILE
#define BUBBLESORT_FILE
void bubbleSort(unsigned int a[],int size);
void bubbleSort(unsigned int a[],int size){
    //check if array is empty. If empty do nothing
    if(size <= 0)
        return;
    else
    {
        for(unsigned int pass = 1; pass <size; pass++)
        {
            for(int i=0;i<size-1;i++)
            {
                //if the current elem is greater than next elem
                if(a[i]>a[i+1])
                {
                    //switch the two elems
                    int temp=a[i+1];
                    a[i+1]=a[i];
                    a[i]=temp;
                }
            }
        }
        
    }
    
}
#endif