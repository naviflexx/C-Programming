#include<stdio.h>
int main() {
    int x,y;
    x=10;
    y=0;
    for(;x>0;y+=x,x--) {
    }
    printf("%d\n",y);
}