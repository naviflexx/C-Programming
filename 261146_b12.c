#include<stdio.h>
int my_sqrt(int x) {
    long long i;
    i=0;
    while((i+1)*(i+1)<=x) {
        i++;
    }
    return i;
}
int main() {
    int x;
    printf("Enter x\n");
    scanf("%d",&x);
    printf("%d\n",my_sqrt(x));
}