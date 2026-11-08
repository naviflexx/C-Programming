#include<stdio.h>
int main() {
    int a[5]={10,20,30,40,50};
    int *p;
    p=a;

    printf("%d\n",*p);
    printf("%d\n",*(p+1));
    printf("%d\n",*(p+3));

    printf("%p\n",(void*)&a[2]);
    printf("%p\n",(void*)(p+2));
    printf("%d\n",*(&a[2]));

    printf("%p\n",(void*)&a[4]);
    printf("%d\n",*(&a[4]));
}