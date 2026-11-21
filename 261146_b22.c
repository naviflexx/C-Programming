#include <stdio.h>

void sort_colors(int *arr, int size){
    int l=0, m=0, h=size-1, t;
    while(m<=h){
        if(arr[m]==0){
            t=arr[l]; arr[l]=arr[m]; arr[m]=t;
            l++; m++;
        }
        else if(arr[m]==1) m++;
        else{
            t=arr[m]; arr[m]=arr[h]; arr[h]=t;
            h--;
        }
    }
}

int main(){
    int a[]={2,0,1,2,1,0}, n=6, i;
    sort_colors(a, n);
    for(i=0; i<n; i++) printf("%d ", a[i]);
    return 0;
}