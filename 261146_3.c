#include<stdio.h>

int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i=0; i<n; i++){
        int x;
        scanf("%d" , &x);
        arr[i]=x;
    }
    int leader=0;
    for(int i=n-1; i>=0; i--){
        if(arr[i]>leader){
            leader = arr[i];
            printf("%d " , arr[i]);
        }
    }
    printf("\n");
}