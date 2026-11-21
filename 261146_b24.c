#include <stdio.h>

void search_range(int *a, int n, int t, int *s, int *e){
    int l=0, h=n-1, m;
    *s=-1; *e=-1;
    while(l<=h){
        m=l+(h-l)/2;
        if(a[m]==t){ *s=m; h=m-1; }
        else if(a[m]<t) l=m+1;
        else h=m-1;
    }
    l=0; h=n-1;
    while(l<=h){
        m=l+(h-l)/2;
        if(a[m]==t){ *e=m; l=m+1; }
        else if(a[m]<t) l=m+1;
        else h=m-1;
    }
}

int main(){
    int a[]={1,2,2,2,3,4,5}, n=7, t=2, s, e;
    search_range(a, n, t, &s, &e);
    printf("[%d, %d]", s, e);
    return 0;
}