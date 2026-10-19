#include<stdio.h>

int main(){
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int p = 0 ; p < size ; p++){
        scanf("%d", &arr[p]);
    }
    int smallest = arr[0];
    for(int p = 1 ; p < size ; p++){
        if(smallest > arr[p]) {
            smallest = arr[p];
        }
    }
    printf("%d", smallest);
    
}