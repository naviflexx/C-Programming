#include<stdio.h>
int main() {
    float x;
    int i;
    x=0;
    i=0;
    do {
        x=x+0.1;
        i++;
    } while(x!=1.0 && i<20);
    printf("%d\n",i);
    printf("%f\n",x);
}