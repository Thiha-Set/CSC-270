#include <stdio.h>

int fun(int run)
{
    static int static_count=0;
    int count=0;

    count+=2;
    static_count+=2;
    run++;

    return printf("Run %d, static_count= %d, count = %d\n",run,static_count,count);

}
int main(){
    for(int i=0;i<5;i++)
    {
        fun(i);
    }
    return 0;
}