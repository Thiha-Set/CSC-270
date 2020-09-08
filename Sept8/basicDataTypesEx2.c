#include <stdio.h>
#include <float.h>
int main(){
    float f;
    double d;
    f=70.0/3.0;
    d=70.0/3.0;
    printf("value of f: %f, or %0.4f\n", f,f);
    printf("value of d: %lf\n",d);

    printf("float Size: %lu \n",sizeof(float));
    printf("float Min: %E\n",FLT_MIN);
    printf("float Max: %E\n",FLT_MAX);
    printf("Acc: %d\n",FLT_DIG);
}